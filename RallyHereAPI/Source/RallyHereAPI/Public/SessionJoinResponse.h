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
#include "SessionJoinResponse.generated.h"

/*
* FRHAPI_SessionJoinResponse
*
* 
*/
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_SessionJoinResponse : public FRHAPI_Model
{
    GENERATED_BODY()

    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override final;
    void WriteJson(TSharedRef<TJsonWriter<>>& Writer) const override final;

    /* Session ID the player is now a part of */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString SessionId{  };
    FString& GetSessionId() { return SessionId; }
    const FString& GetSessionId() const { return SessionId; }
    void SetSessionId(FString NewValue) { SessionId = NewValue;  }
};
