// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevPriceBreakpoint.generated.h"

/** @defgroup RHAPI_DevPriceBreakpoint RallyHere API Model DevPriceBreakpoint
 *  @{
 */

/**
 * @brief Price based on quantity and the Item ID of the currency used.
 */
USTRUCT(BlueprintType)
struct RALLYHEREDEVELOPERAPI_API FRHAPI_DevPriceBreakpoint : public FRHAPI_DevModel
{
    GENERATED_BODY()

    /**
    * @brief Fills this object with data from the passed in JSON
    *
    * @param [in] JsonValue Data from the API call.
    *
    * @return true if parsing of the JSON data was successful.
    */
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override final;

    /**
    * @brief Writes the data from this object into the specified JSON Writer stream
    *
    * @param [in] Writer JSON Writer stream to push .
    */
    void WriteJson(TSharedRef<TJsonWriter<>>& Writer) const override final;

    /** @brief Custom data associated with the resource */
    TMap<FString, FString> CustomData_Optional{  };
    /** @brief true if CustomData_Optional has been set to a value */
    bool CustomData_IsSet{ false };
    /** @brief Gets the value of CustomData_Optional, regardless of it having been set */
    TMap<FString, FString>& GetCustomData() { return CustomData_Optional; }
    /** @brief Gets the value of CustomData_Optional, regardless of it having been set */
    const TMap<FString, FString>& GetCustomData() const { return CustomData_Optional; }
    /** @brief Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue */
    const TMap<FString, FString>& GetCustomData(const TMap<FString, FString>& DefaultValue) const { if (CustomData_IsSet) return CustomData_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false */
    bool GetCustomData(TMap<FString, FString>& OutValue) const { if (CustomData_IsSet) OutValue = CustomData_Optional; return CustomData_IsSet; }
    /** @brief Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr */
    TMap<FString, FString>* GetCustomDataOrNull() { if (CustomData_IsSet) return &CustomData_Optional; return nullptr; }
    /** @brief Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr */
    const TMap<FString, FString>* GetCustomDataOrNull() const { if (CustomData_IsSet) return &CustomData_Optional; return nullptr; }
    /** @brief Sets the value of CustomData_Optional and also sets CustomData_IsSet to true */
    void SetCustomData(TMap<FString, FString> NewValue) { CustomData_Optional = NewValue; CustomData_IsSet = true; }
     /** @brief Clears the value of CustomData_Optional and sets CustomData_IsSet to false */
    void ClearCustomData() { CustomData_IsSet = false; }

    /** @brief Item ID of the currency used to price. */
    FGuid PriceItemId{  };
    /** @brief Gets the value of PriceItemId */
    FGuid& GetPriceItemId() { return PriceItemId; }
    /** @brief Gets the value of PriceItemId */
    const FGuid& GetPriceItemId() const { return PriceItemId; }
    /** @brief Sets the value of PriceItemId */
    void SetPriceItemId(FGuid NewValue) { PriceItemId = NewValue;  }

    /** @brief Quantity for the price break point. */
    int32 Quantity{ 0 };
    /** @brief Gets the value of Quantity */
    int32& GetQuantity() { return Quantity; }
    /** @brief Gets the value of Quantity */
    const int32& GetQuantity() const { return Quantity; }
    /** @brief Sets the value of Quantity */
    void SetQuantity(int32 NewValue) { Quantity = NewValue;  }
    /** @brief Returns true if Quantity matches the default value */
    bool IsQuantityDefaultValue() const { return Quantity == 0; }
    /** @brief Sets the value of Quantity to its default  */
    void SetQuantityToDefault() { Quantity = 0;  }

    /** @brief Price for the quantity. */
    int32 Price{ 0 };
    /** @brief Gets the value of Price */
    int32& GetPrice() { return Price; }
    /** @brief Gets the value of Price */
    const int32& GetPrice() const { return Price; }
    /** @brief Sets the value of Price */
    void SetPrice(int32 NewValue) { Price = NewValue;  }
    /** @brief Returns true if Price matches the default value */
    bool IsPriceDefaultValue() const { return Price == 0; }
    /** @brief Sets the value of Price to its default  */
    void SetPriceToDefault() { Price = 0;  }
};

/** @} */
