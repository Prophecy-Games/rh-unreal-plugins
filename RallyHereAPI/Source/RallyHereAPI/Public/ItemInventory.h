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
#include "InventoryRecord.h"
#include "ItemInventory.generated.h"

/*
* FRHAPI_ItemInventory
*
* 
*/
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_ItemInventory : public FRHAPI_Model
{
    GENERATED_BODY()

    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override final;
    void WriteJson(TSharedRef<TJsonWriter<>>& Writer) const override final;

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    TMap<FString, FRHAPI_InventoryRecord> Records_Optional{  };
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool Records_IsSet{ false };
    TMap<FString, FRHAPI_InventoryRecord>& GetRecords() { return Records_Optional; }
    const TMap<FString, FRHAPI_InventoryRecord>& GetRecords() const { return Records_Optional; }
    const TMap<FString, FRHAPI_InventoryRecord>& GetRecords(const TMap<FString, FRHAPI_InventoryRecord>& DefaultValue) const { if (Records_IsSet) return Records_Optional; return DefaultValue; }
    bool GetRecords(TMap<FString, FRHAPI_InventoryRecord>& OutValue) const { if (Records_IsSet) OutValue = Records_Optional; return Records_IsSet; }
    TMap<FString, FRHAPI_InventoryRecord>* GetRecordsOrNull() { if (Records_IsSet) return &Records_Optional; return nullptr; }
    const TMap<FString, FRHAPI_InventoryRecord>* GetRecordsOrNull() const { if (Records_IsSet) return &Records_Optional; return nullptr; }
    void SetRecords(TMap<FString, FRHAPI_InventoryRecord> NewValue) { Records_Optional = NewValue; Records_IsSet = true; }
    void ClearRecords() { Records_IsSet = false; }

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
