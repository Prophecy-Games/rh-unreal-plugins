
#include "RH_GameInstanceSessionSubsystem.h"
#include "RH_GameInstanceSubsystem.h"
#include "RH_LocalPlayerSubsystem.h"
#include "RallyHereIntegrationModule.h"
#include "RH_ConfigSubsystem.h"
#include "Engine/GameInstance.h"
#include "Engine/Engine.h"
#include "SessionsAPI.h"
#include "RH_Beacons.h"

// used to validate state of local players before joining an instance
#include "Engine/LocalPlayer.h"
#include "RH_LocalPlayerSessionSubsystem.h"
#include "RH_GameInstanceBootstrappers.h"

// used to look up local IP as a temporary method for determining join IP
#include <SocketSubsystem.h>
#include <IPAddress.h>
#include "Interfaces/IPv4/IPv4Address.h"

//==================================================================

bool URH_GameInstanceSessionSubsystem::GenerateHostURL(const URH_JoinedSession* Session, FURL& lastURL, FURL& outURL) const
{
	if (Session == nullptr)
	{
		return false;
	}

	const auto Instance = Session->GetInstanceData();
	if (Instance == nullptr)
	{
		return false;
	}

	const auto InstanceStartupParams = Instance->GetInstanceStartupParamsOrNull();
	if (!InstanceStartupParams)
	{
		return false;
	}

	FString FormattedURLString = InstanceStartupParams->Map;
	if (const auto Mode = InstanceStartupParams->GetModeOrNull())
	{
		FormattedURLString += FString::Printf(TEXT("?game=%s"), **Mode);
	}

	FURL TravelURL(&lastURL, *FormattedURLString, TRAVEL_Absolute);

	// add the RH Session ID to the URL.  This is used to identify if a map loaded was on behalf of the session, for tracking reasons (ex: enable it to be joined once load completes)
	TravelURL.AddOption(*FString::Printf(TEXT("%s%s"), RH_SESSION_PARAMETER_NAME, *Session->GetSessionId()));
	
	if (!IsRunningDedicatedServer())	// dedicated servers always listen
	{
		if (!Session->IsOffline())		// temporary check until we have a template setting for joinability type
		{
			TravelURL.AddOption(TEXT("Listen"));
		}
	}

	if (TravelURL.Valid && TravelURL.Map.Len() > 0)
	{
		outURL = TravelURL;
		return true;
	}
	return false;
}

bool URH_GameInstanceSessionSubsystem::GenerateJoinURL(const URH_JoinedSession* Session, FURL& lastURL, FURL& outURL) const
{
	if (Session == nullptr)
	{
		return false;
	}

	auto* Instance = Session->GetInstanceData();
	if (Instance == nullptr)
	{
		return false;
	}

	if (Instance->JoinStatus != ERHAPI_InstanceJoinableStatus::Joinable)
	{
		return false;
	}

	const auto JoinParams = Instance->GetJoinParamsOrNull();
	if (!JoinParams || (JoinParams->PublicConnStr.Len() == 0 && JoinParams->PrivateConnStr.Len() == 0))
	{
		return false;
	}

	// TODO - determine private vs public connection
	bool bUsePublic = JoinParams->PublicConnStr.Len() > 0;
	{
		// rule out the default address, which is the Any address in IPv4
		FIPv4Address Addr;
		if (FIPv4Address::Parse(JoinParams->PublicConnStr, Addr) && Addr == FIPv4Address::Any)
		{
			bUsePublic = false;
		}
	}
	const FString FormattedURLString = bUsePublic ? JoinParams->PublicConnStr : JoinParams->PrivateConnStr;

	FURL TravelURL(&lastURL, *FormattedURLString, TRAVEL_Absolute);

	TravelURL.AddOption(*FString::Printf(TEXT("%s%s"), RH_SESSION_PARAMETER_NAME, *Session->GetSessionId()));

	if (TravelURL.Valid && TravelURL.Host.Len() > 0)
	{
		outURL = TravelURL;
		return true;
	}
	
	return false;
}

void URH_GameInstanceSessionSubsystem::Initialize()
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	Super::Initialize();

	FCoreUObjectDelegates::PostLoadMapWithWorld.AddUObject(this, &URH_GameInstanceSessionSubsystem::OnMapLoadComplete);
	if (GEngine != nullptr)
	{
		GEngine->OnNetworkFailure().AddUObject(this, &URH_GameInstanceSessionSubsystem::OnNetworkFailure);
		GEngine->OnTravelFailure().AddUObject(this, &URH_GameInstanceSessionSubsystem::OnTravelFailure);
	}
}

