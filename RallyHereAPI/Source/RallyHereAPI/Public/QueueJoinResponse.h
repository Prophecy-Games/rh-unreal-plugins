// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "QueueJoinResponse.generated.h"

/** @defgroup RHAPI_QueueJoinResponse RallyHere API Model QueueJoinResponse
 *  @{
 */

/**
 * @brief A response for successfully joining a matchmaking queue
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_QueueJoinResponse : public FRHAPI_Model
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

    /** @brief ID for the newly created match making ticket */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString TicketId{  };
    /** @brief Gets the value of TicketId */
    FString& GetTicketId() { return TicketId; }
    /** @brief Gets the value of TicketId */
    const FString& GetTicketId() const { return TicketId; }
    /** @brief Sets the value of TicketId */
    void SetTicketId(FString NewValue) { TicketId = NewValue;  }
};

/** @} */
