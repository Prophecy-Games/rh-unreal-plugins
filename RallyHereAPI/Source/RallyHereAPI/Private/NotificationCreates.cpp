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


#include "NotificationCreates.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_NotificationCreates

void FRHAPI_NotificationCreates::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    if (Notifications_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("notifications"));
        RallyHereAPI::WriteJsonValue(Writer, Notifications_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_NotificationCreates::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    if ((*Object)->HasField(TEXT("notifications")))
    {
        Notifications_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("notifications"), Notifications_Optional);
        ParseSuccess &= Notifications_IsSet;
    }

    return ParseSuccess;
}

