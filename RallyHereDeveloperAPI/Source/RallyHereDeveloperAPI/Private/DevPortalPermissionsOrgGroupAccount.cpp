// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevPortalPermissionsOrgGroupAccount.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_DevPortalPermissionsOrgGroupAccount

void FRHAPI_DevPortalPermissionsOrgGroupAccount::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("account_id"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, AccountId);
    Writer->WriteIdentifierPrefix(TEXT("group_id"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, GroupId);
    Writer->WriteObjectEnd();
}

bool FRHAPI_DevPortalPermissionsOrgGroupAccount::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonAccountIdField = (*Object)->TryGetField(TEXT("account_id"));
    ParseSuccess &= JsonAccountIdField.IsValid() && !JsonAccountIdField->IsNull() && TryGetJsonValue(JsonAccountIdField, AccountId);
    const TSharedPtr<FJsonValue> JsonGroupIdField = (*Object)->TryGetField(TEXT("group_id"));
    ParseSuccess &= JsonGroupIdField.IsValid() && !JsonGroupIdField->IsNull() && TryGetJsonValue(JsonGroupIdField, GroupId);

    return ParseSuccess;
}

