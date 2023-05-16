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
#include "CacheInfo.h"
#include "InventoryPortal.h"
#include "PortalUseRuleset.generated.h"

/*
* FRHAPI_PortalUseRuleset
*
* 
*/
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_PortalUseRuleset : public FRHAPI_Model
{
    GENERATED_BODY()

    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override final;
    void WriteJson(TSharedRef<TJsonWriter<>>& Writer) const override final;

    TMap<FString, TArray<ERHAPI_InventoryPortal>> Rules_Optional{  };
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool Rules_IsSet{ false };
    TMap<FString, TArray<ERHAPI_InventoryPortal>>& GetRules() { return Rules_Optional; }
    const TMap<FString, TArray<ERHAPI_InventoryPortal>>& GetRules() const { return Rules_Optional; }
    const TMap<FString, TArray<ERHAPI_InventoryPortal>>& GetRules(const TMap<FString, TArray<ERHAPI_InventoryPortal>>& DefaultValue) const { if (Rules_IsSet) return Rules_Optional; return DefaultValue; }
    bool GetRules(TMap<FString, TArray<ERHAPI_InventoryPortal>>& OutValue) const { if (Rules_IsSet) OutValue = Rules_Optional; return Rules_IsSet; }
    TMap<FString, TArray<ERHAPI_InventoryPortal>>* GetRulesOrNull() { if (Rules_IsSet) return &Rules_Optional; return nullptr; }
    const TMap<FString, TArray<ERHAPI_InventoryPortal>>* GetRulesOrNull() const { if (Rules_IsSet) return &Rules_Optional; return nullptr; }
    void SetRules(TMap<FString, TArray<ERHAPI_InventoryPortal>> NewValue) { Rules_Optional = NewValue; Rules_IsSet = true; }
    void ClearRules() { Rules_IsSet = false; }

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FRHAPI_CacheInfo CacheInfo_Optional{  };
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool CacheInfo_IsSet{ false };
    FRHAPI_CacheInfo& GetCacheInfo() { return CacheInfo_Optional; }
    const FRHAPI_CacheInfo& GetCacheInfo() const { return CacheInfo_Optional; }
    const FRHAPI_CacheInfo& GetCacheInfo(const FRHAPI_CacheInfo& DefaultValue) const { if (CacheInfo_IsSet) return CacheInfo_Optional; return DefaultValue; }
    bool GetCacheInfo(FRHAPI_CacheInfo& OutValue) const { if (CacheInfo_IsSet) OutValue = CacheInfo_Optional; return CacheInfo_IsSet; }
    FRHAPI_CacheInfo* GetCacheInfoOrNull() { if (CacheInfo_IsSet) return &CacheInfo_Optional; return nullptr; }
    const FRHAPI_CacheInfo* GetCacheInfoOrNull() const { if (CacheInfo_IsSet) return &CacheInfo_Optional; return nullptr; }
    void SetCacheInfo(FRHAPI_CacheInfo NewValue) { CacheInfo_Optional = NewValue; CacheInfo_IsSet = true; }
    void ClearCacheInfo() { CacheInfo_IsSet = false; }
};
