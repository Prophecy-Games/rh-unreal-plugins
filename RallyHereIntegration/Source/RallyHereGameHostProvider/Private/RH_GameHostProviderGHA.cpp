
#include "RH_GameHostProviderGHA.h"
#include "Async/TaskGraphInterfaces.h"
#include "Misc/App.h"
#include "Misc/EngineVersion.h"
#include "Misc/Paths.h"
#include "Tickable.h"
#include "Misc/ScopeExit.h"
#include "Async/TaskGraphInterfaces.h"

#include "RH_GameHostAdapter.h"

bool FRH_GameHostProviderGHA::IsAvailable()
{
	if (FParse::Param(FCommandLine::Get(), TEXT("ForceNoGHA")))
	{
		return false;
	}

	return GameHostAdapterImporter::Import();
}

FRH_GameHostProviderGHA::FRH_GameHostProviderGHA(const FString& Commandline)
	: IRH_GameHostProviderInterface(Commandline), GameHostAdapter(nullptr)
{
	auto result = rallyhere_create_game_instance_adapter_with_logger(&GameHostAdapter, TCHAR_TO_UTF8(*Commandline), FRH_GameHostProviderGHA::OnLogCallback, nullptr);

	UE_LOG(LogRHGameHostProvider, Warning, TEXT("[%s] - Create game host adapter result %u:%s"), ANSI_TO_TCHAR(__FUNCTION__), result, ANSI_TO_TCHAR(rallyhere_status_text(result)));

	if (!rallyhere_is_error(result))
	{
		// bind callbacks
		rallyhere_on_soft_stop_callback(GameHostAdapter, FRH_GameHostProviderGHA::OnSoftStopRequestedCallback, this);

		// write initial stats
		RallyHereStatsBase stats{};
		RallyHereStatsBaseProvided provided{};
		memset(&provided, 0x00, sizeof(provided));

		FTCHARToUTF8 InstanceName((const TCHAR*)*FApp::GetInstanceId().ToString());
		FTCHARToUTF8 LaunchDir((const TCHAR*)*FPaths::LaunchDir());
		FTCHARToUTF8 ProjectName((const TCHAR*)FApp::GetProjectName());
		FTCHARToUTF8 EngineVersion((const TCHAR*)*FEngineVersion::Current().ToString());

		stats.name = (ANSICHAR*)InstanceName.Get();
		provided.set_name = true;
		stats.folder = (ANSICHAR*)LaunchDir.Get();
		provided.set_folder = true;
		stats.game = (ANSICHAR*)ProjectName.Get();
		provided.set_game = true;
		stats.max_players = 1;
		provided.set_max_players = true;
		stats.visibility = 0;
		provided.set_visibility = true;
		stats.version = (ANSICHAR*)EngineVersion.Get();
		provided.set_version = true;

		rallyhere_stats_base(GameHostAdapter, &stats, &provided, nullptr, nullptr);
	}
}

FRH_GameHostProviderGHA::~FRH_GameHostProviderGHA()
{
	if (GameHostAdapter != nullptr)
	{
		rallyhere_destroy_game_instance_adapter(GameHostAdapter);
		GameHostAdapter = nullptr;
	}
}

void FRH_GameHostProviderGHA::OnLogCallback(RallyHereLogLevel level, const char* message, size_t messagen, void* user_data)
{
	auto converted = TStringConversion<FUTF8ToTCHAR_Convert>(static_cast<const ANSICHAR*>(message), messagen);
	switch (level)
	{
	case RH_LOG_LEVEL_ERROR:
		UE_LOG(LogRHGameHostProvider, Error, TEXT("[GameHostAdapter] %.*s"), converted.Length(), converted.Get());
		break;
	case RH_LOG_LEVEL_INFO:
		UE_LOG(LogRHGameHostProvider, Log, TEXT("[GameHostAdapter] %.*s"), converted.Length(), converted.Get());
		break;
	case RH_LOG_LEVEL_DEBUG:
		UE_LOG(LogRHGameHostProvider, Verbose, TEXT("[GameHostAdapter] %.*s"), converted.Length(), converted.Get());
		break;
	case RH_LOG_LEVEL_TRACE:
		UE_LOG(LogRHGameHostProvider, VeryVerbose, TEXT("[GameHostAdapter] %.*s"), converted.Length(), converted.Get());
		break;
	}
}

