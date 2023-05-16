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
#include "QueueConfig.h"
#include "QueuesResponse.generated.h"

/*
* FRHAPI_QueuesResponse
*
* 
*/
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_QueuesResponse : public FRHAPI_Model
{
    GENERATED_BODY()

    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override final;
    void WriteJson(TSharedRef<TJsonWriter<>>& Writer) const override final;

    /* List of queues */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    TArray<FRHAPI_QueueConfig> Queues{  };
    TArray<FRHAPI_QueueConfig>& GetQueues() { return Queues; }
    const TArray<FRHAPI_QueueConfig>& GetQueues() const { return Queues; }
    void SetQueues(TArray<FRHAPI_QueueConfig> NewValue) { Queues = NewValue;  }
};
