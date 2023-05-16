/**
 * NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
 * Do not edit the file manually.
 *
 * Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
 * Copyright 2022 HiRez Studios
 * SPDX-License-Identifier: Apache-2.0
 *
 * Rally Here APIs
 * version: 0.1.0
 * Rally Here APIs
 */


#include "Vendor.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_Vendor

void FRHAPI_Vendor::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    if (Type_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("type"));
        RallyHereAPI::WriteJsonValue(Writer, EnumToString(Type_Optional));
    }
    if (LegacyType_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("legacy_type"));
        RallyHereAPI::WriteJsonValue(Writer, LegacyType_Optional);
    }
    if (LegacyConfigVersion_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("legacy_config_version"));
        RallyHereAPI::WriteJsonValue(Writer, LegacyConfigVersion_Optional);
    }
    if (Loot_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("loot"));
        RallyHereAPI::WriteJsonValue(Writer, Loot_Optional);
    }
    if (CacheInfo_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("cache_info"));
        RallyHereAPI::WriteJsonValue(Writer, CacheInfo_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_Vendor::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    if ((*Object)->HasField(TEXT("type")))
    {
        Type_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("type"), Type_Optional);
        ParseSuccess &= Type_IsSet;
    }
    if ((*Object)->HasField(TEXT("legacy_type")))
    {
        LegacyType_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("legacy_type"), LegacyType_Optional);
        ParseSuccess &= LegacyType_IsSet;
    }
    if ((*Object)->HasField(TEXT("legacy_config_version")))
    {
        LegacyConfigVersion_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("legacy_config_version"), LegacyConfigVersion_Optional);
        ParseSuccess &= LegacyConfigVersion_IsSet;
    }
    if ((*Object)->HasField(TEXT("loot")))
    {
        Loot_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("loot"), Loot_Optional);
        ParseSuccess &= Loot_IsSet;
    }
    if ((*Object)->HasField(TEXT("cache_info")))
    {
        CacheInfo_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("cache_info"), CacheInfo_Optional);
        ParseSuccess &= CacheInfo_IsSet;
    }

    return ParseSuccess;
}