struct RallyHereStringMapWrapper
{
	RallyHereStringMapWrapper(RallyHereGameInstanceAdapterPtr adapter_) : adapter(adapter_)
	{
		code = rallyhere_string_map_create(&map);
		if (rallyhere_is_error(code))
		{
			map = nullptr;
		}
	}
	~RallyHereStringMapWrapper()
	{
		rallyhere_string_map_destroy(map);
	}

	RallyHereStatusCode add_to_string_map()
	{
		if (rallyhere_is_error(code))
			return code;
		return RH_STATUS_OK;
	}

	template<typename... Params>
	RallyHereStatusCode add_to_string_map(const char* key, const char* value, Params... params)
	{
		if (rallyhere_is_error(code))
			return code;
		auto result = rallyhere_string_map_set(map, key, value);
		if (rallyhere_is_error(result))
			return result;
		return add_to_string_map(params...);
	}

	RallyHereGameInstanceAdapterPtr adapter;
	RallyHereStringMapPtr map;
	RallyHereStatusCode code;
};


void FRH_GameHostProviderGHA::Tick(float DeltaTime)
{
	// push stats to GHA
	if (GameHostAdapter != nullptr)
	{
		// collect stats
		FRH_GameHostProviderStats GameStats;
		OnProviderStats.ExecuteIfBound(GameStats);

		RallyHereStatsBase stats{};
		RallyHereStatsBaseProvided provided{};
		memset(&provided, 0x00, sizeof(provided));

		// make sure the string storage for the map name persists properly until the call
		FString MapName;
		if (GameStats.Map.IsSet())
		{
			MapName = GameStats.Map.GetValue();
			
		}

		FTCHARToUTF8 MapNameUTF8(*MapName);
		if (GameStats.Map.IsSet())
		{
			stats.map = (ANSICHAR*)MapNameUTF8.Get();
			provided.set_map = true;
		}

		if (GameStats.GameMode.IsSet())
		{
			RallyHereStringMapWrapper additional_info(GameHostAdapter);
			auto result = additional_info.add_to_string_map("game_mode", TCHAR_TO_UTF8(*GameStats.GameMode.GetValue()));
			if (!rallyhere_is_error(result))
			{
				rallyhere_set_additional_info(GameHostAdapter, additional_info.map, nullptr, nullptr);
			}
		}

		if (GameStats.PlayerCount.IsSet())
		{
			stats.players = GameStats.PlayerCount.GetValue();
			provided.set_players = true;
		}
		rallyhere_stats_base(GameHostAdapter, &stats, &provided, nullptr, nullptr);

		auto code = rallyhere_tick(GameHostAdapter);
		if (rallyhere_is_error(code))
		{
			UE_LOG(LogRHGameHostProvider, Log, TEXT("[%s] Failed tick: %s"), ANSI_TO_TCHAR(__FUNCTION__), UTF8_TO_TCHAR(rallyhere_status_text(code)));
			OnProviderHardStopRequested.ExecuteIfBound();
			return;
		}
	}
}

bool FRH_GameHostProviderGHA::IsTickable() const
{
	return true;
}

TStatId FRH_GameHostProviderGHA::GetStatId() const
{
	RETURN_QUICK_DECLARE_CYCLE_STAT(FRH_GameHostProviderGHA, STATGROUP_TaskGraphTasks);
}


