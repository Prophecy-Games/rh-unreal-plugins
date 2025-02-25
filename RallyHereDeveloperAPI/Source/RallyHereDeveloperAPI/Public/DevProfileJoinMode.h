// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevProfileJoinMode.generated.h"


/**
 * @brief Mode that determines what types of match requests the ticket will appear in
 */
UENUM(BlueprintType)
enum class ERHAPI_DevProfileJoinMode : uint8
{
    Normal UMETA(ToolTip="Mode that determines what types of match requests the ticket will appear in"),
    Backfill UMETA(ToolTip="Mode that determines what types of match requests the ticket will appear in"),
    CreatedBefore UMETA(ToolTip="Mode that determines what types of match requests the ticket will appear in"),
};
RALLYHEREDEVELOPERAPI_API FString EnumToString(const ERHAPI_DevProfileJoinMode& EnumValue);
RALLYHEREDEVELOPERAPI_API bool EnumFromString(const FString& EnumAsString, ERHAPI_DevProfileJoinMode& EnumValue);
RALLYHEREDEVELOPERAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_DevProfileJoinMode& Value);
RALLYHEREDEVELOPERAPI_API void WriteJsonValue(TSharedRef<TJsonWriter<>>& Writer, const ERHAPI_DevProfileJoinMode& Value);
RALLYHEREDEVELOPERAPI_API bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, ERHAPI_DevProfileJoinMode& Value);
