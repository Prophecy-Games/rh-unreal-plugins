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
#include "QueueJoinResponse.generated.h"

/*
* FRHAPI_QueueJoinResponse
*
* 
*/
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_QueueJoinResponse : public FRHAPI_Model
{
    GENERATED_BODY()

    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override final;
    void WriteJson(TSharedRef<TJsonWriter<>>& Writer) const override final;

    /* ID for the newly created match making ticket */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString TicketId{  };
    FString& GetTicketId() { return TicketId; }
    const FString& GetTicketId() const { return TicketId; }
    void SetTicketId(FString NewValue) { TicketId = NewValue;  }
};
