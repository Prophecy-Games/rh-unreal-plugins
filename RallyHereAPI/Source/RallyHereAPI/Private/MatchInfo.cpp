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


#include "MatchInfo.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_MatchInfo

void FRHAPI_MatchInfo::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("match_id"));
    RallyHereAPI::WriteJsonValue(Writer, MatchId);
    Writer->WriteIdentifierPrefix(TEXT("created"));
    RallyHereAPI::WriteJsonValue(Writer, Created);
    if (CustomData_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("custom_data"));
        RallyHereAPI::WriteJsonValue(Writer, CustomData_Optional);
    }
    if (TicketIds_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("ticket_ids"));
        RallyHereAPI::WriteJsonValue(Writer, TicketIds_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_MatchInfo::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    ParseSuccess &= RallyHereAPI::TryGetJsonValue(*Object, TEXT("match_id"), MatchId);
    ParseSuccess &= RallyHereAPI::TryGetJsonValue(*Object, TEXT("created"), Created);
    if ((*Object)->HasField(TEXT("custom_data")))
    {
        CustomData_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("custom_data"), CustomData_Optional);
        ParseSuccess &= CustomData_IsSet;
    }
    if ((*Object)->HasField(TEXT("ticket_ids")))
    {
        TicketIds_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("ticket_ids"), TicketIds_Optional);
        ParseSuccess &= TicketIds_IsSet;
    }

    return ParseSuccess;
}

