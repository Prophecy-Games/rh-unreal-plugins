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


#include "MMRGroupingMethod.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for ERHAPI_MMRGroupingMethod
FString EnumToString(const ERHAPI_MMRGroupingMethod& Value)
{
    switch (Value)
    {
    case ERHAPI_MMRGroupingMethod::Worst:
        return TEXT("worst");
    case ERHAPI_MMRGroupingMethod::Best:
        return TEXT("best");
    case ERHAPI_MMRGroupingMethod::AverageByVariance:
        return TEXT("avg_weighted_by_sigma");
    case ERHAPI_MMRGroupingMethod::Average:
        return TEXT("avg");
    }

    UE_LOG(LogRallyHereAPI, Error, TEXT("Invalid ERHAPI_MMRGroupingMethod::Values Value (%d)"), (int)Value);
    return TEXT("");
}

bool EnumFromString(const FString& EnumAsString, ERHAPI_MMRGroupingMethod& Value)
{
    static TMap<FString, ERHAPI_MMRGroupingMethod> StringToEnum = { 
        { TEXT("worst"), ERHAPI_MMRGroupingMethod::Worst },
        { TEXT("best"), ERHAPI_MMRGroupingMethod::Best },
        { TEXT("avg_weighted_by_sigma"), ERHAPI_MMRGroupingMethod::AverageByVariance },
        { TEXT("avg"), ERHAPI_MMRGroupingMethod::Average },    };

    const auto Found = StringToEnum.Find(EnumAsString);
    if(Found)
        Value = *Found;
    return Found != nullptr;
}

FStringFormatArg ToStringFormatArg(const ERHAPI_MMRGroupingMethod& Value)
{
    return FStringFormatArg(EnumToString(Value));
}

void WriteJsonValue(TSharedRef<TJsonWriter<>>& Writer, const ERHAPI_MMRGroupingMethod& Value)
{
    RallyHereAPI::WriteJsonValue(Writer, EnumToString(Value));
}

bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, ERHAPI_MMRGroupingMethod& Value)
{
    FString TmpValue;
    if (JsonValue->TryGetString(TmpValue))
    {
        if (EnumFromString(TmpValue, Value))
            return true;
    }
    return false;
}


