// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevInventorySelector.generated.h"


/**
 * @brief Determines way Inventory is selected and how it is to be modified.
 */
UENUM(BlueprintType)
enum class ERHAPI_DevInventorySelector : uint8
{
    Own UMETA(ToolTip="The Inventory will be stored across Inventory Sessions."),
    Rent UMETA(ToolTip="The Inventory will be stored across Inventory Sessions but will expire after a period of time. Quantity modification will modify the Inventory&#39;s expiration time."),
    RentTimeframeLocked UMETA(ToolTip="The Inventory will be stored across Inventory Sessions by will expire after a period of time. Quantity modification will not modify the Inventory&#39;s expiration time but instead the quantity of the Inventory."),
    OwnTransient UMETA(ToolTip="The Inventory will by fulfilled as transient Inventory and will not persist across Inventory Sessions."),
    InheritEntitlementInventory UMETA(ToolTip="Loot fulfilled will look for a parent Entitlement and then grant the Loot as transient Inventory with the rental expiration matching the parent;s expiration."),
};
RALLYHEREDEVELOPERAPI_API FString EnumToString(const ERHAPI_DevInventorySelector& EnumValue);
RALLYHEREDEVELOPERAPI_API bool EnumFromString(const FString& EnumAsString, ERHAPI_DevInventorySelector& EnumValue);
RALLYHEREDEVELOPERAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_DevInventorySelector& Value);
RALLYHEREDEVELOPERAPI_API void WriteJsonValue(TSharedRef<TJsonWriter<>>& Writer, const ERHAPI_DevInventorySelector& Value);
RALLYHEREDEVELOPERAPI_API bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, ERHAPI_DevInventorySelector& Value);
