// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevLegacyGameBit.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for ERHAPI_DevLegacyGameBit
FString EnumToString(const ERHAPI_DevLegacyGameBit& Value)
{
    switch (Value)
    {
    case ERHAPI_DevLegacyGameBit::DisableFtp:
        return TEXT("DISABLE_FTP");
    case ERHAPI_DevLegacyGameBit::ServiceMode:
        return TEXT("SERVICE_MODE");
    case ERHAPI_DevLegacyGameBit::DisablePrivateProfile:
        return TEXT("DISABLE_PRIVATE_PROFILE");
    case ERHAPI_DevLegacyGameBit::NoStore:
        return TEXT("NO_STORE");
    case ERHAPI_DevLegacyGameBit::NoDynamicStatFlags:
        return TEXT("NO_DYNAMIC_STAT_FLAGS");
    case ERHAPI_DevLegacyGameBit::UseLocalHomeMap:
        return TEXT("USE_LOCAL_HOME_MAP");
    case ERHAPI_DevLegacyGameBit::DemoMode:
        return TEXT("DEMO_MODE");
    case ERHAPI_DevLegacyGameBit::AlwaysDelayLogoff:
        return TEXT("ALWAYS_DELAY_LOGOFF");
    case ERHAPI_DevLegacyGameBit::PingCheck:
        return TEXT("PING_CHECK");
    case ERHAPI_DevLegacyGameBit::UseMapCaching:
        return TEXT("USE_MAP_CACHING");
    case ERHAPI_DevLegacyGameBit::NoStandalonePlay:
        return TEXT("NO_STANDALONE_PLAY");
    case ERHAPI_DevLegacyGameBit::ChatNotifyChanges:
        return TEXT("CHAT_NOTIFY_CHANGES");
    case ERHAPI_DevLegacyGameBit::GameDoesLocalTeams:
        return TEXT("GAME_DOES_LOCAL_TEAMS");
    case ERHAPI_DevLegacyGameBit::MatchDoesLocalTeams:
        return TEXT("MATCH_DOES_LOCAL_TEAMS");
    case ERHAPI_DevLegacyGameBit::ClanCanChangeSiteid:
        return TEXT("CLAN_CAN_CHANGE_SITEID");
    case ERHAPI_DevLegacyGameBit::UseNoAiDisconnect:
        return TEXT("USE_NO_AI_DISCONNECT");
    case ERHAPI_DevLegacyGameBit::UseAltUi:
        return TEXT("USE_ALT_UI");
    case ERHAPI_DevLegacyGameBit::UseVaDebug:
        return TEXT("USE_VA_DEBUG");
    case ERHAPI_DevLegacyGameBit::UseSimulator:
        return TEXT("USE_SIMULATOR");
    case ERHAPI_DevLegacyGameBit::DenyAllClientAuths:
        return TEXT("DENY_ALL_CLIENT_AUTHS");
    case ERHAPI_DevLegacyGameBit::UseAltQueueUi:
        return TEXT("USE_ALT_QUEUE_UI");
    case ERHAPI_DevLegacyGameBit::NoLandingPanel:
        return TEXT("NO_LANDING_PANEL");
    case ERHAPI_DevLegacyGameBit::NoForcedBasicTutorial:
        return TEXT("NO_FORCED_BASIC_TUTORIAL");
    case ERHAPI_DevLegacyGameBit::RecommendTrainingOnly:
        return TEXT("RECOMMEND_TRAINING_ONLY");
    case ERHAPI_DevLegacyGameBit::EnableUpcomingFeatures:
        return TEXT("ENABLE_UPCOMING_FEATURES");
    case ERHAPI_DevLegacyGameBit::GuardPortalPurchases:
        return TEXT("GUARD_PORTAL_PURCHASES");
    case ERHAPI_DevLegacyGameBit::UseSpectator:
        return TEXT("USE_SPECTATOR");
    case ERHAPI_DevLegacyGameBit::GbAllowLiveSpectate:
        return TEXT("GB_ALLOW_LIVE_SPECTATE");
    case ERHAPI_DevLegacyGameBit::GbEnablePaladinsNewMl:
        return TEXT("GB_ENABLE_PALADINS_NEW_ML");
    case ERHAPI_DevLegacyGameBit::GbUseRealMoneyBreakpoint:
        return TEXT("GB_USE_REAL_MONEY_BREAKPOINT");
    case ERHAPI_DevLegacyGameBit::FriendReferralUi:
        return TEXT("FRIEND_REFERRAL_UI");
    case ERHAPI_DevLegacyGameBit::NoWisdomTab:
        return TEXT("NO_WISDOM_TAB");
    case ERHAPI_DevLegacyGameBit::NoPlayerQuests:
        return TEXT("NO_PLAYER_QUESTS");
    case ERHAPI_DevLegacyGameBit::NoDailyRewards:
        return TEXT("NO_DAILY_REWARDS");
    case ERHAPI_DevLegacyGameBit::DisableActivityFeed:
        return TEXT("DISABLE_ACTIVITY_FEED");
    case ERHAPI_DevLegacyGameBit::UseNewItemVendor:
        return TEXT("USE_NEW_ITEM_VENDOR");
    case ERHAPI_DevLegacyGameBit::GlobalServerDb:
        return TEXT("GLOBAL_SERVER_DB");
    }

    UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("Invalid ERHAPI_DevLegacyGameBit::Values Value (%d)"), (int)Value);
    return TEXT("");
}

