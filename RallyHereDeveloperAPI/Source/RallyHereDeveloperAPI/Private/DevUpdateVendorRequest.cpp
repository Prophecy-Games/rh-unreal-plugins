// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevUpdateVendorRequest.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_DevUpdateVendorRequest

void FRHAPI_DevUpdateVendorRequest::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    if (CustomData_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("custom_data"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, CustomData_Optional);
    }
    if (Name_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("name"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, Name_Optional);
    }
    if (Description_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("description"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, Description_Optional);
    }
    if (VendorType_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("vendor_type"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, EnumToString(VendorType_Optional));
    }
    if (Loot_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("loot"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, Loot_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_DevUpdateVendorRequest::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
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
    const TSharedPtr<FJsonValue> JsonNameField = (*Object)->TryGetField(TEXT("name"));
    if (JsonNameField.IsValid() && !JsonNameField->IsNull())
    {
        Name_IsSet = TryGetJsonValue(JsonNameField, Name_Optional);
        ParseSuccess &= Name_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonDescriptionField = (*Object)->TryGetField(TEXT("description"));
    if (JsonDescriptionField.IsValid() && !JsonDescriptionField->IsNull())
    {
        Description_IsSet = TryGetJsonValue(JsonDescriptionField, Description_Optional);
        ParseSuccess &= Description_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonVendorTypeField = (*Object)->TryGetField(TEXT("vendor_type"));
    if (JsonVendorTypeField.IsValid() && !JsonVendorTypeField->IsNull())
    {
        VendorType_IsSet = TryGetJsonValue(JsonVendorTypeField, VendorType_Optional);
        ParseSuccess &= VendorType_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonLootField = (*Object)->TryGetField(TEXT("loot"));
    if (JsonLootField.IsValid() && !JsonLootField->IsNull())
    {
        Loot_IsSet = TryGetJsonValue(JsonLootField, Loot_Optional);
        ParseSuccess &= Loot_IsSet;
    }

    return ParseSuccess;
}

