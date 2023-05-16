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
#include "HostType.generated.h"

/*
* ERHAPI_HostType
*
* An enumeration.
*/
UENUM(BlueprintType)
enum class ERHAPI_HostType : uint8
{
    Dedicated UMETA(ToolTip="An enumeration."),
    Player UMETA(ToolTip="An enumeration."),
};
RALLYHEREAPI_API FString EnumToString(const ERHAPI_HostType& EnumValue);
RALLYHEREAPI_API bool EnumFromString(const FString& EnumAsString, ERHAPI_HostType& EnumValue);
RALLYHEREAPI_API FStringFormatArg ToStringFormatArg(const ERHAPI_HostType& Value);
RALLYHEREAPI_API void WriteJsonValue(TSharedRef<TJsonWriter<>>& Writer, const ERHAPI_HostType& Value);
RALLYHEREAPI_API bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, ERHAPI_HostType& Value);
