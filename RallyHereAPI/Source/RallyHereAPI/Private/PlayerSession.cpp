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


#include "PlayerSession.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_PlayerSession

void FRHAPI_PlayerSession::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("type"));
    RallyHereAPI::WriteJsonValue(Writer, Type);
    if (SessionIds_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("session_ids"));
        RallyHereAPI::WriteJsonValue(Writer, SessionIds_Optional);
    }
    if (PendingInvites_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("pending_invites"));
        RallyHereAPI::WriteJsonValue(Writer, PendingInvites_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_PlayerSession::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    ParseSuccess &= RallyHereAPI::TryGetJsonValue(*Object, TEXT("type"), Type);
    if ((*Object)->HasField(TEXT("session_ids")))
    {
        SessionIds_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("session_ids"), SessionIds_Optional);
        ParseSuccess &= SessionIds_IsSet;
    }
    if ((*Object)->HasField(TEXT("pending_invites")))
    {
        PendingInvites_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("pending_invites"), PendingInvites_Optional);
        ParseSuccess &= PendingInvites_IsSet;
    }

    return ParseSuccess;
}

