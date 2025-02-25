// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevMapUpdateRequest.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_DevMapUpdateRequest

void FRHAPI_DevMapUpdateRequest::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    if (MapName_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("map_name"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, MapName_Optional);
    }
    if (Mode_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("mode"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, Mode_Optional);
    }
    if (LegacyConfig_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("legacy_config"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, LegacyConfig_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_DevMapUpdateRequest::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonMapNameField = (*Object)->TryGetField(TEXT("map_name"));
    if (JsonMapNameField.IsValid() && !JsonMapNameField->IsNull())
    {
        MapName_IsSet = TryGetJsonValue(JsonMapNameField, MapName_Optional);
        ParseSuccess &= MapName_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonModeField = (*Object)->TryGetField(TEXT("mode"));
    if (JsonModeField.IsValid() && !JsonModeField->IsNull())
    {
        Mode_IsSet = TryGetJsonValue(JsonModeField, Mode_Optional);
        ParseSuccess &= Mode_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonLegacyConfigField = (*Object)->TryGetField(TEXT("legacy_config"));
    if (JsonLegacyConfigField.IsValid() && !JsonLegacyConfigField->IsNull())
    {
        LegacyConfig_IsSet = TryGetJsonValue(JsonLegacyConfigField, LegacyConfig_Optional);
        ParseSuccess &= LegacyConfig_IsSet;
    }

    return ParseSuccess;
}

