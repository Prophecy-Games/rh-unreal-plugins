// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "Role.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_Role

void FRHAPI_Role::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("role_id"));
    RallyHereAPI::WriteJsonValue(Writer, RoleId);
    if (CustomData_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("custom_data"));
        RallyHereAPI::WriteJsonValue(Writer, CustomData_Optional);
    }
    if (LoginLootRewards_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("login_loot_rewards"));
        RallyHereAPI::WriteJsonValue(Writer, LoginLootRewards_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_Role::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonRoleIdField = (*Object)->TryGetField(TEXT("role_id"));
    ParseSuccess &= JsonRoleIdField.IsValid() && !JsonRoleIdField->IsNull() && TryGetJsonValue(JsonRoleIdField, RoleId);
    const TSharedPtr<FJsonValue> JsonCustomDataField = (*Object)->TryGetField(TEXT("custom_data"));
    if (JsonCustomDataField.IsValid() && !JsonCustomDataField->IsNull())
    {
        CustomData_IsSet = TryGetJsonValue(JsonCustomDataField, CustomData_Optional);
        ParseSuccess &= CustomData_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonLoginLootRewardsField = (*Object)->TryGetField(TEXT("login_loot_rewards"));
    if (JsonLoginLootRewardsField.IsValid() && !JsonLoginLootRewardsField->IsNull())
    {
        LoginLootRewards_IsSet = TryGetJsonValue(JsonLoginLootRewardsField, LoginLootRewards_Optional);
        ParseSuccess &= LoginLootRewards_IsSet;
    }

    return ParseSuccess;
}