void URH_GameInstanceSessionSubsystem::Deinitialize()
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));
	Super::Deinitialize();

	// explicitly do not sync state to null, just clear pointers
	DesiredSession = nullptr;
	ActiveSession = nullptr;

	FWorldDelegates::OnPostWorldInitialization.RemoveAll(this);
	if (GEngine != nullptr)
	{
		GEngine->OnNetworkFailure().RemoveAll(this);
		GEngine->OnTravelFailure().RemoveAll(this);
	}
}

void URH_GameInstanceSessionSubsystem::OnMapLoadComplete(UWorld* World)
{
	const UGameInstance* pGameInstance = GetGameInstanceSubsystem()->GetGameInstance();
	check(pGameInstance != nullptr);	// if this is somehow nullptr, this object should not exist, and we are in a very broken state

	const FWorldContext* pWorldContext = pGameInstance->GetWorldContext();
	if (pWorldContext == nullptr || pWorldContext->World() != World)
	{
		// not for our world
		return;
	}

	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	if (ActiveSession != nullptr)
	{
		// this can happen if a map load fails to create the UWorld
		if (World == nullptr)
		{
			// in this case, the engine should abort the load and load a new map with the ?closed or ?failed flags, handled below.  We will handle it in that case, as too many things depend on the UWorld reference (rather than the Context)
			return;
		}

		const FURL& URL = World->URL;

		const bool bHasSessionId = URL.HasOption(RH_SESSION_PARAMETER_NAME);
		const FString SessionId = URL.GetOption(RH_SESSION_PARAMETER_NAME, TEXT(""));

		if (URL.HasOption(TEXT("closed")) || URL.HasOption(TEXT("failed")) || !bHasSessionId || SessionId != ActiveSession->GetSessionId())
		{
			StartLeaveInstanceFlow(true);
			return;
		}

		if (IsLocallyHostedSession(ActiveSession))
		{
			// instance info updates are not really properly using optional flags, so get a default object and pass it
			FRHAPI_InstanceInfoUpdate InstanceInfo = ActiveSession->GetInstanceUpdateInfoDefaults();
			// make sure we send version in case we are updating joinability.  Its possible the default object above will not have received it yet
			InstanceInfo.SetVersion(URH_JoinedSession::GetClientVersionForSession());

			FString PublicConnStr;
			FString PrivateConnStr;

			// if dedicated server, look up the server's join parameters, else inspect locally (TODO - find a better lookup for a public IP for P2P)
			if (GetGameInstanceSubsystem()->GetServerBootstrapper() != nullptr && GetGameInstanceSubsystem()->GetServerBootstrapper()->DetermineJoinParameters(PublicConnStr, PrivateConnStr))
			{
				InstanceInfo.JoinParams_IsSet = true;
				InstanceInfo.GetJoinParams().PublicConnStr = PublicConnStr;
				InstanceInfo.GetJoinParams().PrivateConnStr = PrivateConnStr;
			}
			else
			{
				// fall back to local LAN detection
				auto* NetDriver = World->GetNetDriver();
				if (NetDriver != nullptr && NetDriver->IsServer() && NetDriver->GetSocketSubsystem() != nullptr && World->URL.Port > 0)
				{
					bool bCanBind = false;
					const TSharedRef<FInternetAddr> LocalIp = NetDriver->GetSocketSubsystem()->GetLocalHostAddr(*GLog, bCanBind);
					if (LocalIp->IsValid()) // validity check for the address not the shared ref
					{
						const auto LocalIPModified = LocalIp->Clone();
						// world URL should have the port that was opened for listen
						LocalIPModified->SetPort(World->URL.Port);

						// temp - parse as IPv4 to determine if it should be public or private
						FIPv4Address tempIPv4;
						if (FIPv4Address::Parse(LocalIPModified->ToString(false), tempIPv4) && tempIPv4.IsSiteLocalAddress())
						{
							InstanceInfo.JoinParams_IsSet = true;
							InstanceInfo.GetJoinParams().PublicConnStr.Empty();
							InstanceInfo.GetJoinParams().PrivateConnStr = TEXT("unreal://") + LocalIPModified->ToString(true);
						}
						else
						{
							// add unreal protocol name
							InstanceInfo.JoinParams_IsSet = true;
							InstanceInfo.GetJoinParams().PublicConnStr = TEXT("unreal://") + LocalIPModified->ToString(true);
							InstanceInfo.GetJoinParams().PrivateConnStr.Empty();
						}
					}
				}
			}


			// if it is a beacon, convert world to beacon mode
			if (ActiveSession && ActiveSession->IsBeaconSession())
			{
				CreateBeaconHost(World, World->URL.Port, true);
			}

			const bool bRequireConnectivity = IsRunningDedicatedServer(); //|| World->URL.HasOption(TEXT("listen"));
			if (!bRequireConnectivity || InstanceInfo.GetJoinParams().PublicConnStr.Len() > 0 || InstanceInfo.GetJoinParams().PrivateConnStr.Len() > 0)
			{
				InstanceInfo.SetJoinStatus(ERHAPI_InstanceJoinableStatus::Joinable);
				if (!InstanceInfo.GetJoinParams().GetCustomData().Contains(RH_SessionCustomDataKeys::SessionSecurityTokenName))
				{
					InstanceInfo.GetJoinParams().GetCustomData().Add(RH_SessionCustomDataKeys::SessionSecurityTokenName, FGuid::NewGuid().ToString());
					InstanceInfo.GetJoinParams().CustomData_IsSet = true;
					InstanceInfo.JoinParams_IsSet = true;
				}

				ActiveSession->UpdateInstanceInfo(InstanceInfo);
			}
			else
			{
				UE_LOG(LogRallyHereIntegration, Error, TEXT("Session %d could not find a valid connection string on the host"));
				StartLeaveInstanceFlow();
			}
			
		}
	}
}

