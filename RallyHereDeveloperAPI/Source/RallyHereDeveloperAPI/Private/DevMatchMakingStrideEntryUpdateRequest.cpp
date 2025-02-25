// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevMatchMakingStrideEntryUpdateRequest.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_DevMatchMakingStrideEntryUpdateRequest

void FRHAPI_DevMatchMakingStrideEntryUpdateRequest::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    if (Step_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("step"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, Step_Optional);
    }
    if (Overlap_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("overlap"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, Overlap_Optional);
    }
    if (MinPopulation_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("min_population"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, MinPopulation_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_DevMatchMakingStrideEntryUpdateRequest::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonStepField = (*Object)->TryGetField(TEXT("step"));
    if (JsonStepField.IsValid() && !JsonStepField->IsNull())
    {
        Step_IsSet = TryGetJsonValue(JsonStepField, Step_Optional);
        ParseSuccess &= Step_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonOverlapField = (*Object)->TryGetField(TEXT("overlap"));
    if (JsonOverlapField.IsValid() && !JsonOverlapField->IsNull())
    {
        Overlap_IsSet = TryGetJsonValue(JsonOverlapField, Overlap_Optional);
        ParseSuccess &= Overlap_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonMinPopulationField = (*Object)->TryGetField(TEXT("min_population"));
    if (JsonMinPopulationField.IsValid() && !JsonMinPopulationField->IsNull())
    {
        MinPopulation_IsSet = TryGetJsonValue(JsonMinPopulationField, MinPopulation_Optional);
        ParseSuccess &= MinPopulation_IsSet;
    }

    return ParseSuccess;
}

