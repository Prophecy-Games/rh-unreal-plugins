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


#include "PlayerOrderEntry.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_PlayerOrderEntry

void FRHAPI_PlayerOrderEntry::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("type"));
    RallyHereAPI::WriteJsonValue(Writer, EnumToString(Type));
    if (LootId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("loot_id"));
        RallyHereAPI::WriteJsonValue(Writer, LootId_Optional);
    }
    Writer->WriteIdentifierPrefix(TEXT("quantity"));
    RallyHereAPI::WriteJsonValue(Writer, Quantity);
    if (VendorVersion_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("vendor_version"));
        RallyHereAPI::WriteJsonValue(Writer, VendorVersion_Optional);
    }
    if (VendorEtag_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("vendor_etag"));
        RallyHereAPI::WriteJsonValue(Writer, VendorEtag_Optional);
    }
    if (DynamicBundleLootIds_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("dynamic_bundle_loot_ids"));
        RallyHereAPI::WriteJsonValue(Writer, DynamicBundleLootIds_Optional);
    }
    if (PurchasePrice_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("purchase_price"));
        RallyHereAPI::WriteJsonValue(Writer, PurchasePrice_Optional);
    }
    if (ExternalTranId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("external_tran_id"));
        RallyHereAPI::WriteJsonValue(Writer, ExternalTranId_Optional);
    }
    if (ExternalItemSku_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("external_item_sku"));
        RallyHereAPI::WriteJsonValue(Writer, ExternalItemSku_Optional);
    }
    if (UseInventoryBucket_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("use_inventory_bucket"));
        RallyHereAPI::WriteJsonValue(Writer, EnumToString(UseInventoryBucket_Optional));
    }
    if (PlayerPortalEventId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("player_portal_event_id"));
        RallyHereAPI::WriteJsonValue(Writer, PlayerPortalEventId_Optional);
    }
    if (InventoryId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("inventory_id"));
        RallyHereAPI::WriteJsonValue(Writer, InventoryId_Optional);
    }
    if (LegacyInventoryId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("legacy_inventory_id"));
        RallyHereAPI::WriteJsonValue(Writer, LegacyInventoryId_Optional);
    }
    if (ItemId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("item_id"));
        RallyHereAPI::WriteJsonValue(Writer, ItemId_Optional);
    }
    if (Expires_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("expires"));
        RallyHereAPI::WriteJsonValue(Writer, Expires_Optional);
    }
    if (CustomData_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("custom_data"));
        RallyHereAPI::WriteJsonValue(Writer, CustomData_Optional);
    }
    Writer->WriteIdentifierPrefix(TEXT("entry_id"));
    RallyHereAPI::WriteJsonValue(Writer, EntryId);
    if (Result_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("result"));
        RallyHereAPI::WriteJsonValue(Writer, EnumToString(Result_Optional));
    }
    if (Details_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("details"));
        RallyHereAPI::WriteJsonValue(Writer, Details_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_PlayerOrderEntry::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    ParseSuccess &= RallyHereAPI::TryGetJsonValue(*Object, TEXT("type"), Type);
    if ((*Object)->HasField(TEXT("loot_id")))
    {
        LootId_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("loot_id"), LootId_Optional);
        ParseSuccess &= LootId_IsSet;
    }
    ParseSuccess &= RallyHereAPI::TryGetJsonValue(*Object, TEXT("quantity"), Quantity);
    if ((*Object)->HasField(TEXT("vendor_version")))
    {
        VendorVersion_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("vendor_version"), VendorVersion_Optional);
        ParseSuccess &= VendorVersion_IsSet;
    }
    if ((*Object)->HasField(TEXT("vendor_etag")))
    {
        VendorEtag_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("vendor_etag"), VendorEtag_Optional);
        ParseSuccess &= VendorEtag_IsSet;
    }
    if ((*Object)->HasField(TEXT("dynamic_bundle_loot_ids")))
    {
        DynamicBundleLootIds_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("dynamic_bundle_loot_ids"), DynamicBundleLootIds_Optional);
        ParseSuccess &= DynamicBundleLootIds_IsSet;
    }
    if ((*Object)->HasField(TEXT("purchase_price")))
    {
        PurchasePrice_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("purchase_price"), PurchasePrice_Optional);
        ParseSuccess &= PurchasePrice_IsSet;
    }
    if ((*Object)->HasField(TEXT("external_tran_id")))
    {
        ExternalTranId_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("external_tran_id"), ExternalTranId_Optional);
        ParseSuccess &= ExternalTranId_IsSet;
    }
    if ((*Object)->HasField(TEXT("external_item_sku")))
    {
        ExternalItemSku_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("external_item_sku"), ExternalItemSku_Optional);
        ParseSuccess &= ExternalItemSku_IsSet;
    }
    if ((*Object)->HasField(TEXT("use_inventory_bucket")))
    {
        UseInventoryBucket_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("use_inventory_bucket"), UseInventoryBucket_Optional);
        ParseSuccess &= UseInventoryBucket_IsSet;
    }
    if ((*Object)->HasField(TEXT("player_portal_event_id")))
    {
        PlayerPortalEventId_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("player_portal_event_id"), PlayerPortalEventId_Optional);
        ParseSuccess &= PlayerPortalEventId_IsSet;
    }
    if ((*Object)->HasField(TEXT("inventory_id")))
    {
        InventoryId_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("inventory_id"), InventoryId_Optional);
        ParseSuccess &= InventoryId_IsSet;
    }
    if ((*Object)->HasField(TEXT("legacy_inventory_id")))
    {
        LegacyInventoryId_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("legacy_inventory_id"), LegacyInventoryId_Optional);
        ParseSuccess &= LegacyInventoryId_IsSet;
    }
    if ((*Object)->HasField(TEXT("item_id")))
    {
        ItemId_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("item_id"), ItemId_Optional);
        ParseSuccess &= ItemId_IsSet;
    }
    if ((*Object)->HasField(TEXT("expires")))
    {
        Expires_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("expires"), Expires_Optional);
        ParseSuccess &= Expires_IsSet;
    }
    if ((*Object)->HasField(TEXT("custom_data")))
    {
        CustomData_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("custom_data"), CustomData_Optional);
        ParseSuccess &= CustomData_IsSet;
    }
    ParseSuccess &= RallyHereAPI::TryGetJsonValue(*Object, TEXT("entry_id"), EntryId);
    if ((*Object)->HasField(TEXT("result")))
    {
        Result_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("result"), Result_Optional);
        ParseSuccess &= Result_IsSet;
    }
    if ((*Object)->HasField(TEXT("details")))
    {
        Details_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("details"), Details_Optional);
        ParseSuccess &= Details_IsSet;
    }

    return ParseSuccess;
}