void URH_GameInstanceSessionSubsystem::OnNetworkFailure(UWorld* World, UNetDriver* NetDriver, ENetworkFailure::Type FailureType, const FString& ErrorString)
{
	// Stub in case it is needed, the default engine handler should close the map which we detect above
}

void URH_GameInstanceSessionSubsystem::OnTravelFailure(UWorld* World, ETravelFailure::Type FailureType, const FString& ErrorString)
{
	const UGameInstance* pGameInstance = GetGameInstanceSubsystem()->GetGameInstance();
	check(pGameInstance != nullptr);	// if this is somehow nullptr, this object should not exist, and we are in a very broken state

	const FWorldContext* pWorldContext = pGameInstance->GetWorldContext();
	if (pWorldContext == nullptr || pWorldContext->World() != World)
	{
		// not for our world
		return;
	}

	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s] - %s"), ANSI_TO_TCHAR(__FUNCTION__), *ErrorString);

	if (ActiveSession != nullptr)
	{
		StartLeaveInstanceFlow(true);
	}
}

ARH_OnlineBeaconHost* URH_GameInstanceSessionSubsystem::CreateBeaconHost(UWorld* pWorld, uint32 Port, bool bShutdownWorldNetDriver)
{
	if (pWorld == nullptr)
	{
		return nullptr;
	}

	if (bShutdownWorldNetDriver)
	{
		GEngine->ShutdownWorldNetDriver(pWorld);
	}

	auto* pBeaconHost = pWorld->SpawnActor<ARH_OnlineBeaconHost>();

	// change port to specified port
	pBeaconHost->ListenPort = Port;
	pBeaconHost->InitHost();

	// fire delegates to allow registration of handler objects
	{
		SCOPED_NAMED_EVENT(RallyHere_BroadcastBeaconCreated, FColor::Purple);
		OnBeaconCreated.Broadcast(pBeaconHost);
		BLUEPRINT_OnBeaconCreated.Broadcast(pBeaconHost);
	}

	pBeaconHost->PauseBeaconRequests(false);

	return pBeaconHost;
}

