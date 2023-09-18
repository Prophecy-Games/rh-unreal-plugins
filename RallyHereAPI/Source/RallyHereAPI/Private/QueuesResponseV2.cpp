// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "QueuesResponseV2.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_QueuesResponseV2

void FRHAPI_QueuesResponseV2::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("queues"));
    RallyHereAPI::WriteJsonValue(Writer, Queues);
    Writer->WriteObjectEnd();
}

bool FRHAPI_QueuesResponseV2::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonQueuesField = (*Object)->TryGetField(TEXT("queues"));
    ParseSuccess &= JsonQueuesField.IsValid() && !JsonQueuesField->IsNull() && TryGetJsonValue(JsonQueuesField, Queues);

    return ParseSuccess;
}

