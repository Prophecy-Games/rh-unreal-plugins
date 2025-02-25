// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "BrowserResponse.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_BrowserResponse

void FRHAPI_BrowserResponse::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("cursor"));
    RallyHereAPI::WriteJsonValue(Writer, Cursor);
    Writer->WriteIdentifierPrefix(TEXT("browser_sessions"));
    RallyHereAPI::WriteJsonValue(Writer, BrowserSessions);
    Writer->WriteObjectEnd();
}

bool FRHAPI_BrowserResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonCursorField = (*Object)->TryGetField(TEXT("cursor"));
    ParseSuccess &= JsonCursorField.IsValid() && !JsonCursorField->IsNull() && TryGetJsonValue(JsonCursorField, Cursor);
    const TSharedPtr<FJsonValue> JsonBrowserSessionsField = (*Object)->TryGetField(TEXT("browser_sessions"));
    ParseSuccess &= JsonBrowserSessionsField.IsValid() && !JsonBrowserSessionsField->IsNull() && TryGetJsonValue(JsonBrowserSessionsField, BrowserSessions);

    return ParseSuccess;
}

