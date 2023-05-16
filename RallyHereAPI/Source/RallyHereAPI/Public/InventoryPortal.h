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

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "InventoryPortal.generated.h"

/*
* ERHAPI_InventoryPortal
*
* An enumeration.
*/
UENUM(BlueprintType)
enum class ERHAPI_InventoryPortal : uint8
{
    Free UMETA(ToolTip="An enumeration."),
    Sweat UMETA(ToolTip="An enumeration."),
    Unknown UMETA(ToolTip="An enumeration."),
    Standard UMETA(ToolTip="An enumeration."),
    Anon UMETA(ToolTip="An enumeration."),
    Kongregate UMETA(ToolTip="An enumeration."),
    Amazon UMETA(ToolTip="An enumeration."),
    Steam UMETA(ToolTip="An enumeration."),
    Tcls UMETA(ToolTip="An enumeration."),
    LevelupLatam UMETA(ToolTip="An enumeration."),
    LevelupBra UMETA(ToolTip="An enumeration."),
    Psn UMETA(ToolTip="An enumeration."),
    XboxLive UMETA(ToolTip="An enumeration."),
    Basic UMETA(ToolTip="An enumeration."),
    Facebook UMETA(ToolTip="An enumeration."),
    Google UMETA(ToolTip="An enumeration."),
    UNUSED14 UMETA(ToolTip="An enumeration."),
    RivalsMobile UMETA(ToolTip="An enumeration."),
    Twitch UMETA(ToolTip="An enumeration."),
    PaladinsStrike UMETA(ToolTip="An enumeration."),
    SmiteBlitz UMETA(ToolTip="An enumeration."),
    FacebookSmite UMETA(ToolTip="An enumeration."),
    FacebookPaladins UMETA(ToolTip="An enumeration."),
    FacebookHotg UMETA(ToolTip="An enumeration."),
    NintendoSwitch UMETA(ToolTip="An enumeration."),
    Tune UMETA(ToolTip="An enumeration."),
    Apple UMETA(ToolTip="An enumeration."),
    Discord UMETA(ToolTip="An enumeration."),
    Nintendo UMETA(ToolTip="An enumeration."),
    UNUSED27 UMETA(ToolTip="An enumeration."),
    Epic UMETA(ToolTip="An enumeration."),
    Forte UMETA(ToolTip="An enumeration."),
    Simulmedia UMETA(ToolTip="An enumeration."),
    Luna UMETA(ToolTip="An enumeration."),
    GooglePlay UMETA(ToolTip="An enumeration."),
    NintendoPpid UMETA(ToolTip="An enumeration."),
};
RALLYHEREAPI_API FString EnumToString(const ERHAPI_InventoryPortal& EnumValue);
RALLYHEREAPI_API bool EnumFromString(const FString& EnumAsString, ERHAPI_InventoryPortal& EnumValue);
RALLYHEREAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_InventoryPortal& Value);
RALLYHEREAPI_API void WriteJsonValue(TSharedRef<TJsonWriter<>>& Writer, const ERHAPI_InventoryPortal& Value);
RALLYHEREAPI_API bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, ERHAPI_InventoryPortal& Value);
