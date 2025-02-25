// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "InventoryContextResponse.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_InventoryContextResponse

void FRHAPI_InventoryContextResponse::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    if (Inventory_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("inventory"));
        RallyHereAPI::WriteJsonValue(Writer, Inventory_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_InventoryContextResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonInventoryField = (*Object)->TryGetField(TEXT("inventory"));
    if (JsonInventoryField.IsValid() && !JsonInventoryField->IsNull())
    {
        Inventory_IsSet = TryGetJsonValue(JsonInventoryField, Inventory_Optional);
        ParseSuccess &= Inventory_IsSet;
    }

    return ParseSuccess;
}

