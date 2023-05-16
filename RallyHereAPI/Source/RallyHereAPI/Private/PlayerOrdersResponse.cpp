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


#include "PlayerOrdersResponse.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_PlayerOrdersResponse

void FRHAPI_PlayerOrdersResponse::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    if (Data_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("data"));
        RallyHereAPI::WriteJsonValue(Writer, Data_Optional);
    }
    Writer->WriteIdentifierPrefix(TEXT("page"));
    RallyHereAPI::WriteJsonValue(Writer, Page);
    Writer->WriteObjectEnd();
}

bool FRHAPI_PlayerOrdersResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    if ((*Object)->HasField(TEXT("data")))
    {
        Data_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("data"), Data_Optional);
        ParseSuccess &= Data_IsSet;
    }
    ParseSuccess &= RallyHereAPI::TryGetJsonValue(*Object, TEXT("page"), Page);

    return ParseSuccess;
}

