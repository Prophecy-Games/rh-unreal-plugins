// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "PortalUseRulesets.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_PortalUseRulesets

void FRHAPI_PortalUseRulesets::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    if (CustomData_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("custom_data"));
        RallyHereAPI::WriteJsonValue(Writer, CustomData_Optional);
    }
    if (Rulesets_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("rulesets"));
        RallyHereAPI::WriteJsonValue(Writer, Rulesets_Optional);
    }
    if (CacheInfo_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("cache_info"));
        RallyHereAPI::WriteJsonValue(Writer, CacheInfo_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_PortalUseRulesets::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonCustomDataField = (*Object)->TryGetField(TEXT("custom_data"));
    if (JsonCustomDataField.IsValid() && !JsonCustomDataField->IsNull())
    {
        CustomData_IsSet = TryGetJsonValue(JsonCustomDataField, CustomData_Optional);
        ParseSuccess &= CustomData_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonRulesetsField = (*Object)->TryGetField(TEXT("rulesets"));
    if (JsonRulesetsField.IsValid() && !JsonRulesetsField->IsNull())
    {
        Rulesets_IsSet = TryGetJsonValue(JsonRulesetsField, Rulesets_Optional);
        ParseSuccess &= Rulesets_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonCacheInfoField = (*Object)->TryGetField(TEXT("cache_info"));
    if (JsonCacheInfoField.IsValid() && !JsonCacheInfoField->IsNull())
    {
        CacheInfo_IsSet = TryGetJsonValue(JsonCacheInfoField, CacheInfo_Optional);
        ParseSuccess &= CacheInfo_IsSet;
    }

    return ParseSuccess;
}

