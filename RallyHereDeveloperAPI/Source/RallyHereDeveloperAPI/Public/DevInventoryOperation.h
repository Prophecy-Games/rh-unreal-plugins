// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevInventoryOperation.generated.h"


/**
 * @brief Determines how the Inventory Quantity will be acted upon and the sort order of Loot in a Vendor if the Loot has the same sort order.  Sort Order: 1. check_greater_then_or_equal/check_less_than 2. check_greater_than_or_equal_and_subtract/subtract 3. add/set
 */
UENUM(BlueprintType)
enum class ERHAPI_DevInventoryOperation : uint8
{
    Add UMETA(ToolTip="Add the quantity or expiration of the Inventory."),
    Subtract UMETA(ToolTip="Subtract the quantity or expiration of the Inventory."),
    Set UMETA(ToolTip="Set the quantity or expiration of the Inventory."),
    CheckGreaterThanOrEqual UMETA(ToolTip="Check if the quantity or expiration of the Inventory is greater than or equal to the value."),
    CheckLessThan UMETA(ToolTip="Check if the quantity or expiration of the Inventory is less than the value."),
    CheckGreaterThanOrEqualAndSubtract UMETA(ToolTip="Check if the quantity or expiration of the Inventory is greater than or equal to the value and subtract the value from the quantity or expiration."),
};
RALLYHEREDEVELOPERAPI_API FString EnumToString(const ERHAPI_DevInventoryOperation& EnumValue);
RALLYHEREDEVELOPERAPI_API bool EnumFromString(const FString& EnumAsString, ERHAPI_DevInventoryOperation& EnumValue);
RALLYHEREDEVELOPERAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_DevInventoryOperation& Value);
RALLYHEREDEVELOPERAPI_API void WriteJsonValue(TSharedRef<TJsonWriter<>>& Writer, const ERHAPI_DevInventoryOperation& Value);
RALLYHEREDEVELOPERAPI_API bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, ERHAPI_DevInventoryOperation& Value);
