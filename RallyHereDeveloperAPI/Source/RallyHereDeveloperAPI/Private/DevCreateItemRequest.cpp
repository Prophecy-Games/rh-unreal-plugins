// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevCreateItemRequest.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_DevCreateItemRequest

void FRHAPI_DevCreateItemRequest::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    if (CustomData_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("custom_data"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, CustomData_Optional);
    }
    if (Name_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("name"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, Name_Optional);
    }
    if (Description_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("description"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, Description_Optional);
    }
    if (ItemType_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("item_type"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, EnumToString(ItemType_Optional));
    }
    if (EntitledLootId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("entitled_loot_id"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, EntitledLootId_Optional);
    }
    if (LevelXpTableId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("level_xp_table_id"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, LevelXpTableId_Optional);
    }
    if (LevelVendorId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("level_vendor_id"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, LevelVendorId_Optional);
    }
    if (InventoryBucketUseRuleSetId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("inventory_bucket_use_rule_set_id"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, InventoryBucketUseRuleSetId_Optional);
    }
    if (CouponDiscountPercentage_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("coupon_discount_percentage"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, CouponDiscountPercentage_Optional);
    }
    if (CouponConsumeOnUse_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("coupon_consume_on_use"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, CouponConsumeOnUse_Optional);
    }
    if (CouponDiscountLoot_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("coupon_discount_loot"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, CouponDiscountLoot_Optional);
    }
    if (CouponDiscountCurrencyItemName_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("coupon_discount_currency_item_name"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, CouponDiscountCurrencyItemName_Optional);
    }
    if (CouponDiscountCurrencyItemId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("coupon_discount_currency_item_id"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, CouponDiscountCurrencyItemId_Optional);
    }
    if (LegacyItemId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("legacy_item_id"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, LegacyItemId_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_DevCreateItemRequest::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonCustomDataField = (*Object)->TryGetField(TEXT("custom_data"));
    if (JsonCustomDataField.IsValid() && !JsonCustomDataField->IsNull())
    {
        CustomData_IsSet = TryGetJsonValue(JsonCustomDataField, CustomData_Optional);
        ParseSuccess &= CustomData_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonNameField = (*Object)->TryGetField(TEXT("name"));
    if (JsonNameField.IsValid() && !JsonNameField->IsNull())
    {
        Name_IsSet = TryGetJsonValue(JsonNameField, Name_Optional);
        ParseSuccess &= Name_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonDescriptionField = (*Object)->TryGetField(TEXT("description"));
    if (JsonDescriptionField.IsValid() && !JsonDescriptionField->IsNull())
    {
        Description_IsSet = TryGetJsonValue(JsonDescriptionField, Description_Optional);
        ParseSuccess &= Description_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonItemTypeField = (*Object)->TryGetField(TEXT("item_type"));
    if (JsonItemTypeField.IsValid() && !JsonItemTypeField->IsNull())
    {
        ItemType_IsSet = TryGetJsonValue(JsonItemTypeField, ItemType_Optional);
        ParseSuccess &= ItemType_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonEntitledLootIdField = (*Object)->TryGetField(TEXT("entitled_loot_id"));
    if (JsonEntitledLootIdField.IsValid() && !JsonEntitledLootIdField->IsNull())
    {
        EntitledLootId_IsSet = TryGetJsonValue(JsonEntitledLootIdField, EntitledLootId_Optional);
        ParseSuccess &= EntitledLootId_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonLevelXpTableIdField = (*Object)->TryGetField(TEXT("level_xp_table_id"));
    if (JsonLevelXpTableIdField.IsValid() && !JsonLevelXpTableIdField->IsNull())
    {
        LevelXpTableId_IsSet = TryGetJsonValue(JsonLevelXpTableIdField, LevelXpTableId_Optional);
        ParseSuccess &= LevelXpTableId_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonLevelVendorIdField = (*Object)->TryGetField(TEXT("level_vendor_id"));
    if (JsonLevelVendorIdField.IsValid() && !JsonLevelVendorIdField->IsNull())
    {
        LevelVendorId_IsSet = TryGetJsonValue(JsonLevelVendorIdField, LevelVendorId_Optional);
        ParseSuccess &= LevelVendorId_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonInventoryBucketUseRuleSetIdField = (*Object)->TryGetField(TEXT("inventory_bucket_use_rule_set_id"));
    if (JsonInventoryBucketUseRuleSetIdField.IsValid() && !JsonInventoryBucketUseRuleSetIdField->IsNull())
    {
        InventoryBucketUseRuleSetId_IsSet = TryGetJsonValue(JsonInventoryBucketUseRuleSetIdField, InventoryBucketUseRuleSetId_Optional);
        ParseSuccess &= InventoryBucketUseRuleSetId_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonCouponDiscountPercentageField = (*Object)->TryGetField(TEXT("coupon_discount_percentage"));
    if (JsonCouponDiscountPercentageField.IsValid() && !JsonCouponDiscountPercentageField->IsNull())
    {
        CouponDiscountPercentage_IsSet = TryGetJsonValue(JsonCouponDiscountPercentageField, CouponDiscountPercentage_Optional);
        ParseSuccess &= CouponDiscountPercentage_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonCouponConsumeOnUseField = (*Object)->TryGetField(TEXT("coupon_consume_on_use"));
    if (JsonCouponConsumeOnUseField.IsValid() && !JsonCouponConsumeOnUseField->IsNull())
    {
        CouponConsumeOnUse_IsSet = TryGetJsonValue(JsonCouponConsumeOnUseField, CouponConsumeOnUse_Optional);
        ParseSuccess &= CouponConsumeOnUse_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonCouponDiscountLootField = (*Object)->TryGetField(TEXT("coupon_discount_loot"));
    if (JsonCouponDiscountLootField.IsValid() && !JsonCouponDiscountLootField->IsNull())
    {
        CouponDiscountLoot_IsSet = TryGetJsonValue(JsonCouponDiscountLootField, CouponDiscountLoot_Optional);
        ParseSuccess &= CouponDiscountLoot_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonCouponDiscountCurrencyItemNameField = (*Object)->TryGetField(TEXT("coupon_discount_currency_item_name"));
    if (JsonCouponDiscountCurrencyItemNameField.IsValid() && !JsonCouponDiscountCurrencyItemNameField->IsNull())
    {
        CouponDiscountCurrencyItemName_IsSet = TryGetJsonValue(JsonCouponDiscountCurrencyItemNameField, CouponDiscountCurrencyItemName_Optional);
        ParseSuccess &= CouponDiscountCurrencyItemName_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonCouponDiscountCurrencyItemIdField = (*Object)->TryGetField(TEXT("coupon_discount_currency_item_id"));
    if (JsonCouponDiscountCurrencyItemIdField.IsValid() && !JsonCouponDiscountCurrencyItemIdField->IsNull())
    {
        CouponDiscountCurrencyItemId_IsSet = TryGetJsonValue(JsonCouponDiscountCurrencyItemIdField, CouponDiscountCurrencyItemId_Optional);
        ParseSuccess &= CouponDiscountCurrencyItemId_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonLegacyItemIdField = (*Object)->TryGetField(TEXT("legacy_item_id"));
    if (JsonLegacyItemIdField.IsValid() && !JsonLegacyItemIdField->IsNull())
    {
        LegacyItemId_IsSet = TryGetJsonValue(JsonLegacyItemIdField, LegacyItemId_Optional);
        ParseSuccess &= LegacyItemId_IsSet;
    }

    return ParseSuccess;
}

