// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "PlayerIterateResponse.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_PlayerIterateResponse

void FRHAPI_PlayerIterateResponse::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    if (Players_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("players"));
        RallyHereAPI::WriteJsonValue(Writer, Players_Optional);
    }
    if (Cursor_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("cursor"));
        RallyHereAPI::WriteJsonValue(Writer, Cursor_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_PlayerIterateResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonPlayersField = (*Object)->TryGetField(TEXT("players"));
    if (JsonPlayersField.IsValid() && !JsonPlayersField->IsNull())
    {
        Players_IsSet = TryGetJsonValue(JsonPlayersField, Players_Optional);
        ParseSuccess &= Players_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonCursorField = (*Object)->TryGetField(TEXT("cursor"));
    if (JsonCursorField.IsValid() && !JsonCursorField->IsNull())
    {
        Cursor_IsSet = TryGetJsonValue(JsonCursorField, Cursor_Optional);
        ParseSuccess &= Cursor_IsSet;
    }

    return ParseSuccess;
}

