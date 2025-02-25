// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevRoleLoginLootBase.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_DevRoleLoginLootBase

void FRHAPI_DevRoleLoginLootBase::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    if (LootId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("loot_id"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, LootId_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_DevRoleLoginLootBase::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonLootIdField = (*Object)->TryGetField(TEXT("loot_id"));
    if (JsonLootIdField.IsValid() && !JsonLootIdField->IsNull())
    {
        LootId_IsSet = TryGetJsonValue(JsonLootIdField, LootId_Optional);
        ParseSuccess &= LootId_IsSet;
    }

    return ParseSuccess;
}

