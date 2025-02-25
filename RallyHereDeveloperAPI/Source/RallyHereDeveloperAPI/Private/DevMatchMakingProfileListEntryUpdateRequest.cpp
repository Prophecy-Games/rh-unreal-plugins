// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevMatchMakingProfileListEntryUpdateRequest.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_DevMatchMakingProfileListEntryUpdateRequest

void FRHAPI_DevMatchMakingProfileListEntryUpdateRequest::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    if (ProfileId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("profile_id"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, ProfileId_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_DevMatchMakingProfileListEntryUpdateRequest::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonProfileIdField = (*Object)->TryGetField(TEXT("profile_id"));
    if (JsonProfileIdField.IsValid() && !JsonProfileIdField->IsNull())
    {
        ProfileId_IsSet = TryGetJsonValue(JsonProfileIdField, ProfileId_Optional);
        ParseSuccess &= ProfileId_IsSet;
    }

    return ParseSuccess;
}

