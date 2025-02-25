// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevPricePointCollection.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_DevPricePointCollection

void FRHAPI_DevPricePointCollection::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    if (Data_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("data"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, Data_Optional);
    }
    Writer->WriteIdentifierPrefix(TEXT("page_meta"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, PageMeta);
    Writer->WriteObjectEnd();
}

bool FRHAPI_DevPricePointCollection::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonDataField = (*Object)->TryGetField(TEXT("data"));
    if (JsonDataField.IsValid() && !JsonDataField->IsNull())
    {
        Data_IsSet = TryGetJsonValue(JsonDataField, Data_Optional);
        ParseSuccess &= Data_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonPageMetaField = (*Object)->TryGetField(TEXT("page_meta"));
    ParseSuccess &= JsonPageMetaField.IsValid() && !JsonPageMetaField->IsNull() && TryGetJsonValue(JsonPageMetaField, PageMeta);

    return ParseSuccess;
}

