// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "TrueskillUpdateRequest.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_TrueskillUpdateRequest

void FRHAPI_TrueskillUpdateRequest::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    if (InstanceId_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("instance_id"));
        RallyHereAPI::WriteJsonValue(Writer, InstanceId_Optional);
    }
    Writer->WriteIdentifierPrefix(TEXT("rank_id"));
    RallyHereAPI::WriteJsonValue(Writer, RankId);
    Writer->WriteIdentifierPrefix(TEXT("match_length_seconds"));
    RallyHereAPI::WriteJsonValue(Writer, MatchLengthSeconds);
    Writer->WriteIdentifierPrefix(TEXT("teams"));
    RallyHereAPI::WriteJsonValue(Writer, Teams);
    Writer->WriteObjectEnd();
}

bool FRHAPI_TrueskillUpdateRequest::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonInstanceIdField = (*Object)->TryGetField(TEXT("instance_id"));
    if (JsonInstanceIdField.IsValid() && !JsonInstanceIdField->IsNull())
    {
        InstanceId_IsSet = TryGetJsonValue(JsonInstanceIdField, InstanceId_Optional);
        ParseSuccess &= InstanceId_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonRankIdField = (*Object)->TryGetField(TEXT("rank_id"));
    ParseSuccess &= JsonRankIdField.IsValid() && !JsonRankIdField->IsNull() && TryGetJsonValue(JsonRankIdField, RankId);
    const TSharedPtr<FJsonValue> JsonMatchLengthSecondsField = (*Object)->TryGetField(TEXT("match_length_seconds"));
    ParseSuccess &= JsonMatchLengthSecondsField.IsValid() && !JsonMatchLengthSecondsField->IsNull() && TryGetJsonValue(JsonMatchLengthSecondsField, MatchLengthSeconds);
    const TSharedPtr<FJsonValue> JsonTeamsField = (*Object)->TryGetField(TEXT("teams"));
    ParseSuccess &= JsonTeamsField.IsValid() && !JsonTeamsField->IsNull() && TryGetJsonValue(JsonTeamsField, Teams);

    return ParseSuccess;
}

