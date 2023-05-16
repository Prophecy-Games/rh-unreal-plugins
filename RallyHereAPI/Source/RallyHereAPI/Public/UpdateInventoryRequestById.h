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
#include "InventoryBucket.h"
#include "UpdateInventoryRequestById.generated.h"

/*
* FRHAPI_UpdateInventoryRequestById
*
* 
*/
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_UpdateInventoryRequestById : public FRHAPI_Model
{
    GENERATED_BODY()

    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override final;
    void WriteJson(TSharedRef<TJsonWriter<>>& Writer) const override final;

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    ERHAPI_InventoryBucket Bucket_Optional{  };
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool Bucket_IsSet{ false };
    ERHAPI_InventoryBucket& GetBucket() { return Bucket_Optional; }
    const ERHAPI_InventoryBucket& GetBucket() const { return Bucket_Optional; }
    const ERHAPI_InventoryBucket& GetBucket(const ERHAPI_InventoryBucket& DefaultValue) const { if (Bucket_IsSet) return Bucket_Optional; return DefaultValue; }
    bool GetBucket(ERHAPI_InventoryBucket& OutValue) const { if (Bucket_IsSet) OutValue = Bucket_Optional; return Bucket_IsSet; }
    ERHAPI_InventoryBucket* GetBucketOrNull() { if (Bucket_IsSet) return &Bucket_Optional; return nullptr; }
    const ERHAPI_InventoryBucket* GetBucketOrNull() const { if (Bucket_IsSet) return &Bucket_Optional; return nullptr; }
    void SetBucket(ERHAPI_InventoryBucket NewValue) { Bucket_Optional = NewValue; Bucket_IsSet = true; }
    void ClearBucket() { Bucket_IsSet = false; }

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    int32 Count_Optional{  };
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool Count_IsSet{ false };
    int32& GetCount() { return Count_Optional; }
    const int32& GetCount() const { return Count_Optional; }
    const int32& GetCount(const int32& DefaultValue) const { if (Count_IsSet) return Count_Optional; return DefaultValue; }
    bool GetCount(int32& OutValue) const { if (Count_IsSet) OutValue = Count_Optional; return Count_IsSet; }
    int32* GetCountOrNull() { if (Count_IsSet) return &Count_Optional; return nullptr; }
    const int32* GetCountOrNull() const { if (Count_IsSet) return &Count_Optional; return nullptr; }
    void SetCount(int32 NewValue) { Count_Optional = NewValue; Count_IsSet = true; }
    void ClearCount() { Count_Optional = 1; Count_IsSet = false; }
    bool IsCountDefaultValue() const { return Count_IsSet && Count_Optional == 1; }
    void SetCountToDefault() { Count_Optional = 1; Count_IsSet = true; }

    /* Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FDateTime Expires_Optional{  };
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool Expires_IsSet{ false };
    FDateTime& GetExpires() { return Expires_Optional; }
    const FDateTime& GetExpires() const { return Expires_Optional; }
    const FDateTime& GetExpires(const FDateTime& DefaultValue) const { if (Expires_IsSet) return Expires_Optional; return DefaultValue; }
    bool GetExpires(FDateTime& OutValue) const { if (Expires_IsSet) OutValue = Expires_Optional; return Expires_IsSet; }
    FDateTime* GetExpiresOrNull() { if (Expires_IsSet) return &Expires_Optional; return nullptr; }
    const FDateTime* GetExpiresOrNull() const { if (Expires_IsSet) return &Expires_Optional; return nullptr; }
    void SetExpires(FDateTime NewValue) { Expires_Optional = NewValue; Expires_IsSet = true; }
    void ClearExpires() { Expires_IsSet = false; }

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    TMap<FString, FString> CustomData_Optional{  };
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool CustomData_IsSet{ false };
    TMap<FString, FString>& GetCustomData() { return CustomData_Optional; }
    const TMap<FString, FString>& GetCustomData() const { return CustomData_Optional; }
    const TMap<FString, FString>& GetCustomData(const TMap<FString, FString>& DefaultValue) const { if (CustomData_IsSet) return CustomData_Optional; return DefaultValue; }
    bool GetCustomData(TMap<FString, FString>& OutValue) const { if (CustomData_IsSet) OutValue = CustomData_Optional; return CustomData_IsSet; }
    TMap<FString, FString>* GetCustomDataOrNull() { if (CustomData_IsSet) return &CustomData_Optional; return nullptr; }
    const TMap<FString, FString>* GetCustomDataOrNull() const { if (CustomData_IsSet) return &CustomData_Optional; return nullptr; }
    void SetCustomData(TMap<FString, FString> NewValue) { CustomData_Optional = NewValue; CustomData_IsSet = true; }
    void ClearCustomData() { CustomData_IsSet = false; }

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    int32 ItemId_Optional{  };
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool ItemId_IsSet{ false };
    int32& GetItemId() { return ItemId_Optional; }
    const int32& GetItemId() const { return ItemId_Optional; }
    const int32& GetItemId(const int32& DefaultValue) const { if (ItemId_IsSet) return ItemId_Optional; return DefaultValue; }
    bool GetItemId(int32& OutValue) const { if (ItemId_IsSet) OutValue = ItemId_Optional; return ItemId_IsSet; }
    int32* GetItemIdOrNull() { if (ItemId_IsSet) return &ItemId_Optional; return nullptr; }
    const int32* GetItemIdOrNull() const { if (ItemId_IsSet) return &ItemId_Optional; return nullptr; }
    void SetItemId(int32 NewValue) { ItemId_Optional = NewValue; ItemId_IsSet = true; }
    void ClearItemId() { ItemId_Optional = 0; ItemId_IsSet = false; }
    bool IsItemIdDefaultValue() const { return ItemId_IsSet && ItemId_Optional == 0; }
    void SetItemIdToDefault() { ItemId_Optional = 0; ItemId_IsSet = true; }

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FGuid InventoryId{  };
    FGuid& GetInventoryId() { return InventoryId; }
    const FGuid& GetInventoryId() const { return InventoryId; }
    void SetInventoryId(FGuid NewValue) { InventoryId = NewValue;  }
};
