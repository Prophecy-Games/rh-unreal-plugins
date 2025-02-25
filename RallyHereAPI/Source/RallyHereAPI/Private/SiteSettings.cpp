// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "SiteSettings.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_SiteSettings

void FRHAPI_SiteSettings::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("site_id"));
    RallyHereAPI::WriteJsonValue(Writer, SiteId);
    Writer->WriteIdentifierPrefix(TEXT("sort_order"));
    RallyHereAPI::WriteJsonValue(Writer, SortOrder);
    Writer->WriteIdentifierPrefix(TEXT("custom_only"));
    RallyHereAPI::WriteJsonValue(Writer, CustomOnly);
    if (MessageName_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("message_name"));
        RallyHereAPI::WriteJsonValue(Writer, MessageName_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_SiteSettings::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonSiteIdField = (*Object)->TryGetField(TEXT("site_id"));
    ParseSuccess &= JsonSiteIdField.IsValid() && !JsonSiteIdField->IsNull() && TryGetJsonValue(JsonSiteIdField, SiteId);
    const TSharedPtr<FJsonValue> JsonSortOrderField = (*Object)->TryGetField(TEXT("sort_order"));
    ParseSuccess &= JsonSortOrderField.IsValid() && !JsonSortOrderField->IsNull() && TryGetJsonValue(JsonSortOrderField, SortOrder);
    const TSharedPtr<FJsonValue> JsonCustomOnlyField = (*Object)->TryGetField(TEXT("custom_only"));
    ParseSuccess &= JsonCustomOnlyField.IsValid() && !JsonCustomOnlyField->IsNull() && TryGetJsonValue(JsonCustomOnlyField, CustomOnly);
    const TSharedPtr<FJsonValue> JsonMessageNameField = (*Object)->TryGetField(TEXT("message_name"));
    if (JsonMessageNameField.IsValid() && !JsonMessageNameField->IsNull())
    {
        MessageName_IsSet = TryGetJsonValue(JsonMessageNameField, MessageName_Optional);
        ParseSuccess &= MessageName_IsSet;
    }

    return ParseSuccess;
}

