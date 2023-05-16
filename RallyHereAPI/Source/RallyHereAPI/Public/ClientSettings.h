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
#include "Input.h"
#include "PlatformID.h"
#include "ClientSettings.generated.h"

/*
* FRHAPI_ClientSettings
*
* Which input type and platform the client is using
*/
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_ClientSettings : public FRHAPI_Model
{
    GENERATED_BODY()

    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override final;
    void WriteJson(TSharedRef<TJsonWriter<>>& Writer) const override final;

    /* Which platform this client is one */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    ERHAPI_PlatformID PlatformId{  };
    ERHAPI_PlatformID& GetPlatformId() { return PlatformId; }
    const ERHAPI_PlatformID& GetPlatformId() const { return PlatformId; }
    void SetPlatformId(ERHAPI_PlatformID NewValue) { PlatformId = NewValue;  }

    /* Which input type this client is using */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    ERHAPI_Input Input{  };
    ERHAPI_Input& GetInput() { return Input; }
    const ERHAPI_Input& GetInput() const { return Input; }
    void SetInput(ERHAPI_Input NewValue) { Input = NewValue;  }
};
