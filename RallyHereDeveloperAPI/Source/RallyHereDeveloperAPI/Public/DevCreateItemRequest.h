// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevItemType.h"
#include "DevCreateItemRequest.generated.h"

/** @defgroup RHAPI_DevCreateItemRequest RallyHere API Model DevCreateItemRequest
 *  @{
 */

/**
 * @brief Create a new Item entity.
 */
USTRUCT(BlueprintType)
struct RALLYHEREDEVELOPERAPI_API FRHAPI_DevCreateItemRequest : public FRHAPI_DevModel
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
    TMap<FString, FString> CustomData_Optional{  };
    /** @brief true if CustomData_Optional has been set to a value */
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

    /** @brief Name of the resource */
    FString Name_Optional{  };
    /** @brief true if Name_Optional has been set to a value */
    bool Name_IsSet{ false };
    /** @brief Gets the value of Name_Optional, regardless of it having been set */
    FString& GetName() { return Name_Optional; }
    /** @brief Gets the value of Name_Optional, regardless of it having been set */
    const FString& GetName() const { return Name_Optional; }
    /** @brief Gets the value of Name_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetName(const FString& DefaultValue) const { if (Name_IsSet) return Name_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Name_Optional and returns true if it has been set, otherwise returns false */
    bool GetName(FString& OutValue) const { if (Name_IsSet) OutValue = Name_Optional; return Name_IsSet; }
    /** @brief Returns a pointer to Name_Optional, if it has been set, otherwise returns nullptr */
    FString* GetNameOrNull() { if (Name_IsSet) return &Name_Optional; return nullptr; }
    /** @brief Returns a pointer to Name_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetNameOrNull() const { if (Name_IsSet) return &Name_Optional; return nullptr; }
    /** @brief Sets the value of Name_Optional and also sets Name_IsSet to true */
    void SetName(FString NewValue) { Name_Optional = NewValue; Name_IsSet = true; }
     /** @brief Clears the value of Name_Optional and sets Name_IsSet to false */
    void ClearName() { Name_IsSet = false; }

    /** @brief Description of the resource */
    FString Description_Optional{  };
    /** @brief true if Description_Optional has been set to a value */
    bool Description_IsSet{ false };
    /** @brief Gets the value of Description_Optional, regardless of it having been set */
    FString& GetDescription() { return Description_Optional; }
    /** @brief Gets the value of Description_Optional, regardless of it having been set */
    const FString& GetDescription() const { return Description_Optional; }
    /** @brief Gets the value of Description_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetDescription(const FString& DefaultValue) const { if (Description_IsSet) return Description_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Description_Optional and returns true if it has been set, otherwise returns false */
    bool GetDescription(FString& OutValue) const { if (Description_IsSet) OutValue = Description_Optional; return Description_IsSet; }
    /** @brief Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr */
    FString* GetDescriptionOrNull() { if (Description_IsSet) return &Description_Optional; return nullptr; }
    /** @brief Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetDescriptionOrNull() const { if (Description_IsSet) return &Description_Optional; return nullptr; }
    /** @brief Sets the value of Description_Optional and also sets Description_IsSet to true */
    void SetDescription(FString NewValue) { Description_Optional = NewValue; Description_IsSet = true; }
     /** @brief Clears the value of Description_Optional and sets Description_IsSet to false */
    void ClearDescription() { Description_IsSet = false; }

    /** @brief The type of item. */
    ERHAPI_DevItemType ItemType_Optional{  };
    /** @brief true if ItemType_Optional has been set to a value */
    bool ItemType_IsSet{ false };
    /** @brief Gets the value of ItemType_Optional, regardless of it having been set */
    ERHAPI_DevItemType& GetItemType() { return ItemType_Optional; }
    /** @brief Gets the value of ItemType_Optional, regardless of it having been set */
    const ERHAPI_DevItemType& GetItemType() const { return ItemType_Optional; }
    /** @brief Gets the value of ItemType_Optional, if it has been set, otherwise it returns DefaultValue */
    const ERHAPI_DevItemType& GetItemType(const ERHAPI_DevItemType& DefaultValue) const { if (ItemType_IsSet) return ItemType_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of ItemType_Optional and returns true if it has been set, otherwise returns false */
    bool GetItemType(ERHAPI_DevItemType& OutValue) const { if (ItemType_IsSet) OutValue = ItemType_Optional; return ItemType_IsSet; }
    /** @brief Returns a pointer to ItemType_Optional, if it has been set, otherwise returns nullptr */
    ERHAPI_DevItemType* GetItemTypeOrNull() { if (ItemType_IsSet) return &ItemType_Optional; return nullptr; }
    /** @brief Returns a pointer to ItemType_Optional, if it has been set, otherwise returns nullptr */
    const ERHAPI_DevItemType* GetItemTypeOrNull() const { if (ItemType_IsSet) return &ItemType_Optional; return nullptr; }
    /** @brief Sets the value of ItemType_Optional and also sets ItemType_IsSet to true */
    void SetItemType(ERHAPI_DevItemType NewValue) { ItemType_Optional = NewValue; ItemType_IsSet = true; }
     /** @brief Clears the value of ItemType_Optional and sets ItemType_IsSet to false */
    void ClearItemType() { ItemType_IsSet = false; }

    /** @brief This is only valid for an entitlement Item. When this item is granted and Inventory Session creation, this is the Loot ID that will be fulfilled. */
    FGuid EntitledLootId_Optional{  };
    /** @brief true if EntitledLootId_Optional has been set to a value */
    bool EntitledLootId_IsSet{ false };
    /** @brief Gets the value of EntitledLootId_Optional, regardless of it having been set */
    FGuid& GetEntitledLootId() { return EntitledLootId_Optional; }
    /** @brief Gets the value of EntitledLootId_Optional, regardless of it having been set */
    const FGuid& GetEntitledLootId() const { return EntitledLootId_Optional; }
    /** @brief Gets the value of EntitledLootId_Optional, if it has been set, otherwise it returns DefaultValue */
    const FGuid& GetEntitledLootId(const FGuid& DefaultValue) const { if (EntitledLootId_IsSet) return EntitledLootId_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of EntitledLootId_Optional and returns true if it has been set, otherwise returns false */
    bool GetEntitledLootId(FGuid& OutValue) const { if (EntitledLootId_IsSet) OutValue = EntitledLootId_Optional; return EntitledLootId_IsSet; }
    /** @brief Returns a pointer to EntitledLootId_Optional, if it has been set, otherwise returns nullptr */
    FGuid* GetEntitledLootIdOrNull() { if (EntitledLootId_IsSet) return &EntitledLootId_Optional; return nullptr; }
    /** @brief Returns a pointer to EntitledLootId_Optional, if it has been set, otherwise returns nullptr */
    const FGuid* GetEntitledLootIdOrNull() const { if (EntitledLootId_IsSet) return &EntitledLootId_Optional; return nullptr; }
    /** @brief Sets the value of EntitledLootId_Optional and also sets EntitledLootId_IsSet to true */
    void SetEntitledLootId(FGuid NewValue) { EntitledLootId_Optional = NewValue; EntitledLootId_IsSet = true; }
     /** @brief Clears the value of EntitledLootId_Optional and sets EntitledLootId_IsSet to false */
    void ClearEntitledLootId() { EntitledLootId_IsSet = false; }

    /** @brief The XP Table that is used to determine the Player's level for this XP. The level increase occurs when the quantity of this Item increases above the minimum XP of an XP Level. This is only valid for an unit Item. */
    FGuid LevelXpTableId_Optional{  };
    /** @brief true if LevelXpTableId_Optional has been set to a value */
    bool LevelXpTableId_IsSet{ false };
    /** @brief Gets the value of LevelXpTableId_Optional, regardless of it having been set */
    FGuid& GetLevelXpTableId() { return LevelXpTableId_Optional; }
    /** @brief Gets the value of LevelXpTableId_Optional, regardless of it having been set */
    const FGuid& GetLevelXpTableId() const { return LevelXpTableId_Optional; }
    /** @brief Gets the value of LevelXpTableId_Optional, if it has been set, otherwise it returns DefaultValue */
    const FGuid& GetLevelXpTableId(const FGuid& DefaultValue) const { if (LevelXpTableId_IsSet) return LevelXpTableId_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of LevelXpTableId_Optional and returns true if it has been set, otherwise returns false */
    bool GetLevelXpTableId(FGuid& OutValue) const { if (LevelXpTableId_IsSet) OutValue = LevelXpTableId_Optional; return LevelXpTableId_IsSet; }
    /** @brief Returns a pointer to LevelXpTableId_Optional, if it has been set, otherwise returns nullptr */
    FGuid* GetLevelXpTableIdOrNull() { if (LevelXpTableId_IsSet) return &LevelXpTableId_Optional; return nullptr; }
    /** @brief Returns a pointer to LevelXpTableId_Optional, if it has been set, otherwise returns nullptr */
    const FGuid* GetLevelXpTableIdOrNull() const { if (LevelXpTableId_IsSet) return &LevelXpTableId_Optional; return nullptr; }
    /** @brief Sets the value of LevelXpTableId_Optional and also sets LevelXpTableId_IsSet to true */
    void SetLevelXpTableId(FGuid NewValue) { LevelXpTableId_Optional = NewValue; LevelXpTableId_IsSet = true; }
     /** @brief Clears the value of LevelXpTableId_Optional and sets LevelXpTableId_IsSet to false */
    void ClearLevelXpTableId() { LevelXpTableId_IsSet = false; }

    /** @brief The Vendor that is used filfill level up rewards for this item. The level of the Player is used as the index into the Vendor's Loot table. This is only valid for an unit Item. */
    FGuid LevelVendorId_Optional{  };
    /** @brief true if LevelVendorId_Optional has been set to a value */
    bool LevelVendorId_IsSet{ false };
    /** @brief Gets the value of LevelVendorId_Optional, regardless of it having been set */
    FGuid& GetLevelVendorId() { return LevelVendorId_Optional; }
    /** @brief Gets the value of LevelVendorId_Optional, regardless of it having been set */
    const FGuid& GetLevelVendorId() const { return LevelVendorId_Optional; }
    /** @brief Gets the value of LevelVendorId_Optional, if it has been set, otherwise it returns DefaultValue */
    const FGuid& GetLevelVendorId(const FGuid& DefaultValue) const { if (LevelVendorId_IsSet) return LevelVendorId_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of LevelVendorId_Optional and returns true if it has been set, otherwise returns false */
    bool GetLevelVendorId(FGuid& OutValue) const { if (LevelVendorId_IsSet) OutValue = LevelVendorId_Optional; return LevelVendorId_IsSet; }
    /** @brief Returns a pointer to LevelVendorId_Optional, if it has been set, otherwise returns nullptr */
    FGuid* GetLevelVendorIdOrNull() { if (LevelVendorId_IsSet) return &LevelVendorId_Optional; return nullptr; }
    /** @brief Returns a pointer to LevelVendorId_Optional, if it has been set, otherwise returns nullptr */
    const FGuid* GetLevelVendorIdOrNull() const { if (LevelVendorId_IsSet) return &LevelVendorId_Optional; return nullptr; }
    /** @brief Sets the value of LevelVendorId_Optional and also sets LevelVendorId_IsSet to true */
    void SetLevelVendorId(FGuid NewValue) { LevelVendorId_Optional = NewValue; LevelVendorId_IsSet = true; }
     /** @brief Clears the value of LevelVendorId_Optional and sets LevelVendorId_IsSet to false */
    void ClearLevelVendorId() { LevelVendorId_IsSet = false; }

    /** @brief The Inventory Bucket Use Rule Set ID that determines how this item can be used across buckets. */
    FGuid InventoryBucketUseRuleSetId_Optional{  };
    /** @brief true if InventoryBucketUseRuleSetId_Optional has been set to a value */
    bool InventoryBucketUseRuleSetId_IsSet{ false };
    /** @brief Gets the value of InventoryBucketUseRuleSetId_Optional, regardless of it having been set */
    FGuid& GetInventoryBucketUseRuleSetId() { return InventoryBucketUseRuleSetId_Optional; }
    /** @brief Gets the value of InventoryBucketUseRuleSetId_Optional, regardless of it having been set */
    const FGuid& GetInventoryBucketUseRuleSetId() const { return InventoryBucketUseRuleSetId_Optional; }
    /** @brief Gets the value of InventoryBucketUseRuleSetId_Optional, if it has been set, otherwise it returns DefaultValue */
    const FGuid& GetInventoryBucketUseRuleSetId(const FGuid& DefaultValue) const { if (InventoryBucketUseRuleSetId_IsSet) return InventoryBucketUseRuleSetId_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of InventoryBucketUseRuleSetId_Optional and returns true if it has been set, otherwise returns false */
    bool GetInventoryBucketUseRuleSetId(FGuid& OutValue) const { if (InventoryBucketUseRuleSetId_IsSet) OutValue = InventoryBucketUseRuleSetId_Optional; return InventoryBucketUseRuleSetId_IsSet; }
    /** @brief Returns a pointer to InventoryBucketUseRuleSetId_Optional, if it has been set, otherwise returns nullptr */
    FGuid* GetInventoryBucketUseRuleSetIdOrNull() { if (InventoryBucketUseRuleSetId_IsSet) return &InventoryBucketUseRuleSetId_Optional; return nullptr; }
    /** @brief Returns a pointer to InventoryBucketUseRuleSetId_Optional, if it has been set, otherwise returns nullptr */
    const FGuid* GetInventoryBucketUseRuleSetIdOrNull() const { if (InventoryBucketUseRuleSetId_IsSet) return &InventoryBucketUseRuleSetId_Optional; return nullptr; }
    /** @brief Sets the value of InventoryBucketUseRuleSetId_Optional and also sets InventoryBucketUseRuleSetId_IsSet to true */
    void SetInventoryBucketUseRuleSetId(FGuid NewValue) { InventoryBucketUseRuleSetId_Optional = NewValue; InventoryBucketUseRuleSetId_IsSet = true; }
     /** @brief Clears the value of InventoryBucketUseRuleSetId_Optional and sets InventoryBucketUseRuleSetId_IsSet to false */
    void ClearInventoryBucketUseRuleSetId() { InventoryBucketUseRuleSetId_IsSet = false; }

    /** @brief The amount the price is discounted. This is a percentage between 0 and 1. For example, 0.25 would be a 25% discount. */
    float CouponDiscountPercentage_Optional{  };
    /** @brief true if CouponDiscountPercentage_Optional has been set to a value */
    bool CouponDiscountPercentage_IsSet{ false };
    /** @brief Gets the value of CouponDiscountPercentage_Optional, regardless of it having been set */
    float& GetCouponDiscountPercentage() { return CouponDiscountPercentage_Optional; }
    /** @brief Gets the value of CouponDiscountPercentage_Optional, regardless of it having been set */
    const float& GetCouponDiscountPercentage() const { return CouponDiscountPercentage_Optional; }
    /** @brief Gets the value of CouponDiscountPercentage_Optional, if it has been set, otherwise it returns DefaultValue */
    const float& GetCouponDiscountPercentage(const float& DefaultValue) const { if (CouponDiscountPercentage_IsSet) return CouponDiscountPercentage_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of CouponDiscountPercentage_Optional and returns true if it has been set, otherwise returns false */
    bool GetCouponDiscountPercentage(float& OutValue) const { if (CouponDiscountPercentage_IsSet) OutValue = CouponDiscountPercentage_Optional; return CouponDiscountPercentage_IsSet; }
    /** @brief Returns a pointer to CouponDiscountPercentage_Optional, if it has been set, otherwise returns nullptr */
    float* GetCouponDiscountPercentageOrNull() { if (CouponDiscountPercentage_IsSet) return &CouponDiscountPercentage_Optional; return nullptr; }
    /** @brief Returns a pointer to CouponDiscountPercentage_Optional, if it has been set, otherwise returns nullptr */
    const float* GetCouponDiscountPercentageOrNull() const { if (CouponDiscountPercentage_IsSet) return &CouponDiscountPercentage_Optional; return nullptr; }
    /** @brief Sets the value of CouponDiscountPercentage_Optional and also sets CouponDiscountPercentage_IsSet to true */
    void SetCouponDiscountPercentage(float NewValue) { CouponDiscountPercentage_Optional = NewValue; CouponDiscountPercentage_IsSet = true; }
     /** @brief Clears the value of CouponDiscountPercentage_Optional and sets CouponDiscountPercentage_IsSet to false */
    void ClearCouponDiscountPercentage() { CouponDiscountPercentage_IsSet = false; }

    /** @brief If true, the coupon will be consumed when used by decreasing the quantity in the Player's Inventory by 1. If false, the coupon will remain in the Player's inventory after use. */
    bool CouponConsumeOnUse_Optional{  };
    /** @brief true if CouponConsumeOnUse_Optional has been set to a value */
    bool CouponConsumeOnUse_IsSet{ false };
    /** @brief Gets the value of CouponConsumeOnUse_Optional, regardless of it having been set */
    bool& GetCouponConsumeOnUse() { return CouponConsumeOnUse_Optional; }
    /** @brief Gets the value of CouponConsumeOnUse_Optional, regardless of it having been set */
    const bool& GetCouponConsumeOnUse() const { return CouponConsumeOnUse_Optional; }
    /** @brief Gets the value of CouponConsumeOnUse_Optional, if it has been set, otherwise it returns DefaultValue */
    const bool& GetCouponConsumeOnUse(const bool& DefaultValue) const { if (CouponConsumeOnUse_IsSet) return CouponConsumeOnUse_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of CouponConsumeOnUse_Optional and returns true if it has been set, otherwise returns false */
    bool GetCouponConsumeOnUse(bool& OutValue) const { if (CouponConsumeOnUse_IsSet) OutValue = CouponConsumeOnUse_Optional; return CouponConsumeOnUse_IsSet; }
    /** @brief Returns a pointer to CouponConsumeOnUse_Optional, if it has been set, otherwise returns nullptr */
    bool* GetCouponConsumeOnUseOrNull() { if (CouponConsumeOnUse_IsSet) return &CouponConsumeOnUse_Optional; return nullptr; }
    /** @brief Returns a pointer to CouponConsumeOnUse_Optional, if it has been set, otherwise returns nullptr */
    const bool* GetCouponConsumeOnUseOrNull() const { if (CouponConsumeOnUse_IsSet) return &CouponConsumeOnUse_Optional; return nullptr; }
    /** @brief Sets the value of CouponConsumeOnUse_Optional and also sets CouponConsumeOnUse_IsSet to true */
    void SetCouponConsumeOnUse(bool NewValue) { CouponConsumeOnUse_Optional = NewValue; CouponConsumeOnUse_IsSet = true; }
     /** @brief Clears the value of CouponConsumeOnUse_Optional and sets CouponConsumeOnUse_IsSet to false */
    void ClearCouponConsumeOnUse() { CouponConsumeOnUse_Optional = false; CouponConsumeOnUse_IsSet = false; }
    /** @brief Returns true if CouponConsumeOnUse_Optional is set and matches the default value */
    bool IsCouponConsumeOnUseDefaultValue() const { return CouponConsumeOnUse_IsSet && CouponConsumeOnUse_Optional == false; }
    /** @brief Sets the value of CouponConsumeOnUse_Optional to its default and also sets CouponConsumeOnUse_IsSet to true */
    void SetCouponConsumeOnUseToDefault() { CouponConsumeOnUse_Optional = false; CouponConsumeOnUse_IsSet = true; }

    /** @brief List of Loot IDs this item can discount */
    TArray<FGuid> CouponDiscountLoot_Optional{  };
    /** @brief true if CouponDiscountLoot_Optional has been set to a value */
    bool CouponDiscountLoot_IsSet{ false };
    /** @brief Gets the value of CouponDiscountLoot_Optional, regardless of it having been set */
    TArray<FGuid>& GetCouponDiscountLoot() { return CouponDiscountLoot_Optional; }
    /** @brief Gets the value of CouponDiscountLoot_Optional, regardless of it having been set */
    const TArray<FGuid>& GetCouponDiscountLoot() const { return CouponDiscountLoot_Optional; }
    /** @brief Gets the value of CouponDiscountLoot_Optional, if it has been set, otherwise it returns DefaultValue */
    const TArray<FGuid>& GetCouponDiscountLoot(const TArray<FGuid>& DefaultValue) const { if (CouponDiscountLoot_IsSet) return CouponDiscountLoot_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of CouponDiscountLoot_Optional and returns true if it has been set, otherwise returns false */
    bool GetCouponDiscountLoot(TArray<FGuid>& OutValue) const { if (CouponDiscountLoot_IsSet) OutValue = CouponDiscountLoot_Optional; return CouponDiscountLoot_IsSet; }
    /** @brief Returns a pointer to CouponDiscountLoot_Optional, if it has been set, otherwise returns nullptr */
    TArray<FGuid>* GetCouponDiscountLootOrNull() { if (CouponDiscountLoot_IsSet) return &CouponDiscountLoot_Optional; return nullptr; }
    /** @brief Returns a pointer to CouponDiscountLoot_Optional, if it has been set, otherwise returns nullptr */
    const TArray<FGuid>* GetCouponDiscountLootOrNull() const { if (CouponDiscountLoot_IsSet) return &CouponDiscountLoot_Optional; return nullptr; }
    /** @brief Sets the value of CouponDiscountLoot_Optional and also sets CouponDiscountLoot_IsSet to true */
    void SetCouponDiscountLoot(TArray<FGuid> NewValue) { CouponDiscountLoot_Optional = NewValue; CouponDiscountLoot_IsSet = true; }
     /** @brief Clears the value of CouponDiscountLoot_Optional and sets CouponDiscountLoot_IsSet to false */
    void ClearCouponDiscountLoot() { CouponDiscountLoot_IsSet = false; }

    /** @brief Name of corresponding currency Item ID  */
    FString CouponDiscountCurrencyItemName_Optional{  };
    /** @brief true if CouponDiscountCurrencyItemName_Optional has been set to a value */
    bool CouponDiscountCurrencyItemName_IsSet{ false };
    /** @brief Gets the value of CouponDiscountCurrencyItemName_Optional, regardless of it having been set */
    FString& GetCouponDiscountCurrencyItemName() { return CouponDiscountCurrencyItemName_Optional; }
    /** @brief Gets the value of CouponDiscountCurrencyItemName_Optional, regardless of it having been set */
    const FString& GetCouponDiscountCurrencyItemName() const { return CouponDiscountCurrencyItemName_Optional; }
    /** @brief Gets the value of CouponDiscountCurrencyItemName_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetCouponDiscountCurrencyItemName(const FString& DefaultValue) const { if (CouponDiscountCurrencyItemName_IsSet) return CouponDiscountCurrencyItemName_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of CouponDiscountCurrencyItemName_Optional and returns true if it has been set, otherwise returns false */
    bool GetCouponDiscountCurrencyItemName(FString& OutValue) const { if (CouponDiscountCurrencyItemName_IsSet) OutValue = CouponDiscountCurrencyItemName_Optional; return CouponDiscountCurrencyItemName_IsSet; }
    /** @brief Returns a pointer to CouponDiscountCurrencyItemName_Optional, if it has been set, otherwise returns nullptr */
    FString* GetCouponDiscountCurrencyItemNameOrNull() { if (CouponDiscountCurrencyItemName_IsSet) return &CouponDiscountCurrencyItemName_Optional; return nullptr; }
    /** @brief Returns a pointer to CouponDiscountCurrencyItemName_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetCouponDiscountCurrencyItemNameOrNull() const { if (CouponDiscountCurrencyItemName_IsSet) return &CouponDiscountCurrencyItemName_Optional; return nullptr; }
    /** @brief Sets the value of CouponDiscountCurrencyItemName_Optional and also sets CouponDiscountCurrencyItemName_IsSet to true */
    void SetCouponDiscountCurrencyItemName(FString NewValue) { CouponDiscountCurrencyItemName_Optional = NewValue; CouponDiscountCurrencyItemName_IsSet = true; }
     /** @brief Clears the value of CouponDiscountCurrencyItemName_Optional and sets CouponDiscountCurrencyItemName_IsSet to false */
    void ClearCouponDiscountCurrencyItemName() { CouponDiscountCurrencyItemName_IsSet = false; }

    /** @brief The Item ID of the currency to be used for the coupon. */
    FGuid CouponDiscountCurrencyItemId_Optional{  };
    /** @brief true if CouponDiscountCurrencyItemId_Optional has been set to a value */
    bool CouponDiscountCurrencyItemId_IsSet{ false };
    /** @brief Gets the value of CouponDiscountCurrencyItemId_Optional, regardless of it having been set */
    FGuid& GetCouponDiscountCurrencyItemId() { return CouponDiscountCurrencyItemId_Optional; }
    /** @brief Gets the value of CouponDiscountCurrencyItemId_Optional, regardless of it having been set */
    const FGuid& GetCouponDiscountCurrencyItemId() const { return CouponDiscountCurrencyItemId_Optional; }
    /** @brief Gets the value of CouponDiscountCurrencyItemId_Optional, if it has been set, otherwise it returns DefaultValue */
    const FGuid& GetCouponDiscountCurrencyItemId(const FGuid& DefaultValue) const { if (CouponDiscountCurrencyItemId_IsSet) return CouponDiscountCurrencyItemId_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of CouponDiscountCurrencyItemId_Optional and returns true if it has been set, otherwise returns false */
    bool GetCouponDiscountCurrencyItemId(FGuid& OutValue) const { if (CouponDiscountCurrencyItemId_IsSet) OutValue = CouponDiscountCurrencyItemId_Optional; return CouponDiscountCurrencyItemId_IsSet; }
    /** @brief Returns a pointer to CouponDiscountCurrencyItemId_Optional, if it has been set, otherwise returns nullptr */
    FGuid* GetCouponDiscountCurrencyItemIdOrNull() { if (CouponDiscountCurrencyItemId_IsSet) return &CouponDiscountCurrencyItemId_Optional; return nullptr; }
    /** @brief Returns a pointer to CouponDiscountCurrencyItemId_Optional, if it has been set, otherwise returns nullptr */
    const FGuid* GetCouponDiscountCurrencyItemIdOrNull() const { if (CouponDiscountCurrencyItemId_IsSet) return &CouponDiscountCurrencyItemId_Optional; return nullptr; }
    /** @brief Sets the value of CouponDiscountCurrencyItemId_Optional and also sets CouponDiscountCurrencyItemId_IsSet to true */
    void SetCouponDiscountCurrencyItemId(FGuid NewValue) { CouponDiscountCurrencyItemId_Optional = NewValue; CouponDiscountCurrencyItemId_IsSet = true; }
     /** @brief Clears the value of CouponDiscountCurrencyItemId_Optional and sets CouponDiscountCurrencyItemId_IsSet to false */
    void ClearCouponDiscountCurrencyItemId() { CouponDiscountCurrencyItemId_IsSet = false; }

    /** @brief The Legacy Item ID. */
    int32 LegacyItemId_Optional{  };
    /** @brief true if LegacyItemId_Optional has been set to a value */
    bool LegacyItemId_IsSet{ false };
    /** @brief Gets the value of LegacyItemId_Optional, regardless of it having been set */
    int32& GetLegacyItemId() { return LegacyItemId_Optional; }
    /** @brief Gets the value of LegacyItemId_Optional, regardless of it having been set */
    const int32& GetLegacyItemId() const { return LegacyItemId_Optional; }
    /** @brief Gets the value of LegacyItemId_Optional, if it has been set, otherwise it returns DefaultValue */
    const int32& GetLegacyItemId(const int32& DefaultValue) const { if (LegacyItemId_IsSet) return LegacyItemId_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of LegacyItemId_Optional and returns true if it has been set, otherwise returns false */
    bool GetLegacyItemId(int32& OutValue) const { if (LegacyItemId_IsSet) OutValue = LegacyItemId_Optional; return LegacyItemId_IsSet; }
    /** @brief Returns a pointer to LegacyItemId_Optional, if it has been set, otherwise returns nullptr */
    int32* GetLegacyItemIdOrNull() { if (LegacyItemId_IsSet) return &LegacyItemId_Optional; return nullptr; }
    /** @brief Returns a pointer to LegacyItemId_Optional, if it has been set, otherwise returns nullptr */
    const int32* GetLegacyItemIdOrNull() const { if (LegacyItemId_IsSet) return &LegacyItemId_Optional; return nullptr; }
    /** @brief Sets the value of LegacyItemId_Optional and also sets LegacyItemId_IsSet to true */
    void SetLegacyItemId(int32 NewValue) { LegacyItemId_Optional = NewValue; LegacyItemId_IsSet = true; }
     /** @brief Clears the value of LegacyItemId_Optional and sets LegacyItemId_IsSet to false */
    void ClearLegacyItemId() { LegacyItemId_Optional = 0; LegacyItemId_IsSet = false; }
    /** @brief Returns true if LegacyItemId_Optional is set and matches the default value */
    bool IsLegacyItemIdDefaultValue() const { return LegacyItemId_IsSet && LegacyItemId_Optional == 0; }
    /** @brief Sets the value of LegacyItemId_Optional to its default and also sets LegacyItemId_IsSet to true */
    void SetLegacyItemIdToDefault() { LegacyItemId_Optional = 0; LegacyItemId_IsSet = true; }
};

/** @} */
