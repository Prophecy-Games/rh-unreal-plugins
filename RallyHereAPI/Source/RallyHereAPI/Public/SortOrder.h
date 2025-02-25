// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "SortOrder.generated.h"


/**
 * @brief Determine the direction of the sort
 */
UENUM(BlueprintType)
enum class ERHAPI_SortOrder : uint8
{
    Ascending UMETA(ToolTip="Sort in ascending order"),
    Descending UMETA(ToolTip="Sort in descending order"),
};
RALLYHEREAPI_API FString EnumToString(const ERHAPI_SortOrder& EnumValue);
RALLYHEREAPI_API bool EnumFromString(const FString& EnumAsString, ERHAPI_SortOrder& EnumValue);
RALLYHEREAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_SortOrder& Value);
RALLYHEREAPI_API void WriteJsonValue(TSharedRef<TJsonWriter<>>& Writer, const ERHAPI_SortOrder& Value);
RALLYHEREAPI_API bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, ERHAPI_SortOrder& Value);
