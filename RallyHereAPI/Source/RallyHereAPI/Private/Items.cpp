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


#include "Items.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_Items

void FRHAPI_Items::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    if (Items_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("items"));
        RallyHereAPI::WriteJsonValue(Writer, Items_Optional);
    }
    if (CacheInfo_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("cache_info"));
        RallyHereAPI::WriteJsonValue(Writer, CacheInfo_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_Items::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    if ((*Object)->HasField(TEXT("items")))
    {
        Items_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("items"), Items_Optional);
        ParseSuccess &= Items_IsSet;
    }
    if ((*Object)->HasField(TEXT("cache_info")))
    {
        CacheInfo_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("cache_info"), CacheInfo_Optional);
        ParseSuccess &= CacheInfo_IsSet;
    }

    return ParseSuccess;
}

