// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "ClientSettings.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_ClientSettings

void FRHAPI_ClientSettings::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    if (PlatformId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("platform_id"));
        RallyHereAPI::WriteJsonValue(Writer, EnumToString(PlatformId_Optional));
    }
    if (Platform_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("platform"));
        RallyHereAPI::WriteJsonValue(Writer, EnumToString(Platform_Optional));
    }
    Writer->WriteIdentifierPrefix(TEXT("input"));
    RallyHereAPI::WriteJsonValue(Writer, EnumToString(Input));
    Writer->WriteObjectEnd();
}

bool FRHAPI_ClientSettings::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonPlatformIdField = (*Object)->TryGetField(TEXT("platform_id"));
    if (JsonPlatformIdField.IsValid() && !JsonPlatformIdField->IsNull())
    {
        PlatformId_IsSet = TryGetJsonValue(JsonPlatformIdField, PlatformId_Optional);
        ParseSuccess &= PlatformId_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonPlatformField = (*Object)->TryGetField(TEXT("platform"));
    if (JsonPlatformField.IsValid() && !JsonPlatformField->IsNull())
    {
        Platform_IsSet = TryGetJsonValue(JsonPlatformField, Platform_Optional);
        ParseSuccess &= Platform_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonInputField = (*Object)->TryGetField(TEXT("input"));
    ParseSuccess &= JsonInputField.IsValid() && !JsonInputField->IsNull() && TryGetJsonValue(JsonInputField, Input);

    return ParseSuccess;
}

