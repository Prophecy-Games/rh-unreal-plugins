// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "InventoryBucket.generated.h"


/**
 * @brief Grouping of Inventory Items. Inventory items are grouped into different buckets as each Platform that is supported has different requirements on how Inventory can be used on their Platform and other Platforms.
 */
UENUM(BlueprintType)
enum class ERHAPI_InventoryBucket : uint8
{
    Free UMETA(ToolTip="Inventory given away for free."),
    Sweat UMETA(ToolTip="Inventory earned by players through in game activities."),
    None UMETA(ToolTip="Inventory that doesn&#39;t belong to any known platform."),
    Anon UMETA(ToolTip="Inventory assigned to the anonymous platform."),
    Amazon UMETA(ToolTip="Inventory assigned to the amazon platform."),
    Steam UMETA(ToolTip="Inventory assigned to the steam platform."),
    Psn UMETA(ToolTip="Inventory assigned to the playstation platform."),
    XboxLive UMETA(ToolTip="Inventory assigned to the Xbox platform."),
    Google UMETA(ToolTip="Inventory assigned to the Google platform."),
    Twitch UMETA(ToolTip="Inventory assigned to the Twitch platform."),
    NintendoSwitch UMETA(ToolTip="Inventory assigned to the Nintendo Switch platform."),
    Apple UMETA(ToolTip="Inventory assigned to the Apple platform."),
    Nintendo UMETA(ToolTip="Inventory assigned to the Nintendo platform."),
    Epic UMETA(ToolTip="Inventory assigned to the Epic platform."),
    GooglePlay UMETA(ToolTip="Inventory assigned to the Google Play platform."),
    NintendoPpid UMETA(ToolTip="Inventory assigned to the Nintendo PPID platform."),
};
RALLYHEREAPI_API FString EnumToString(const ERHAPI_InventoryBucket& EnumValue);
RALLYHEREAPI_API bool EnumFromString(const FString& EnumAsString, ERHAPI_InventoryBucket& EnumValue);
RALLYHEREAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_InventoryBucket& Value);
RALLYHEREAPI_API void WriteJsonValue(TSharedRef<TJsonWriter<>>& Writer, const ERHAPI_InventoryBucket& Value);
RALLYHEREAPI_API bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, ERHAPI_InventoryBucket& Value);
