// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "BlockedPlayer.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_BlockedPlayer

void FRHAPI_BlockedPlayer::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("blocked_player_uuid"));
    RallyHereAPI::WriteJsonValue(Writer, BlockedPlayerUuid);
    Writer->WriteIdentifierPrefix(TEXT("last_modified_on"));
    RallyHereAPI::WriteJsonValue(Writer, LastModifiedOn);
    Writer->WriteObjectEnd();
}

bool FRHAPI_BlockedPlayer::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonBlockedPlayerUuidField = (*Object)->TryGetField(TEXT("blocked_player_uuid"));
    ParseSuccess &= JsonBlockedPlayerUuidField.IsValid() && !JsonBlockedPlayerUuidField->IsNull() && TryGetJsonValue(JsonBlockedPlayerUuidField, BlockedPlayerUuid);
    const TSharedPtr<FJsonValue> JsonLastModifiedOnField = (*Object)->TryGetField(TEXT("last_modified_on"));
    ParseSuccess &= JsonLastModifiedOnField.IsValid() && !JsonLastModifiedOnField->IsNull() && TryGetJsonValue(JsonLastModifiedOnField, LastModifiedOn);

    return ParseSuccess;
}

