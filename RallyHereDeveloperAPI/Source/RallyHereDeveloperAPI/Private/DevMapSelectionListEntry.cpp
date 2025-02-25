// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevMapSelectionListEntry.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_DevMapSelectionListEntry

void FRHAPI_DevMapSelectionListEntry::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("map_weight"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, MapWeight);
    Writer->WriteIdentifierPrefix(TEXT("map_id"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, MapId);
    if (SandboxId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("sandbox_id"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, SandboxId_Optional);
    }
    Writer->WriteIdentifierPrefix(TEXT("selection_list_id"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, SelectionListId);
    Writer->WriteIdentifierPrefix(TEXT("map_selection_list_entry_id"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, MapSelectionListEntryId);
    if (LastModifiedAccountId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("last_modified_account_id"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, LastModifiedAccountId_Optional);
    }
    if (LastModifiedTimestamp_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("last_modified_timestamp"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, LastModifiedTimestamp_Optional);
    }
    if (MapName_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("map_name"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, MapName_Optional);
    }
    if (Mode_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("mode"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, Mode_Optional);
    }
    if (LegacyConfig_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("legacy_config"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, LegacyConfig_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_DevMapSelectionListEntry::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonMapWeightField = (*Object)->TryGetField(TEXT("map_weight"));
    ParseSuccess &= JsonMapWeightField.IsValid() && !JsonMapWeightField->IsNull() && TryGetJsonValue(JsonMapWeightField, MapWeight);
    const TSharedPtr<FJsonValue> JsonMapIdField = (*Object)->TryGetField(TEXT("map_id"));
    ParseSuccess &= JsonMapIdField.IsValid() && !JsonMapIdField->IsNull() && TryGetJsonValue(JsonMapIdField, MapId);
    const TSharedPtr<FJsonValue> JsonSandboxIdField = (*Object)->TryGetField(TEXT("sandbox_id"));
    if (JsonSandboxIdField.IsValid() && !JsonSandboxIdField->IsNull())
    {
        SandboxId_IsSet = TryGetJsonValue(JsonSandboxIdField, SandboxId_Optional);
        ParseSuccess &= SandboxId_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonSelectionListIdField = (*Object)->TryGetField(TEXT("selection_list_id"));
    ParseSuccess &= JsonSelectionListIdField.IsValid() && !JsonSelectionListIdField->IsNull() && TryGetJsonValue(JsonSelectionListIdField, SelectionListId);
    const TSharedPtr<FJsonValue> JsonMapSelectionListEntryIdField = (*Object)->TryGetField(TEXT("map_selection_list_entry_id"));
    ParseSuccess &= JsonMapSelectionListEntryIdField.IsValid() && !JsonMapSelectionListEntryIdField->IsNull() && TryGetJsonValue(JsonMapSelectionListEntryIdField, MapSelectionListEntryId);
    const TSharedPtr<FJsonValue> JsonLastModifiedAccountIdField = (*Object)->TryGetField(TEXT("last_modified_account_id"));
    if (JsonLastModifiedAccountIdField.IsValid() && !JsonLastModifiedAccountIdField->IsNull())
    {
        LastModifiedAccountId_IsSet = TryGetJsonValue(JsonLastModifiedAccountIdField, LastModifiedAccountId_Optional);
        ParseSuccess &= LastModifiedAccountId_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonLastModifiedTimestampField = (*Object)->TryGetField(TEXT("last_modified_timestamp"));
    if (JsonLastModifiedTimestampField.IsValid() && !JsonLastModifiedTimestampField->IsNull())
    {
        LastModifiedTimestamp_IsSet = TryGetJsonValue(JsonLastModifiedTimestampField, LastModifiedTimestamp_Optional);
        ParseSuccess &= LastModifiedTimestamp_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonMapNameField = (*Object)->TryGetField(TEXT("map_name"));
    if (JsonMapNameField.IsValid() && !JsonMapNameField->IsNull())
    {
        MapName_IsSet = TryGetJsonValue(JsonMapNameField, MapName_Optional);
        ParseSuccess &= MapName_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonModeField = (*Object)->TryGetField(TEXT("mode"));
    if (JsonModeField.IsValid() && !JsonModeField->IsNull())
    {
        Mode_IsSet = TryGetJsonValue(JsonModeField, Mode_Optional);
        ParseSuccess &= Mode_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonLegacyConfigField = (*Object)->TryGetField(TEXT("legacy_config"));
    if (JsonLegacyConfigField.IsValid() && !JsonLegacyConfigField->IsNull())
    {
        LegacyConfig_IsSet = TryGetJsonValue(JsonLegacyConfigField, LegacyConfig_Optional);
        ParseSuccess &= LegacyConfig_IsSet;
    }

    return ParseSuccess;
}

