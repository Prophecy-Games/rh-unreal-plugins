// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "SessionTemplate.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_SessionTemplate

void FRHAPI_SessionTemplate::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("session_type"));
    RallyHereAPI::WriteJsonValue(Writer, SessionType);
    if (EngineSessionType_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("engine_session_type"));
        RallyHereAPI::WriteJsonValue(Writer, EngineSessionType_Optional);
    }
    if (CanJoinMatchmaking_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("can_join_matchmaking"));
        RallyHereAPI::WriteJsonValue(Writer, CanJoinMatchmaking_Optional);
    }
    if (CanBeCreatedByPlayersDirectly_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("can_be_created_by_players_directly"));
        RallyHereAPI::WriteJsonValue(Writer, CanBeCreatedByPlayersDirectly_Optional);
    }
    if (Joinable_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("joinable"));
        RallyHereAPI::WriteJsonValue(Writer, Joinable_Optional);
    }
    if (AutoAddToBrowser_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("auto_add_to_browser"));
        RallyHereAPI::WriteJsonValue(Writer, AutoAddToBrowser_Optional);
    }
    if (AutoBrowserParams_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("auto_browser_params"));
        RallyHereAPI::WriteJsonValue(Writer, AutoBrowserParams_Optional);
    }
    if (CanBeAddedToServerBrowser_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("can_be_added_to_server_browser"));
        RallyHereAPI::WriteJsonValue(Writer, CanBeAddedToServerBrowser_Optional);
    }
    if (KeepAliveOnEmpty_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("keep_alive_on_empty"));
        RallyHereAPI::WriteJsonValue(Writer, KeepAliveOnEmpty_Optional);
    }
    if (PlatformTemplates_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("platform_templates"));
        RallyHereAPI::WriteJsonValue(Writer, PlatformTemplates_Optional);
    }
    if (AutoStartupParams_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("auto_startup_params"));
        RallyHereAPI::WriteJsonValue(Writer, AutoStartupParams_Optional);
    }
    if (MinSessionCount_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("min_session_count"));
        RallyHereAPI::WriteJsonValue(Writer, MinSessionCount_Optional);
    }
    if (CustomData_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("custom_data"));
        RallyHereAPI::WriteJsonValue(Writer, CustomData_Optional);
    }
    if (NumTeams_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("num_teams"));
        RallyHereAPI::WriteJsonValue(Writer, NumTeams_Optional);
    }
    if (PlayersPerTeam_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("players_per_team"));
        RallyHereAPI::WriteJsonValue(Writer, PlayersPerTeam_Optional);
    }
    if (CanChangeOwnTeam_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("can_change_own_team"));
        RallyHereAPI::WriteJsonValue(Writer, CanChangeOwnTeam_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_SessionTemplate::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonSessionTypeField = (*Object)->TryGetField(TEXT("session_type"));
    ParseSuccess &= JsonSessionTypeField.IsValid() && !JsonSessionTypeField->IsNull() && TryGetJsonValue(JsonSessionTypeField, SessionType);
    const TSharedPtr<FJsonValue> JsonEngineSessionTypeField = (*Object)->TryGetField(TEXT("engine_session_type"));
    if (JsonEngineSessionTypeField.IsValid() && !JsonEngineSessionTypeField->IsNull())
    {
        EngineSessionType_IsSet = TryGetJsonValue(JsonEngineSessionTypeField, EngineSessionType_Optional);
        ParseSuccess &= EngineSessionType_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonCanJoinMatchmakingField = (*Object)->TryGetField(TEXT("can_join_matchmaking"));
    if (JsonCanJoinMatchmakingField.IsValid() && !JsonCanJoinMatchmakingField->IsNull())
    {
        CanJoinMatchmaking_IsSet = TryGetJsonValue(JsonCanJoinMatchmakingField, CanJoinMatchmaking_Optional);
        ParseSuccess &= CanJoinMatchmaking_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonCanBeCreatedByPlayersDirectlyField = (*Object)->TryGetField(TEXT("can_be_created_by_players_directly"));
    if (JsonCanBeCreatedByPlayersDirectlyField.IsValid() && !JsonCanBeCreatedByPlayersDirectlyField->IsNull())
    {
        CanBeCreatedByPlayersDirectly_IsSet = TryGetJsonValue(JsonCanBeCreatedByPlayersDirectlyField, CanBeCreatedByPlayersDirectly_Optional);
        ParseSuccess &= CanBeCreatedByPlayersDirectly_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonJoinableField = (*Object)->TryGetField(TEXT("joinable"));
    if (JsonJoinableField.IsValid() && !JsonJoinableField->IsNull())
    {
        Joinable_IsSet = TryGetJsonValue(JsonJoinableField, Joinable_Optional);
        ParseSuccess &= Joinable_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonAutoAddToBrowserField = (*Object)->TryGetField(TEXT("auto_add_to_browser"));
    if (JsonAutoAddToBrowserField.IsValid() && !JsonAutoAddToBrowserField->IsNull())
    {
        AutoAddToBrowser_IsSet = TryGetJsonValue(JsonAutoAddToBrowserField, AutoAddToBrowser_Optional);
        ParseSuccess &= AutoAddToBrowser_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonAutoBrowserParamsField = (*Object)->TryGetField(TEXT("auto_browser_params"));
    if (JsonAutoBrowserParamsField.IsValid() && !JsonAutoBrowserParamsField->IsNull())
    {
        AutoBrowserParams_IsSet = TryGetJsonValue(JsonAutoBrowserParamsField, AutoBrowserParams_Optional);
        ParseSuccess &= AutoBrowserParams_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonCanBeAddedToServerBrowserField = (*Object)->TryGetField(TEXT("can_be_added_to_server_browser"));
    if (JsonCanBeAddedToServerBrowserField.IsValid() && !JsonCanBeAddedToServerBrowserField->IsNull())
    {
        CanBeAddedToServerBrowser_IsSet = TryGetJsonValue(JsonCanBeAddedToServerBrowserField, CanBeAddedToServerBrowser_Optional);
        ParseSuccess &= CanBeAddedToServerBrowser_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonKeepAliveOnEmptyField = (*Object)->TryGetField(TEXT("keep_alive_on_empty"));
    if (JsonKeepAliveOnEmptyField.IsValid() && !JsonKeepAliveOnEmptyField->IsNull())
    {
        KeepAliveOnEmpty_IsSet = TryGetJsonValue(JsonKeepAliveOnEmptyField, KeepAliveOnEmpty_Optional);
        ParseSuccess &= KeepAliveOnEmpty_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonPlatformTemplatesField = (*Object)->TryGetField(TEXT("platform_templates"));
    if (JsonPlatformTemplatesField.IsValid() && !JsonPlatformTemplatesField->IsNull())
    {
        PlatformTemplates_IsSet = TryGetJsonValue(JsonPlatformTemplatesField, PlatformTemplates_Optional);
        ParseSuccess &= PlatformTemplates_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonAutoStartupParamsField = (*Object)->TryGetField(TEXT("auto_startup_params"));
    if (JsonAutoStartupParamsField.IsValid() && !JsonAutoStartupParamsField->IsNull())
    {
        AutoStartupParams_IsSet = TryGetJsonValue(JsonAutoStartupParamsField, AutoStartupParams_Optional);
        ParseSuccess &= AutoStartupParams_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonMinSessionCountField = (*Object)->TryGetField(TEXT("min_session_count"));
    if (JsonMinSessionCountField.IsValid() && !JsonMinSessionCountField->IsNull())
    {
        MinSessionCount_IsSet = TryGetJsonValue(JsonMinSessionCountField, MinSessionCount_Optional);
        ParseSuccess &= MinSessionCount_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonCustomDataField = (*Object)->TryGetField(TEXT("custom_data"));
    if (JsonCustomDataField.IsValid() && !JsonCustomDataField->IsNull())
    {
        CustomData_IsSet = TryGetJsonValue(JsonCustomDataField, CustomData_Optional);
        ParseSuccess &= CustomData_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonNumTeamsField = (*Object)->TryGetField(TEXT("num_teams"));
    if (JsonNumTeamsField.IsValid() && !JsonNumTeamsField->IsNull())
    {
        NumTeams_IsSet = TryGetJsonValue(JsonNumTeamsField, NumTeams_Optional);
        ParseSuccess &= NumTeams_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonPlayersPerTeamField = (*Object)->TryGetField(TEXT("players_per_team"));
    if (JsonPlayersPerTeamField.IsValid() && !JsonPlayersPerTeamField->IsNull())
    {
        PlayersPerTeam_IsSet = TryGetJsonValue(JsonPlayersPerTeamField, PlayersPerTeam_Optional);
        ParseSuccess &= PlayersPerTeam_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonCanChangeOwnTeamField = (*Object)->TryGetField(TEXT("can_change_own_team"));
    if (JsonCanChangeOwnTeamField.IsValid() && !JsonCanChangeOwnTeamField->IsNull())
    {
        CanChangeOwnTeam_IsSet = TryGetJsonValue(JsonCanChangeOwnTeamField, CanChangeOwnTeam_Optional);
        ParseSuccess &= CanChangeOwnTeam_IsSet;
    }

    return ParseSuccess;
}

