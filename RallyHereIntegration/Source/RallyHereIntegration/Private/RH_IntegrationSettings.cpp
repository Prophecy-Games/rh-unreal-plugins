
#include "RH_IntegrationSettings.h"
#include "RH_Common.h"

URH_IntegrationSettings::URH_IntegrationSettings(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	CategoryName = TEXT("Plugins");
	SectionName = TEXT("Rally Here Integration Settings");

	bAutoStartSessionsAfterJoin = true;

	bLocalPlayerSubsystemSandboxing = false;

	BeginNewAdSessionPriority = 1100000;
	FindAdOppertunitiesPriority = 1100000;
	UpdateAdOppertunitiesPriority = 900000;
	AuthLogoutPriority = 10000;
	AuthLoginPriority = 10000;
	GetCatalogAllPriority = 900000;
	GetCatalogXpAllPriority = 900000;
	GetCatalogItemPriority = 1000000;
	GetCatalogInventoryBucketUseRuleSetsAllPriority = 700000;
	GetCatalogPricePointsAllPriority = 700000;
	GetCatalogTimeFramesAllPriority = 1200000;
	GetCatalogVendorPriority = 500000;
	GetCatalogVendorsAllPriority = 500000;
	FetchAppSettingsPriority = 700000;
	ProcessPlatformEntitlementsPriority = 50000;
	RetrievePlatformEntitlementsPriority = 50000;
	FetchFriendListPriority = 1000000;
	FetchFriendPriority = 1000000;
	AddFriendPriority = 1000000;
	RemoveFriendPriority = 1000000;
	AddFriendNotesPriority = 1000000;
	DeleteFriendNotesPriority = 1000000;
	FetchBlockedListPriority = 1000000;
	FetchBlockedPlayerPriority = 1000000;
	BlockUnblockPlayerPriority = 1000000;
	InventoryCreateSessionPriority = 50000;
	InventoryGetSessionPriority = 50000;
	InventoryGetPriority = 50000;
	InventoryCreatePriority = 50000;
	InventoryUpdatePriority = 50000;
	InventoryCreateOrderPriority = 50000;
	InventoryGetOrdersPriority = 500000;
	NotificationPollSelfPriority = 50000;
	NotificationPollOtherPriority = 250000;
	NotificationCreatePriority = 800000;
	PresenceUpdatePriority = 1000000;
	PresenceGetSelfPriority = 1000000;
	PresenceGetOtherPriority = 1000000;
	PresenceGetSettingsPriority = 1000000;
	PurgeQueuePriority = 500000;
	PurgeGetStatusPriority = 500000;
	GetAllQueueInfoPriority = 800000;
	GetMatchmakingTemplatePriority = 1000000;
	GetMapGameInfoPriority = 1000000;
	RankingGetPriority = 1000000;
	RankingUpdatePriority = 1000000;
	SessionPollPriority = 700000;
	SessionJoinPriority = 700000;
	SessionLeavePriority = 700000;
	SessionInvitePriority = 700000;
	SessionKickPriority = 1000000;
	SessionLeaderChangePriority = 1000000;
	SessionChangeTeamsPriority = 1000000;
	SessionLeaveQueuePriority = 700000;
	SessionRequestInstancePriority = 700000;
	SessionEndInstancePriority = 700000;
	SessionStartMatchPriority = 700000;
	SessionEndMatchPriority = 700000;
	SessionUpdateSessionInfoPriority = 700000;
	SessionUpdateInstanceInfoPriority = 700000;
	SessionUpdateBrowserInfoPriority = 700000;
	SessionDeleteBrowserInfoPriority = 700000;
	SessionInstanceMarkFubarPriority = 500000;
	SessionUpdateWithPlatformSessionPriority = 700000;
	SessionGetTemplatePriority = 700000;
	SessionGetByAllocationIdPriority = 700000;
	SessionGetBySessionIdPriority = 700000;
	SessionGetByTypePriority = 700000;
	SessionsGetOtherPriority = 1000000;
	SettingsGetPriority = 800000;
	SettingsGetTypesPriority = 1000000;
	SettingsUpdatePriority = 800000;
	GetSiteSettingsPriority = 700000;
	UsersLookupPlayerPriority = 1000000;
	UsersGetLinkedPlatformsPriority = 900000;
}

const FRH_SandboxConfiguration* URH_IntegrationSettings::GetSandboxConfiguration(const FString& SandboxId) const
{
	// prefer the SandboxConfigurations array, but fall back to the deprecated array for backwards compatibility
	const auto* SandboxConfig = SandboxConfigurations.FindByPredicate([SandboxId](const FRH_SandboxConfiguration& Config) { return Config.SandboxId == SandboxId; });
	if (SandboxConfig == nullptr)
	{
		PRAGMA_DISABLE_DEPRECATION_WARNINGS
		SandboxConfig = SandboxURLs.FindByPredicate([&SandboxId](const FRH_SandboxConfiguration& Config) { return Config.SandboxId == SandboxId; });
		if (SandboxConfig != nullptr)
		{
			UE_LOG(LogRallyHereIntegration, Warning, TEXT("SandboxURLs is deprecated. Please convert your configuration to SandboxConfigurations instead."));
		}
		PRAGMA_ENABLE_DEPRECATION_WARNINGS
	}

	// if we could not find a sandbox, use the default one
	if (SandboxConfig == nullptr)
	{
		SandboxConfig = &DefaultSandboxConfiguration;
	}

	return SandboxConfig;
}