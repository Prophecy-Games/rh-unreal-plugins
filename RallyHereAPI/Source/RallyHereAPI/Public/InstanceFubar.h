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
#include "InstanceSourceProvider.h"
#include "InstanceFubar.generated.h"

/*
* FRHAPI_InstanceFubar
*
* 
*/
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_InstanceFubar : public FRHAPI_Model
{
    GENERATED_BODY()

    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override final;
    void WriteJson(TSharedRef<TJsonWriter<>>& Writer) const override final;

    /* ID for which instance was marked as FUBAR */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString InstanceId{  };
    FString& GetInstanceId() { return InstanceId; }
    const FString& GetInstanceId() const { return InstanceId; }
    void SetInstanceId(FString NewValue) { InstanceId = NewValue;  }

    /* Error string describing what caused the instance failure */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString Error{  };
    FString& GetError() { return Error; }
    const FString& GetError() const { return Error; }
    void SetError(FString NewValue) { Error = NewValue;  }

    /* What site the failed instance was in */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    int32 Site{ 0 };
    int32& GetSite() { return Site; }
    const int32& GetSite() const { return Site; }
    void SetSite(int32 NewValue) { Site = NewValue;  }
    bool IsSiteDefaultValue() const { return Site == 0; }
    void SetSiteToDefault() { Site = 0;  }

    /* ID for which matchmaking profile was used to generate the failed instance */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString MatchmakingProfileId{  };
    FString& GetMatchmakingProfileId() { return MatchmakingProfileId; }
    const FString& GetMatchmakingProfileId() const { return MatchmakingProfileId; }
    void SetMatchmakingProfileId(FString NewValue) { MatchmakingProfileId = NewValue;  }

    /* Which instance provider allocated this failed instance */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    ERHAPI_InstanceSourceProvider InstanceSourceProvider{  };
    ERHAPI_InstanceSourceProvider& GetInstanceSourceProvider() { return InstanceSourceProvider; }
    const ERHAPI_InstanceSourceProvider& GetInstanceSourceProvider() const { return InstanceSourceProvider; }
    void SetInstanceSourceProvider(ERHAPI_InstanceSourceProvider NewValue) { InstanceSourceProvider = NewValue;  }
};