void URH_GameInstanceSessionSubsystem::SyncToSession(URH_JoinedSession* SessionInfo, const FRH_GameInstanceSessionSyncBlock& Delegate)
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	// swap our session data for the update
	DesiredSession = SessionInfo;

	const FRHAPI_InstanceInfo* newInstanceData = DesiredSession != nullptr ? DesiredSession->GetInstanceData() : nullptr;

	// if we are in a session, and we do not want to be, start leaving (regardless of destination)
	if (ActiveSession != nullptr && ActiveSession != DesiredSession)
	{
		// leave instance flow will call join flow on the desired session
		StartLeaveInstanceFlow(false, true, Delegate);
	}
	// if we have a session to join and are not in one
	else if (ActiveSession == nullptr && DesiredSession != nullptr)
	{
		StartJoinInstanceFlow(Delegate);
	}
	// we are already in the correct instance
	else 
	{
		check(ActiveSession == DesiredSession);
		Delegate.ExecuteIfBound(true);
	}
}

bool URH_GameInstanceSessionSubsystem::IsReadyToJoinInstance(const URH_JoinedSession* Session, bool bLog) const
{
	if (Session->IsActive())
	{
		// session is already active, cannot join it
		UE_CLOG(bLog, LogRallyHereIntegration, Verbose, TEXT("[%s] - Session already active"), ANSI_TO_TCHAR(__FUNCTION__));
		return false;
	}

	const auto* Instance = Session->GetInstanceData();
	if (Instance == nullptr)
	{
		// session has no instance to join
		UE_CLOG(bLog, LogRallyHereIntegration, Verbose, TEXT("[%s] - Session has no instance"), ANSI_TO_TCHAR(__FUNCTION__));
		return false;
	}

	// todo - ensure all local players are in the session
	// see if host player id is in the list of local players
	UGameInstance* pGameInstance = GetGameInstanceSubsystem()->GetGameInstance();
	if (pGameInstance != nullptr)
	{
		const auto LocalPlayers = pGameInstance->GetLocalPlayers();
		for (auto LP : LocalPlayers)
		{
			auto pLPSubsystem = LP->GetSubsystem<URH_LocalPlayerSubsystem>();
			if (pLPSubsystem != nullptr && !pLPSubsystem->GetSessionSubsystem()->IsInSession(Session->GetSessionId()))
			{
				// someone is not in the session
				FGuid playerId = FGuid();
				RH_GetPlayerIdFromLocalPlayer(LP, &playerId);
				UE_CLOG(bLog, LogRallyHereIntegration, Verbose, TEXT("[%s] - player %s not in session"), ANSI_TO_TCHAR(__FUNCTION__), *playerId.ToString());
				return false;
			}
		}
	}

	auto pWorldContext = pGameInstance->GetWorldContext();

	if (IsLocallyHostedInstance(*Instance))
	{
		FURL hostURL;
		if (GenerateHostURL(Session, pWorldContext->LastURL, hostURL) && hostURL.Valid && hostURL.Map.Len() > 0)
		{
		}
		else
		{
			UE_CLOG(bLog, LogRallyHereIntegration, Verbose, TEXT("[%s] - Locally hosted session cannot generated host URL"), ANSI_TO_TCHAR(__FUNCTION__));
			return false;
		}
	}
	else
	{
		// specifically call out joinable state errors
		if (Instance->GetJoinStatus() != ERHAPI_InstanceJoinableStatus::Joinable)
		{
			UE_CLOG(bLog, LogRallyHereIntegration, Verbose, TEXT("[%s] - Instance is not in joinable state"), ANSI_TO_TCHAR(__FUNCTION__));
			return false;
		}

		FURL JoinURL;
		if (!GenerateJoinURL(Session, pWorldContext->LastURL, JoinURL))
		{
			UE_CLOG(bLog, LogRallyHereIntegration, Verbose, TEXT("[%s] - Could not generate join URL"), ANSI_TO_TCHAR(__FUNCTION__));
			return false;
		}
	}

	return true;
}

const FRHAPI_InstanceInfo* URH_GameInstanceSessionSubsystem::GetInstance() const
{
	if (ActiveSession != nullptr)
	{
		return ActiveSession->GetSessionData().GetInstanceOrNull();
	}

	return nullptr;
}

