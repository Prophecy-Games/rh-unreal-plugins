// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "CacheInfo.h"
#include "InventoryPortal.h"
#include "PortalUseRuleset.generated.h"

/** @defgroup RHAPI_PortalUseRuleset RallyHere API Model PortalUseRuleset
 *  @{
 */

/**
 * @brief A collection of Portal Use Rules.
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_PortalUseRuleset : public FRHAPI_Model
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

    /** @brief Custom data associated with the resource */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    TMap<FString, FString> CustomData_Optional{  };
    /** @brief true if CustomData_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool CustomData_IsSet{ false };
    /** @brief Gets the value of CustomData_Optional, regardless of it having been set */
    TMap<FString, FString>& GetCustomData() { return CustomData_Optional; }
    /** @brief Gets the value of CustomData_Optional, regardless of it having been set */
    const TMap<FString, FString>& GetCustomData() const { return CustomData_Optional; }
    /** @brief Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue */
    const TMap<FString, FString>& GetCustomData(const TMap<FString, FString>& DefaultValue) const { if (CustomData_IsSet) return CustomData_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false */
    bool GetCustomData(TMap<FString, FString>& OutValue) const { if (CustomData_IsSet) OutValue = CustomData_Optional; return CustomData_IsSet; }
    /** @brief Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr */
    TMap<FString, FString>* GetCustomDataOrNull() { if (CustomData_IsSet) return &CustomData_Optional; return nullptr; }
    /** @brief Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr */
    const TMap<FString, FString>* GetCustomDataOrNull() const { if (CustomData_IsSet) return &CustomData_Optional; return nullptr; }
    /** @brief Sets the value of CustomData_Optional and also sets CustomData_IsSet to true */
    void SetCustomData(TMap<FString, FString> NewValue) { CustomData_Optional = NewValue; CustomData_IsSet = true; }
     /** @brief Clears the value of CustomData_Optional and sets CustomData_IsSet to false */
    void ClearCustomData() { CustomData_IsSet = false; }

    TMap<FString, TArray<ERHAPI_InventoryPortal>> Rules_Optional{  };
    /** @brief true if Rules_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool Rules_IsSet{ false };
    /** @brief Gets the value of Rules_Optional, regardless of it having been set */
    TMap<FString, TArray<ERHAPI_InventoryPortal>>& GetRules() { return Rules_Optional; }
    /** @brief Gets the value of Rules_Optional, regardless of it having been set */
    const TMap<FString, TArray<ERHAPI_InventoryPortal>>& GetRules() const { return Rules_Optional; }
    /** @brief Gets the value of Rules_Optional, if it has been set, otherwise it returns DefaultValue */
    const TMap<FString, TArray<ERHAPI_InventoryPortal>>& GetRules(const TMap<FString, TArray<ERHAPI_InventoryPortal>>& DefaultValue) const { if (Rules_IsSet) return Rules_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Rules_Optional and returns true if it has been set, otherwise returns false */
    bool GetRules(TMap<FString, TArray<ERHAPI_InventoryPortal>>& OutValue) const { if (Rules_IsSet) OutValue = Rules_Optional; return Rules_IsSet; }
    /** @brief Returns a pointer to Rules_Optional, if it has been set, otherwise returns nullptr */
    TMap<FString, TArray<ERHAPI_InventoryPortal>>* GetRulesOrNull() { if (Rules_IsSet) return &Rules_Optional; return nullptr; }
    /** @brief Returns a pointer to Rules_Optional, if it has been set, otherwise returns nullptr */
    const TMap<FString, TArray<ERHAPI_InventoryPortal>>* GetRulesOrNull() const { if (Rules_IsSet) return &Rules_Optional; return nullptr; }
    /** @brief Sets the value of Rules_Optional and also sets Rules_IsSet to true */
    void SetRules(TMap<FString, TArray<ERHAPI_InventoryPortal>> NewValue) { Rules_Optional = NewValue; Rules_IsSet = true; }
     /** @brief Clears the value of Rules_Optional and sets Rules_IsSet to false */
    void ClearRules() { Rules_IsSet = false; }

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FRHAPI_CacheInfo CacheInfo_Optional{  };
    /** @brief true if CacheInfo_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool CacheInfo_IsSet{ false };
    /** @brief Gets the value of CacheInfo_Optional, regardless of it having been set */
    FRHAPI_CacheInfo& GetCacheInfo() { return CacheInfo_Optional; }
    /** @brief Gets the value of CacheInfo_Optional, regardless of it having been set */
    const FRHAPI_CacheInfo& GetCacheInfo() const { return CacheInfo_Optional; }
    /** @brief Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue */
    const FRHAPI_CacheInfo& GetCacheInfo(const FRHAPI_CacheInfo& DefaultValue) const { if (CacheInfo_IsSet) return CacheInfo_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false */
    bool GetCacheInfo(FRHAPI_CacheInfo& OutValue) const { if (CacheInfo_IsSet) OutValue = CacheInfo_Optional; return CacheInfo_IsSet; }
    /** @brief Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr */
    FRHAPI_CacheInfo* GetCacheInfoOrNull() { if (CacheInfo_IsSet) return &CacheInfo_Optional; return nullptr; }
    /** @brief Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr */
    const FRHAPI_CacheInfo* GetCacheInfoOrNull() const { if (CacheInfo_IsSet) return &CacheInfo_Optional; return nullptr; }
    /** @brief Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true */
    void SetCacheInfo(FRHAPI_CacheInfo NewValue) { CacheInfo_Optional = NewValue; CacheInfo_IsSet = true; }
     /** @brief Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false */
    void ClearCacheInfo() { CacheInfo_IsSet = false; }
};

/** @} */
