// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevVendorSortOptions.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for ERHAPI_DevVendorSortOptions
FString EnumToString(const ERHAPI_DevVendorSortOptions& Value)
{
    switch (Value)
    {
    case ERHAPI_DevVendorSortOptions::VendorId:
        return TEXT("vendor_id");
    case ERHAPI_DevVendorSortOptions::LegacyVendorId:
        return TEXT("legacy_vendor_id");
    case ERHAPI_DevVendorSortOptions::Name:
        return TEXT("name");
    case ERHAPI_DevVendorSortOptions::Type:
        return TEXT("type");
    case ERHAPI_DevVendorSortOptions::LastModifiedTimestamp:
        return TEXT("last_modified_timestamp");
    }

    UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("Invalid ERHAPI_DevVendorSortOptions::Values Value (%d)"), (int)Value);
    return TEXT("");
}

bool EnumFromString(const FString& EnumAsString, ERHAPI_DevVendorSortOptions& Value)
{
    static TMap<FString, ERHAPI_DevVendorSortOptions> StringToEnum = { 
        { TEXT("vendor_id"), ERHAPI_DevVendorSortOptions::VendorId },
        { TEXT("legacy_vendor_id"), ERHAPI_DevVendorSortOptions::LegacyVendorId },
        { TEXT("name"), ERHAPI_DevVendorSortOptions::Name },
        { TEXT("type"), ERHAPI_DevVendorSortOptions::Type },
        { TEXT("last_modified_timestamp"), ERHAPI_DevVendorSortOptions::LastModifiedTimestamp },    };

    const auto Found = StringToEnum.Find(EnumAsString);
    if(Found)
        Value = *Found;
    return Found != nullptr;
}

FStringFormatArg ToStringFormatArg(const ERHAPI_DevVendorSortOptions& Value)
{
    return FStringFormatArg(EnumToString(Value));
}

void WriteJsonValue(TSharedRef<TJsonWriter<>>& Writer, const ERHAPI_DevVendorSortOptions& Value)
{
    RallyHereDeveloperAPI::WriteJsonValue(Writer, EnumToString(Value));
}

bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, ERHAPI_DevVendorSortOptions& Value)
{
    FString TmpValue;
    if (JsonValue->TryGetString(TmpValue))
    {
        if (EnumFromString(TmpValue, Value))
            return true;
    }
    return false;
}