bool URH_GameInstanceSessionSubsystem::IsLocallyHostedInstance(const FRHAPI_InstanceInfo& Instance) const
{
	// determine whether a local player is host player
	if (IsRunningDedicatedServer())
	{
		// TEMP DISABLED WHILE INSTANCE REGISTRATION IS BEING FINALIZED
		//check(Instance.HostType == ERHAPI_HostType::Dedicated);
		return true;
	}
	else if (Instance.HostType == ERHAPI_HostType::Player)
	{
		// see if host player id is in the list of local players
		UGameInstance* pGameInstance = GetGameInstanceSubsystem()->GetGameInstance();
		if (pGameInstance != nullptr)
		{
			const TArray<ULocalPlayer*> LocalPlayers = pGameInstance->GetLocalPlayers();
			for (auto player : LocalPlayers)
			{
				FGuid playerId;
				if (RH_GetPlayerIdFromLocalPlayer(player, &playerId)
					&& playerId == Instance.GetHostPlayerUuid())
				{
					return true;
				}
			}
		}
	}

	return false;
}

bool URH_GameInstanceSessionSubsystem::IsPlayerLocal(const FRHAPI_SessionPlayer& Player) const
{
	// see if host player id is in the list of local players
	const UGameInstance* pGameInstance = GetGameInstanceSubsystem()->GetGameInstance();
	if (pGameInstance != nullptr)
	{
		const TArray<ULocalPlayer*> LocalPlayers = pGameInstance->GetLocalPlayers();
		for (const auto LocalPlayer : LocalPlayers)
		{
			FGuid PlayerId;
			if (RH_GetPlayerIdFromLocalPlayer(LocalPlayer, &PlayerId)
				&& PlayerId == Player.PlayerUuid)
			{
				return true;
			}
		}
	}

	return false;
}

bool URH_GameInstanceSessionSubsystem::StartJoinInstanceFlow(const FRH_GameInstanceSessionSyncBlock& Delegate)
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	if (DesiredSession == nullptr || !DesiredSession->GetSessionData().GetInstanceOrNull())
	{
		Delegate.ExecuteIfBound(false);
		return false;
	}
	else if (!IsReadyToJoinInstance(DesiredSession, true))
	{
		Delegate.ExecuteIfBound(false);
		return false;
	}

	const FRHAPI_Session& Session = DesiredSession->GetSessionData();
	const FRHAPI_InstanceInfo& Instance = DesiredSession->GetSessionData().GetInstance();

	UE_LOG(LogRallyHereIntegration, Log, TEXT("Starting join of Instance under Session %s"), *Session.SessionId);

	// kick travel with flags
	UGameInstance* pGameInstance = GetGameInstanceSubsystem()->GetGameInstance();
	check(pGameInstance != nullptr);	// if this is somehow nullptr, this object should not exist, and we are in a very broken state

	FWorldContext* pWorldContext = pGameInstance->GetWorldContext();
	check(pWorldContext != nullptr && pWorldContext->World() != nullptr);	// if we are somehow travelling without a world context, we are in a broken state, and should not have gotten to this point

	if (IsLocallyHostedInstance(Instance))
	{
		FURL hostURL;
		if (GenerateHostURL(DesiredSession, pWorldContext->LastURL, hostURL) && hostURL.Valid && hostURL.Map.Len() > 0)
		{
			UE_LOG(LogRallyHereIntegration, Log, TEXT("Setting travel to %s"), *hostURL.ToString());

			// set state now before we start travel (which may fail in line)
			DesiredSession->SetActive(true);
			DesiredSession->SetWatchingPlayers(true);
			ActiveSession = DesiredSession;

			// clear fubar flag for new tracking
			bHasBeenMarkedFubar = false;

			// set status to pending before starting travel (it will run asyncnrhonously on the http thread while travelling)
			FRHAPI_InstanceInfoUpdate InstanceInfo = ActiveSession->GetInstanceUpdateInfoDefaults();
			InstanceInfo.SetJoinStatus(ERHAPI_InstanceJoinableStatus::Pending);
			InstanceInfo.SetVersion(URH_JoinedSession::GetClientVersionForSession());
			ActiveSession->UpdateInstanceInfo(InstanceInfo);

			bool bTravelStarted = pWorldContext->World()->ServerTravel(hostURL.ToString(false), true, false);

			Delegate.ExecuteIfBound(bTravelStarted);
			return true;
		}
		else
		{
			UE_LOG(LogRallyHereIntegration, Warning, TEXT("Could not host session because URL could not be generated correctly"));

			StartLeaveInstanceFlow(false, false, Delegate);
			return false;
		}
	}
	
	FURL JoinURL;
	if (GenerateJoinURL(DesiredSession, pWorldContext->LastURL, JoinURL))
	{
		UE_LOG(LogRallyHereIntegration, Log, TEXT("Setting travel to %s"), *JoinURL.ToString());

		// set state now before we start travel (which may fail in line)
		DesiredSession->SetActive(true);
		DesiredSession->SetWatchingPlayers(true);
		ActiveSession = DesiredSession;

		FString JoinURLString;
		{
			// since we allow hostnames, which parse incorrectly in the engine when using the default port, temporarily change the default port so taht we can generate the URL properly but contain the default port
			TGuardValue<int32> PortGuard(FURL::UrlConfig.DefaultPort, -1); // DefaultPort is a signed in, this should never match, causing it to always be emitted into the string
			JoinURLString = JoinURL.ToString(true);
		} 

		GEngine->SetClientTravel(pWorldContext->World(), *JoinURLString, TRAVEL_Absolute);

		Delegate.ExecuteIfBound(true);
		return true;
	}
	else
	{
		UE_LOG(LogRallyHereIntegration, Warning, TEXT("Could not join session because URL could not be generated correctly"));
	}
	
	Delegate.ExecuteIfBound(false);
	return false;
}

