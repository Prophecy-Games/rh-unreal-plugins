// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevAllInstanceRequestTemplatesResponse.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_DevAllInstanceRequestTemplatesResponse

void FRHAPI_DevAllInstanceRequestTemplatesResponse::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    Writer->WriteIdentifierPrefix(TEXT("cursor"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, Cursor);
    if (InstanceRequestTemplates_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("instance_request_templates"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, InstanceRequestTemplates_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_DevAllInstanceRequestTemplatesResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonCursorField = (*Object)->TryGetField(TEXT("cursor"));
    ParseSuccess &= JsonCursorField.IsValid() && !JsonCursorField->IsNull() && TryGetJsonValue(JsonCursorField, Cursor);
    const TSharedPtr<FJsonValue> JsonInstanceRequestTemplatesField = (*Object)->TryGetField(TEXT("instance_request_templates"));
    if (JsonInstanceRequestTemplatesField.IsValid() && !JsonInstanceRequestTemplatesField->IsNull())
    {
        InstanceRequestTemplates_IsSet = TryGetJsonValue(JsonInstanceRequestTemplatesField, InstanceRequestTemplates_Optional);
        ParseSuccess &= InstanceRequestTemplates_IsSet;
    }

    return ParseSuccess;
}

