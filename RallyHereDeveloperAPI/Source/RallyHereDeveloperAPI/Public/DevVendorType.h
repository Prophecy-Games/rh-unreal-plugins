// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevVendorType.generated.h"


/**
 * @brief Determine how the Vendor fulfills the Loot.
 */
UENUM(BlueprintType)
enum class ERHAPI_DevVendorType : uint8
{
    Recipe UMETA(ToolTip="A Vendor that will always drop all of the Loot in the Loot table."),
    RandomlySampled UMETA(ToolTip="A Vendor that will only fulfill one of the Loot in the Loot table based on the drop weights of the Loot."),
};
RALLYHEREDEVELOPERAPI_API FString EnumToString(const ERHAPI_DevVendorType& EnumValue);
RALLYHEREDEVELOPERAPI_API bool EnumFromString(const FString& EnumAsString, ERHAPI_DevVendorType& EnumValue);
RALLYHEREDEVELOPERAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_DevVendorType& Value);
RALLYHEREDEVELOPERAPI_API void WriteJsonValue(TSharedRef<TJsonWriter<>>& Writer, const ERHAPI_DevVendorType& Value);
RALLYHEREDEVELOPERAPI_API bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, ERHAPI_DevVendorType& Value);