void FRH_GameHostProviderGHA::OnConnectCallback(const RallyHereStatusCode& code, void* user_data)
{
	reinterpret_cast<FRH_GameHostProviderGHA*>(user_data)->OnConnectComplete(code);
}

void FRH_GameHostProviderGHA::BeginConnecting()
{
	rallyhere_connect(GameHostAdapter, FRH_GameHostProviderGHA::OnConnectCallback, this);
}

void FRH_GameHostProviderGHA::OnConnectComplete(const RallyHereStatusCode& code)
{
	bool bIsError = rallyhere_is_error(code);
	UE_CLOG(bIsError, LogRHGameHostProvider, Error, TEXT("[%s] GameHostAdapter Failed to connect to provider: %s"), ANSI_TO_TCHAR(__FUNCTION__), UTF8_TO_TCHAR(rallyhere_status_text(code)));
	OnProviderConnectComplete.ExecuteIfBound(!bIsError);
}

void FRH_GameHostProviderGHA::OnAllocatedCallback(RallyHereStringMapPtr allocation_info, const RallyHereStatusCode& code, void* user_data)
{
	reinterpret_cast<FRH_GameHostProviderGHA*>(user_data)->OnAllocationComplete(allocation_info, code);
}

void FRH_GameHostProviderGHA::OnReadyCallback(const RallyHereStatusCode& code, void* user_data)
{
	reinterpret_cast<FRH_GameHostProviderGHA*>(user_data)->OnRegisterComplete(code);
}

void FRH_GameHostProviderGHA::BeginRegister()
{
	rallyhere_on_allocated_callback(GameHostAdapter, FRH_GameHostProviderGHA::OnAllocatedCallback, this);
	rallyhere_ready(GameHostAdapter, FRH_GameHostProviderGHA::OnReadyCallback, this);
}

void FRH_GameHostProviderGHA::OnRegisterComplete(const RallyHereStatusCode& code)
{
	bool bIsError = rallyhere_is_error(code);
	UE_CLOG(bIsError, LogRHGameHostProvider, Error, TEXT("[%s] GameHostAdapter failed to register: %s"), ANSI_TO_TCHAR(__FUNCTION__), UTF8_TO_TCHAR(rallyhere_status_text(code)));
	OnProviderRegisterComplete.ExecuteIfBound(!bIsError);
}

void FRH_GameHostProviderGHA::OnAllocationComplete(RallyHereStringMapPtr allocation_info, const RallyHereStatusCode& code)
{
	// ensure allocation info block is destroyed
	ON_SCOPE_EXIT{ rallyhere_string_map_destroy(allocation_info); };

	// We can be cancelled in a destructor so make no calls which expect the shared ptr to be valid
	if (rallyhere_is_cancelled(code))
	{
		UE_LOG(LogRHGameHostProvider, Log, TEXT("[%s] Cancelled"), ANSI_TO_TCHAR(__FUNCTION__));
		OnProviderAllocationComplete.ExecuteIfBound(ERH_AllocationStatus::Cancelled, FRH_GameHostAllocationInfo());
		return;
	}

	if (rallyhere_is_error(code))
	{
		UE_LOG(LogRHGameHostProvider, Error, TEXT("[%s] GameHostAdapter Failed to successfully get an allocation: %s"), ANSI_TO_TCHAR(__FUNCTION__), UTF8_TO_TCHAR(rallyhere_status_text(code)));
		OnProviderAllocationComplete.ExecuteIfBound(ERH_AllocationStatus::Failed, FRH_GameHostAllocationInfo());
		return;
	}

	FRH_GameHostAllocationInfo AllocationInfo;

	if (allocation_info)
	{
		const char* value_to_check = nullptr;
		unsigned int value_size = 0;
		auto result = rallyhere_string_map_get(allocation_info, "allocation_id", &value_to_check, &value_size);
		if (RH_STATUS_OK == result)
			AllocationInfo.AllocationId = { static_cast<int32>(value_size), reinterpret_cast<const UTF8CHAR*>(value_to_check) };
		result = rallyhere_string_map_get(allocation_info, "session_id", &value_to_check, &value_size);
		if (RH_STATUS_OK == result)
			AllocationInfo.SessionId = { static_cast<int32>(value_size), reinterpret_cast<const UTF8CHAR*>(value_to_check) };
		result = rallyhere_string_map_get(allocation_info, "public_host", &value_to_check, &value_size);
		if (RH_STATUS_OK == result)
			AllocationInfo.PublicHost = { static_cast<int32>(value_size), reinterpret_cast<const UTF8CHAR*>(value_to_check) };
		result = rallyhere_string_map_get(allocation_info, "public_port", &value_to_check, &value_size);
		if (RH_STATUS_OK == result)
			AllocationInfo.PublicPort = { static_cast<int32>(value_size), reinterpret_cast<const UTF8CHAR*>(value_to_check) };
	}

	OnProviderAllocationComplete.ExecuteIfBound(ERH_AllocationStatus::Success, AllocationInfo);
}