bool EnumFromString(const FString& EnumAsString, ERHAPI_DevLegacyGameBit& Value)
{
    static TMap<FString, ERHAPI_DevLegacyGameBit> StringToEnum = { 
        { TEXT("DISABLE_FTP"), ERHAPI_DevLegacyGameBit::DisableFtp },
        { TEXT("SERVICE_MODE"), ERHAPI_DevLegacyGameBit::ServiceMode },
        { TEXT("DISABLE_PRIVATE_PROFILE"), ERHAPI_DevLegacyGameBit::DisablePrivateProfile },
        { TEXT("NO_STORE"), ERHAPI_DevLegacyGameBit::NoStore },
        { TEXT("NO_DYNAMIC_STAT_FLAGS"), ERHAPI_DevLegacyGameBit::NoDynamicStatFlags },
        { TEXT("USE_LOCAL_HOME_MAP"), ERHAPI_DevLegacyGameBit::UseLocalHomeMap },
        { TEXT("DEMO_MODE"), ERHAPI_DevLegacyGameBit::DemoMode },
        { TEXT("ALWAYS_DELAY_LOGOFF"), ERHAPI_DevLegacyGameBit::AlwaysDelayLogoff },
        { TEXT("PING_CHECK"), ERHAPI_DevLegacyGameBit::PingCheck },
        { TEXT("USE_MAP_CACHING"), ERHAPI_DevLegacyGameBit::UseMapCaching },
        { TEXT("NO_STANDALONE_PLAY"), ERHAPI_DevLegacyGameBit::NoStandalonePlay },
        { TEXT("CHAT_NOTIFY_CHANGES"), ERHAPI_DevLegacyGameBit::ChatNotifyChanges },
        { TEXT("GAME_DOES_LOCAL_TEAMS"), ERHAPI_DevLegacyGameBit::GameDoesLocalTeams },
        { TEXT("MATCH_DOES_LOCAL_TEAMS"), ERHAPI_DevLegacyGameBit::MatchDoesLocalTeams },
        { TEXT("CLAN_CAN_CHANGE_SITEID"), ERHAPI_DevLegacyGameBit::ClanCanChangeSiteid },
        { TEXT("USE_NO_AI_DISCONNECT"), ERHAPI_DevLegacyGameBit::UseNoAiDisconnect },
        { TEXT("USE_ALT_UI"), ERHAPI_DevLegacyGameBit::UseAltUi },
        { TEXT("USE_VA_DEBUG"), ERHAPI_DevLegacyGameBit::UseVaDebug },
        { TEXT("USE_SIMULATOR"), ERHAPI_DevLegacyGameBit::UseSimulator },
        { TEXT("DENY_ALL_CLIENT_AUTHS"), ERHAPI_DevLegacyGameBit::DenyAllClientAuths },
        { TEXT("USE_ALT_QUEUE_UI"), ERHAPI_DevLegacyGameBit::UseAltQueueUi },
        { TEXT("NO_LANDING_PANEL"), ERHAPI_DevLegacyGameBit::NoLandingPanel },
        { TEXT("NO_FORCED_BASIC_TUTORIAL"), ERHAPI_DevLegacyGameBit::NoForcedBasicTutorial },
        { TEXT("RECOMMEND_TRAINING_ONLY"), ERHAPI_DevLegacyGameBit::RecommendTrainingOnly },
        { TEXT("ENABLE_UPCOMING_FEATURES"), ERHAPI_DevLegacyGameBit::EnableUpcomingFeatures },
        { TEXT("GUARD_PORTAL_PURCHASES"), ERHAPI_DevLegacyGameBit::GuardPortalPurchases },
        { TEXT("USE_SPECTATOR"), ERHAPI_DevLegacyGameBit::UseSpectator },
        { TEXT("GB_ALLOW_LIVE_SPECTATE"), ERHAPI_DevLegacyGameBit::GbAllowLiveSpectate },
        { TEXT("GB_ENABLE_PALADINS_NEW_ML"), ERHAPI_DevLegacyGameBit::GbEnablePaladinsNewMl },
        { TEXT("GB_USE_REAL_MONEY_BREAKPOINT"), ERHAPI_DevLegacyGameBit::GbUseRealMoneyBreakpoint },
        { TEXT("FRIEND_REFERRAL_UI"), ERHAPI_DevLegacyGameBit::FriendReferralUi },
        { TEXT("NO_WISDOM_TAB"), ERHAPI_DevLegacyGameBit::NoWisdomTab },
        { TEXT("NO_PLAYER_QUESTS"), ERHAPI_DevLegacyGameBit::NoPlayerQuests },
        { TEXT("NO_DAILY_REWARDS"), ERHAPI_DevLegacyGameBit::NoDailyRewards },
        { TEXT("DISABLE_ACTIVITY_FEED"), ERHAPI_DevLegacyGameBit::DisableActivityFeed },
        { TEXT("USE_NEW_ITEM_VENDOR"), ERHAPI_DevLegacyGameBit::UseNewItemVendor },
        { TEXT("GLOBAL_SERVER_DB"), ERHAPI_DevLegacyGameBit::GlobalServerDb },    };

    const auto Found = StringToEnum.Find(EnumAsString);
    if(Found)
        Value = *Found;
    return Found != nullptr;
}

FStringFormatArg ToStringFormatArg(const ERHAPI_DevLegacyGameBit& Value)
{
    return FStringFormatArg(EnumToString(Value));
}

void WriteJsonValue(TSharedRef<TJsonWriter<>>& Writer, const ERHAPI_DevLegacyGameBit& Value)
{
    RallyHereDeveloperAPI::WriteJsonValue(Writer, EnumToString(Value));
}

bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, ERHAPI_DevLegacyGameBit& Value)
{
    FString TmpValue;
    if (JsonValue->TryGetString(TmpValue))
    {
        if (EnumFromString(TmpValue, Value))
            return true;
    }
    return false;
}


