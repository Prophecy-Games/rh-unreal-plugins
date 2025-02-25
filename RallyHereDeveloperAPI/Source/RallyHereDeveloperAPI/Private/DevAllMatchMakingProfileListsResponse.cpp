// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevAllMatchMakingProfileListsResponse.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_DevAllMatchMakingProfileListsResponse

void FRHAPI_DevAllMatchMakingProfileListsResponse::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("cursor"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, Cursor);
    if (ProfileLists_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("profile_lists"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, ProfileLists_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_DevAllMatchMakingProfileListsResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonCursorField = (*Object)->TryGetField(TEXT("cursor"));
    ParseSuccess &= JsonCursorField.IsValid() && !JsonCursorField->IsNull() && TryGetJsonValue(JsonCursorField, Cursor);
    const TSharedPtr<FJsonValue> JsonProfileListsField = (*Object)->TryGetField(TEXT("profile_lists"));
    if (JsonProfileListsField.IsValid() && !JsonProfileListsField->IsNull())
    {
        ProfileLists_IsSet = TryGetJsonValue(JsonProfileListsField, ProfileLists_Optional);
        ParseSuccess &= ProfileLists_IsSet;
    }

    return ParseSuccess;
}