void FRH_GameHostProviderGHA::OnAllocationTookTooLong()
{
	UE_LOG(LogRHGameHostProvider, Error, TEXT("[%s] Exceeded maximum amount of time polling"), ANSI_TO_TCHAR(__FUNCTION__));
	OnProviderAllocationComplete.ExecuteIfBound(ERH_AllocationStatus::TimedOut, FRH_GameHostAllocationInfo());
}

void FRH_GameHostProviderGHA::OnReservationCallback(const RallyHereStatusCode& code, void* user_data)
{
	reinterpret_cast<FRH_GameHostProviderGHA*>(user_data)->OnReservationComplete(code);
}

void FRH_GameHostProviderGHA::BeginReservation()
{
	rallyhere_reserve_unconditional(GameHostAdapter, FRH_GameHostProviderGHA::OnReservationCallback, this);
}

void FRH_GameHostProviderGHA::OnReservationComplete(const RallyHereStatusCode& code)
{
	bool bIsError = rallyhere_is_error(code);
	UE_CLOG(bIsError, LogRHGameHostProvider, Error, TEXT("[%s] GameHostAdapter failed to create reservation: %s"), ANSI_TO_TCHAR(__FUNCTION__), UTF8_TO_TCHAR(rallyhere_status_text(code)));
	OnProviderReservationComplete.ExecuteIfBound(!bIsError);
}


void FRH_GameHostProviderGHA::OnSelfAllocateCallback(const RallyHereStatusCode& code, void* user_data)
{
	reinterpret_cast<FRH_GameHostProviderGHA*>(user_data)->OnSelfAllocateComplete(code);
}

void FRH_GameHostProviderGHA::BeginSelfAllocate()
{
	rallyhere_allocate(GameHostAdapter, FRH_GameHostProviderGHA::OnSelfAllocateCallback, this);
}

void FRH_GameHostProviderGHA::OnSelfAllocateComplete(const RallyHereStatusCode& code)
{
	bool bIsError = rallyhere_is_error(code);
	UE_CLOG(bIsError, LogRHGameHostProvider, Error, TEXT("[%s] GameHostAdapter failed to self allocate: %s"), ANSI_TO_TCHAR(__FUNCTION__), UTF8_TO_TCHAR(rallyhere_status_text(code)));
	OnProviderSelfAllocateComplete.ExecuteIfBound(!bIsError);
}


void FRH_GameHostProviderGHA::OnSoftStopRequestedCallback(const RallyHereStatusCode& code, void* user_data)
{
	reinterpret_cast<FRH_GameHostProviderGHA*>(user_data)->OnSoftStopRequested(code);
}

void FRH_GameHostProviderGHA::OnSoftStopRequested(const RallyHereStatusCode& code)
{
	if (rallyhere_is_cancelled(code))
		return;
	OnProviderSoftStopRequested.ExecuteIfBound();
}