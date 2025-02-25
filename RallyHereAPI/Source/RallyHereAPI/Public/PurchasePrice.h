// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "PurchasePrice.generated.h"

/** @defgroup RHAPI_PurchasePrice RallyHere API Model PurchasePrice
 *  @{
 */

/**
 * @brief The purchase price of an Item.
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_PurchasePrice : public FRHAPI_Model
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

    /** @brief The Item used as the currency for the purchase. */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    int32 PriceItemId{ 0 };
    /** @brief Gets the value of PriceItemId */
    int32& GetPriceItemId() { return PriceItemId; }
    /** @brief Gets the value of PriceItemId */
    const int32& GetPriceItemId() const { return PriceItemId; }
    /** @brief Sets the value of PriceItemId */
    void SetPriceItemId(int32 NewValue) { PriceItemId = NewValue;  }
    /** @brief Returns true if PriceItemId matches the default value */
    bool IsPriceItemIdDefaultValue() const { return PriceItemId == 0; }
    /** @brief Sets the value of PriceItemId to its default  */
    void SetPriceItemIdToDefault() { PriceItemId = 0;  }

    /** @brief The price of the Item. */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
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

    /** @brief The Item used as the coupon for the purchase. */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    int32 PriceCouponItemId_Optional{  };
    /** @brief true if PriceCouponItemId_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool PriceCouponItemId_IsSet{ false };
    /** @brief Gets the value of PriceCouponItemId_Optional, regardless of it having been set */
    int32& GetPriceCouponItemId() { return PriceCouponItemId_Optional; }
    /** @brief Gets the value of PriceCouponItemId_Optional, regardless of it having been set */
    const int32& GetPriceCouponItemId() const { return PriceCouponItemId_Optional; }
    /** @brief Gets the value of PriceCouponItemId_Optional, if it has been set, otherwise it returns DefaultValue */
    const int32& GetPriceCouponItemId(const int32& DefaultValue) const { if (PriceCouponItemId_IsSet) return PriceCouponItemId_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of PriceCouponItemId_Optional and returns true if it has been set, otherwise returns false */
    bool GetPriceCouponItemId(int32& OutValue) const { if (PriceCouponItemId_IsSet) OutValue = PriceCouponItemId_Optional; return PriceCouponItemId_IsSet; }
    /** @brief Returns a pointer to PriceCouponItemId_Optional, if it has been set, otherwise returns nullptr */
    int32* GetPriceCouponItemIdOrNull() { if (PriceCouponItemId_IsSet) return &PriceCouponItemId_Optional; return nullptr; }
    /** @brief Returns a pointer to PriceCouponItemId_Optional, if it has been set, otherwise returns nullptr */
    const int32* GetPriceCouponItemIdOrNull() const { if (PriceCouponItemId_IsSet) return &PriceCouponItemId_Optional; return nullptr; }
    /** @brief Sets the value of PriceCouponItemId_Optional and also sets PriceCouponItemId_IsSet to true */
    void SetPriceCouponItemId(int32 NewValue) { PriceCouponItemId_Optional = NewValue; PriceCouponItemId_IsSet = true; }
     /** @brief Clears the value of PriceCouponItemId_Optional and sets PriceCouponItemId_IsSet to false */
    void ClearPriceCouponItemId() { PriceCouponItemId_Optional = 0; PriceCouponItemId_IsSet = false; }
    /** @brief Returns true if PriceCouponItemId_Optional is set and matches the default value */
    bool IsPriceCouponItemIdDefaultValue() const { return PriceCouponItemId_IsSet && PriceCouponItemId_Optional == 0; }
    /** @brief Sets the value of PriceCouponItemId_Optional to its default and also sets PriceCouponItemId_IsSet to true */
    void SetPriceCouponItemIdToDefault() { PriceCouponItemId_Optional = 0; PriceCouponItemId_IsSet = true; }
};

/** @} */
