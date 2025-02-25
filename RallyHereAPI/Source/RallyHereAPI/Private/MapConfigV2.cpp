// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "MapConfigV2.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_MapConfigV2

void FRHAPI_MapConfigV2::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("map_id"));
    RallyHereAPI::WriteJsonValue(Writer, MapId);
    Writer->WriteIdentifierPrefix(TEXT("name"));
    RallyHereAPI::WriteJsonValue(Writer, Name);
    if (Mode_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("mode"));
        RallyHereAPI::WriteJsonValue(Writer, Mode_Optional);
    }
    Writer->WriteIdentifierPrefix(TEXT("map_weight"));
    RallyHereAPI::WriteJsonValue(Writer, MapWeight);
    if (CustomData_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("custom_data"));
        RallyHereAPI::WriteJsonValue(Writer, CustomData_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_MapConfigV2::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonMapIdField = (*Object)->TryGetField(TEXT("map_id"));
    ParseSuccess &= JsonMapIdField.IsValid() && !JsonMapIdField->IsNull() && TryGetJsonValue(JsonMapIdField, MapId);
    const TSharedPtr<FJsonValue> JsonNameField = (*Object)->TryGetField(TEXT("name"));
    ParseSuccess &= JsonNameField.IsValid() && !JsonNameField->IsNull() && TryGetJsonValue(JsonNameField, Name);
    const TSharedPtr<FJsonValue> JsonModeField = (*Object)->TryGetField(TEXT("mode"));
    if (JsonModeField.IsValid() && !JsonModeField->IsNull())
    {
        Mode_IsSet = TryGetJsonValue(JsonModeField, Mode_Optional);
        ParseSuccess &= Mode_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonMapWeightField = (*Object)->TryGetField(TEXT("map_weight"));
    ParseSuccess &= JsonMapWeightField.IsValid() && !JsonMapWeightField->IsNull() && TryGetJsonValue(JsonMapWeightField, MapWeight);
    const TSharedPtr<FJsonValue> JsonCustomDataField = (*Object)->TryGetField(TEXT("custom_data"));
    if (JsonCustomDataField.IsValid() && !JsonCustomDataField->IsNull())
    {
        CustomData_IsSet = TryGetJsonValue(JsonCustomDataField, CustomData_Optional);
        ParseSuccess &= CustomData_IsSet;
    }

    return ParseSuccess;
}

