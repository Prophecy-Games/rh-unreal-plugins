// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevItemType.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for ERHAPI_DevItemType
FString EnumToString(const ERHAPI_DevItemType& Value)
{
    switch (Value)
    {
    case ERHAPI_DevItemType::Unit:
        return TEXT("unit");
    case ERHAPI_DevItemType::Recipe:
        return TEXT("recipe");
    case ERHAPI_DevItemType::RecipeWithPriceReduction:
        return TEXT("recipe_with_price_reduction");
    case ERHAPI_DevItemType::Entitlement:
        return TEXT("entitlement");
    }

    UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("Invalid ERHAPI_DevItemType::Values Value (%d)"), (int)Value);
    return TEXT("");
}

bool EnumFromString(const FString& EnumAsString, ERHAPI_DevItemType& Value)
{
    static TMap<FString, ERHAPI_DevItemType> StringToEnum = { 
        { TEXT("unit"), ERHAPI_DevItemType::Unit },
        { TEXT("recipe"), ERHAPI_DevItemType::Recipe },
        { TEXT("recipe_with_price_reduction"), ERHAPI_DevItemType::RecipeWithPriceReduction },
        { TEXT("entitlement"), ERHAPI_DevItemType::Entitlement },    };

    const auto Found = StringToEnum.Find(EnumAsString);
    if(Found)
        Value = *Found;
    return Found != nullptr;
}

FStringFormatArg ToStringFormatArg(const ERHAPI_DevItemType& Value)
{
    return FStringFormatArg(EnumToString(Value));
}

void WriteJsonValue(TSharedRef<TJsonWriter<>>& Writer, const ERHAPI_DevItemType& Value)
{
    RallyHereDeveloperAPI::WriteJsonValue(Writer, EnumToString(Value));
}

bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, ERHAPI_DevItemType& Value)
{
    FString TmpValue;
    if (JsonValue->TryGetString(TmpValue))
    {
        if (EnumFromString(TmpValue, Value))
            return true;
    }
    return false;
}


