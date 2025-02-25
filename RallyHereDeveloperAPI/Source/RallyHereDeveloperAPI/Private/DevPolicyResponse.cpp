// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevPolicyResponse.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_DevPolicyResponse

void FRHAPI_DevPolicyResponse::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("policy_id"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, PolicyId);
    Writer->WriteIdentifierPrefix(TEXT("name"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, Name);
    Writer->WriteIdentifierPrefix(TEXT("permissions"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, Permissions);
    Writer->WriteIdentifierPrefix(TEXT("description"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, Description);
    Writer->WriteIdentifierPrefix(TEXT("default_policy"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, DefaultPolicy);
    Writer->WriteObjectEnd();
}

bool FRHAPI_DevPolicyResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonPolicyIdField = (*Object)->TryGetField(TEXT("policy_id"));
    ParseSuccess &= JsonPolicyIdField.IsValid() && !JsonPolicyIdField->IsNull() && TryGetJsonValue(JsonPolicyIdField, PolicyId);
    const TSharedPtr<FJsonValue> JsonNameField = (*Object)->TryGetField(TEXT("name"));
    ParseSuccess &= JsonNameField.IsValid() && !JsonNameField->IsNull() && TryGetJsonValue(JsonNameField, Name);
    const TSharedPtr<FJsonValue> JsonPermissionsField = (*Object)->TryGetField(TEXT("permissions"));
    ParseSuccess &= JsonPermissionsField.IsValid() && !JsonPermissionsField->IsNull() && TryGetJsonValue(JsonPermissionsField, Permissions);
    const TSharedPtr<FJsonValue> JsonDescriptionField = (*Object)->TryGetField(TEXT("description"));
    ParseSuccess &= JsonDescriptionField.IsValid() && !JsonDescriptionField->IsNull() && TryGetJsonValue(JsonDescriptionField, Description);
    const TSharedPtr<FJsonValue> JsonDefaultPolicyField = (*Object)->TryGetField(TEXT("default_policy"));
    ParseSuccess &= JsonDefaultPolicyField.IsValid() && !JsonDefaultPolicyField->IsNull() && TryGetJsonValue(JsonDefaultPolicyField, DefaultPolicy);

    return ParseSuccess;
}

