// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevAllMatchMakingProfileListEntriesResponse.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_DevAllMatchMakingProfileListEntriesResponse

void FRHAPI_DevAllMatchMakingProfileListEntriesResponse::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("cursor"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, Cursor);
    if (Entries_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("entries"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, Entries_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_DevAllMatchMakingProfileListEntriesResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonCursorField = (*Object)->TryGetField(TEXT("cursor"));
    ParseSuccess &= JsonCursorField.IsValid() && !JsonCursorField->IsNull() && TryGetJsonValue(JsonCursorField, Cursor);
    const TSharedPtr<FJsonValue> JsonEntriesField = (*Object)->TryGetField(TEXT("entries"));
    if (JsonEntriesField.IsValid() && !JsonEntriesField->IsNull())
    {
        Entries_IsSet = TryGetJsonValue(JsonEntriesField, Entries_Optional);
        ParseSuccess &= Entries_IsSet;
    }

    return ParseSuccess;
}