void URH_GameInstanceSessionSubsystem::StartLeaveInstanceFlow(bool bAlreadyDisconnected, bool bCheckDesired, const FRH_GameInstanceSessionSyncBlock& Delegate)
{
	UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	// kick travel to default map
	const UGameInstance* pGameInstance = GetGameInstanceSubsystem()->GetGameInstance();
	check(pGameInstance != nullptr);	// if this is somehow nullptr, this object should not exist, and we are in a very broken state

	if (ActiveSession != nullptr && IsLocallyHostedSession(ActiveSession))
	{
		// instance info updates are not really properly using optional flags, so get a default object and pass it
		FRHAPI_InstanceInfoUpdate InstanceInfo = ActiveSession->GetInstanceUpdateInfoDefaults();

		// host has left the world
		InstanceInfo.SetJoinStatus(ERHAPI_InstanceJoinableStatus::Closed);

		ActiveSession->UpdateInstanceInfo(InstanceInfo);
	}

	// since we need to catch cases where we disconnected from a session without using the normal leave flow, route other disconnects through here but prevent recursion
	if (!bAlreadyDisconnected)
	{
		GEngine->HandleDisconnect(pGameInstance->GetWorld(), pGameInstance->GetWorld()->GetNetDriver());
	}

	// clear out active session.
	if (ActiveSession != nullptr)
	{
		ActiveSession->SetActive(false);
		ActiveSession->SetWatchingPlayers(false);
		ActiveSession = nullptr;
	}

	if (bCheckDesired && DesiredSession != nullptr)
	{
		StartJoinInstanceFlow(Delegate);
	}
	else
	{
		Delegate.ExecuteIfBound(true);
	}
}

void URH_GameInstanceSessionSubsystem::MarkInstanceFubar(const FString& Reason, const FRH_GenericSuccessWithErrorBlock& Delegate)
{
	if (ActiveSession != nullptr && !bHasBeenMarkedFubar)
	{
		bHasBeenMarkedFubar = true;
		typedef RallyHereAPI::Traits_ReportFubar BaseType;

		BaseType::Request Request = {};
		Request.AuthContext = GetAuthContext();
		Request.SessionId = ActiveSession->GetSessionId();
		Request.InstanceFubar.SetRegion(ActiveSession->GetSessionData().GetRegionId());
		//Request.InstanceFubar.SetMatchmakingProfileId()
		Request.InstanceFubar.SetError(Reason);

		auto* Instance = ActiveSession->GetInstanceData();
		if (Instance != nullptr)
		{
			Request.InstanceFubar.SetInstanceId(Instance->GetInstanceId());
			if (Instance->HostType == ERHAPI_HostType::Player)
			{
				Request.InstanceFubar.SetInstanceSourceProvider(ERHAPI_InstanceSourceProvider::Player);
			}
			else
			{
				// not sure how to determine other host types
			}
		}

		auto Helper = MakeShared<FRH_SimpleQueryHelper<BaseType>>(
			BaseType::Delegate(),
			Delegate,
			GetDefault<URH_IntegrationSettings>()->SessionInstanceMarkFubarPriority
		);

		Helper->Start(RH_APIs::GetSessionsAPI(), Request);
	}
}