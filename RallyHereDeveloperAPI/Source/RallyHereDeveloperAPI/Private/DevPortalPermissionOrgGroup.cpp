// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevPortalPermissionOrgGroup.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_DevPortalPermissionOrgGroup

void FRHAPI_DevPortalPermissionOrgGroup::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("group_id"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, GroupId);
    Writer->WriteIdentifierPrefix(TEXT("org_group_name"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, OrgGroupName);
    Writer->WriteIdentifierPrefix(TEXT("org_id"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, OrgId);
    Writer->WriteObjectEnd();
}

bool FRHAPI_DevPortalPermissionOrgGroup::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonGroupIdField = (*Object)->TryGetField(TEXT("group_id"));
    ParseSuccess &= JsonGroupIdField.IsValid() && !JsonGroupIdField->IsNull() && TryGetJsonValue(JsonGroupIdField, GroupId);
    const TSharedPtr<FJsonValue> JsonOrgGroupNameField = (*Object)->TryGetField(TEXT("org_group_name"));
    ParseSuccess &= JsonOrgGroupNameField.IsValid() && !JsonOrgGroupNameField->IsNull() && TryGetJsonValue(JsonOrgGroupNameField, OrgGroupName);
    const TSharedPtr<FJsonValue> JsonOrgIdField = (*Object)->TryGetField(TEXT("org_id"));
    ParseSuccess &= JsonOrgIdField.IsValid() && !JsonOrgIdField->IsNull() && TryGetJsonValue(JsonOrgIdField, OrgId);

    return ParseSuccess;
}

