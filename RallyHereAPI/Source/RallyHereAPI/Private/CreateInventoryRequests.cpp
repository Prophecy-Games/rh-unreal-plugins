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


#include "CreateInventoryRequests.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_CreateInventoryRequests

void FRHAPI_CreateInventoryRequests::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    if (Source_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("source"));
        RallyHereAPI::WriteJsonValue(Writer, EnumToString(Source_Optional));
    }
    if (ClientOrderRefId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("client_order_ref_id"));
        RallyHereAPI::WriteJsonValue(Writer, ClientOrderRefId_Optional);
    }
    Writer->WriteIdentifierPrefix(TEXT("inventory"));
    RallyHereAPI::WriteJsonValue(Writer, Inventory);
    Writer->WriteObjectEnd();
}

bool FRHAPI_CreateInventoryRequests::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    if ((*Object)->HasField(TEXT("source")))
    {
        Source_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("source"), Source_Optional);
        ParseSuccess &= Source_IsSet;
    }
    if ((*Object)->HasField(TEXT("client_order_ref_id")))
    {
        ClientOrderRefId_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("client_order_ref_id"), ClientOrderRefId_Optional);
        ParseSuccess &= ClientOrderRefId_IsSet;
    }
    ParseSuccess &= RallyHereAPI::TryGetJsonValue(*Object, TEXT("inventory"), Inventory);

    return ParseSuccess;
}

