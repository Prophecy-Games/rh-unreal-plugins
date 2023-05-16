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


#include "InventorySessionCreateResponse.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_InventorySessionCreateResponse

void FRHAPI_InventorySessionCreateResponse::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("session_id"));
    RallyHereAPI::WriteJsonValue(Writer, SessionId);
    if (SessionPlatform_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("session_platform"));
        RallyHereAPI::WriteJsonValue(Writer, EnumToString(SessionPlatform_Optional));
    }
    if (OrderId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("order_id"));
        RallyHereAPI::WriteJsonValue(Writer, OrderId_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_InventorySessionCreateResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    ParseSuccess &= RallyHereAPI::TryGetJsonValue(*Object, TEXT("session_id"), SessionId);
    if ((*Object)->HasField(TEXT("session_platform")))
    {
        SessionPlatform_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("session_platform"), SessionPlatform_Optional);
        ParseSuccess &= SessionPlatform_IsSet;
    }
    if ((*Object)->HasField(TEXT("order_id")))
    {
        OrderId_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("order_id"), OrderId_Optional);
        ParseSuccess &= OrderId_IsSet;
    }

    return ParseSuccess;
}

