// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "PlayerUuidFromId.generated.h"

/** @defgroup RHAPI_PlayerUuidFromId RallyHere API Model PlayerUuidFromId
 *  @{
 */

/**
 * @brief Model for getting a player UUID from a player ID
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_PlayerUuidFromId : public FRHAPI_Model
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

    /** @brief Player UUID */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FGuid Uuid{  };
    /** @brief Gets the value of Uuid */
    FGuid& GetUuid() { return Uuid; }
    /** @brief Gets the value of Uuid */
    const FGuid& GetUuid() const { return Uuid; }
    /** @brief Sets the value of Uuid */
    void SetUuid(FGuid NewValue) { Uuid = NewValue;  }
};

/** @} */
