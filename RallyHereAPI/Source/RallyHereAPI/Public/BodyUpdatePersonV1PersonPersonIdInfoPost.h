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
#include "BodyUpdatePersonV1PersonPersonIdInfoPost.generated.h"

/*
* FRHAPI_BodyUpdatePersonV1PersonPersonIdInfoPost
*
* 
*/
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_BodyUpdatePersonV1PersonPersonIdInfoPost : public FRHAPI_Model
{
    GENERATED_BODY()

    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override final;
    void WriteJson(TSharedRef<TJsonWriter<>>& Writer) const override final;

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString Email{  };
    FString& GetEmail() { return Email; }
    const FString& GetEmail() const { return Email; }
    void SetEmail(FString NewValue) { Email = NewValue;  }
};
