// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


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

    const TSharedPtr<FJsonValue> JsonSessionIdField = (*Object)->TryGetField(TEXT("session_id"));
    ParseSuccess &= JsonSessionIdField.IsValid() && !JsonSessionIdField->IsNull() && TryGetJsonValue(JsonSessionIdField, SessionId);
    const TSharedPtr<FJsonValue> JsonSessionPlatformField = (*Object)->TryGetField(TEXT("session_platform"));
    if (JsonSessionPlatformField.IsValid() && !JsonSessionPlatformField->IsNull())
    {
        SessionPlatform_IsSet = TryGetJsonValue(JsonSessionPlatformField, SessionPlatform_Optional);
        ParseSuccess &= SessionPlatform_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonOrderIdField = (*Object)->TryGetField(TEXT("order_id"));
    if (JsonOrderIdField.IsValid() && !JsonOrderIdField->IsNull())
    {
        OrderId_IsSet = TryGetJsonValue(JsonOrderIdField, OrderId_Optional);
        ParseSuccess &= OrderId_IsSet;
    }

    return ParseSuccess;
}

