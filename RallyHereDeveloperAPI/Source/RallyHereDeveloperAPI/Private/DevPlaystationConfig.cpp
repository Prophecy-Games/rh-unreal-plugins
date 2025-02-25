// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0


#include "DevPlaystationConfig.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_DevPlaystationConfig

void FRHAPI_DevPlaystationConfig::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    if (EnableLogin_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("enable_login"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, EnableLogin_Optional);
    }
    if (Environment_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("environment"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, EnumToString(Environment_Optional));
    }
    if (Ps4UseEntitlementsV1Api_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("ps4_use_entitlements_v1_api"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, Ps4UseEntitlementsV1Api_Optional);
    }
    if (Ps5UseEntitlementsV1Api_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("ps5_use_entitlements_v1_api"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, Ps5UseEntitlementsV1Api_Optional);
    }
    if (Ps4UseAuthV1Api_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("ps4_use_auth_v1_api"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, Ps4UseAuthV1Api_Optional);
    }
    if (Ps5UseAuthV1Api_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("ps5_use_auth_v1_api"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, Ps5UseAuthV1Api_Optional);
    }
    Writer->WriteIdentifierPrefix(TEXT("psn_web_client_id"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, PsnWebClientId);
    Writer->WriteIdentifierPrefix(TEXT("ps4_client_id"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, Ps4ClientId);
    Writer->WriteIdentifierPrefix(TEXT("ps5_client_id"));
    RallyHereDeveloperAPI::WriteJsonValue(Writer, Ps5ClientId);
    if (Ps4V1PortalTokenDetailsEnable_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("ps4_v1_portal_token_details_enable"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, Ps4V1PortalTokenDetailsEnable_Optional);
    }
    if (Ps4V3PortalTokenDetailsEnable_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("ps4_v3_portal_token_details_enable"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, Ps4V3PortalTokenDetailsEnable_Optional);
    }
    if (Ps5V3PortalTokenDetailsEnable_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("ps5_v3_portal_token_details_enable"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, Ps5V3PortalTokenDetailsEnable_Optional);
    }
    if (EuServiceLabels_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("eu_service_labels"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, EuServiceLabels_Optional);
    }
    if (NaServiceLabels_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("na_service_labels"));
        RallyHereDeveloperAPI::WriteJsonValue(Writer, NaServiceLabels_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_DevPlaystationConfig::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    const TSharedPtr<FJsonValue> JsonEnableLoginField = (*Object)->TryGetField(TEXT("enable_login"));
    if (JsonEnableLoginField.IsValid() && !JsonEnableLoginField->IsNull())
    {
        EnableLogin_IsSet = TryGetJsonValue(JsonEnableLoginField, EnableLogin_Optional);
        ParseSuccess &= EnableLogin_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonEnvironmentField = (*Object)->TryGetField(TEXT("environment"));
    if (JsonEnvironmentField.IsValid() && !JsonEnvironmentField->IsNull())
    {
        Environment_IsSet = TryGetJsonValue(JsonEnvironmentField, Environment_Optional);
        ParseSuccess &= Environment_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonPs4UseEntitlementsV1ApiField = (*Object)->TryGetField(TEXT("ps4_use_entitlements_v1_api"));
    if (JsonPs4UseEntitlementsV1ApiField.IsValid() && !JsonPs4UseEntitlementsV1ApiField->IsNull())
    {
        Ps4UseEntitlementsV1Api_IsSet = TryGetJsonValue(JsonPs4UseEntitlementsV1ApiField, Ps4UseEntitlementsV1Api_Optional);
        ParseSuccess &= Ps4UseEntitlementsV1Api_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonPs5UseEntitlementsV1ApiField = (*Object)->TryGetField(TEXT("ps5_use_entitlements_v1_api"));
    if (JsonPs5UseEntitlementsV1ApiField.IsValid() && !JsonPs5UseEntitlementsV1ApiField->IsNull())
    {
        Ps5UseEntitlementsV1Api_IsSet = TryGetJsonValue(JsonPs5UseEntitlementsV1ApiField, Ps5UseEntitlementsV1Api_Optional);
        ParseSuccess &= Ps5UseEntitlementsV1Api_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonPs4UseAuthV1ApiField = (*Object)->TryGetField(TEXT("ps4_use_auth_v1_api"));
    if (JsonPs4UseAuthV1ApiField.IsValid() && !JsonPs4UseAuthV1ApiField->IsNull())
    {
        Ps4UseAuthV1Api_IsSet = TryGetJsonValue(JsonPs4UseAuthV1ApiField, Ps4UseAuthV1Api_Optional);
        ParseSuccess &= Ps4UseAuthV1Api_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonPs5UseAuthV1ApiField = (*Object)->TryGetField(TEXT("ps5_use_auth_v1_api"));
    if (JsonPs5UseAuthV1ApiField.IsValid() && !JsonPs5UseAuthV1ApiField->IsNull())
    {
        Ps5UseAuthV1Api_IsSet = TryGetJsonValue(JsonPs5UseAuthV1ApiField, Ps5UseAuthV1Api_Optional);
        ParseSuccess &= Ps5UseAuthV1Api_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonPsnWebClientIdField = (*Object)->TryGetField(TEXT("psn_web_client_id"));
    ParseSuccess &= JsonPsnWebClientIdField.IsValid() && !JsonPsnWebClientIdField->IsNull() && TryGetJsonValue(JsonPsnWebClientIdField, PsnWebClientId);
    const TSharedPtr<FJsonValue> JsonPs4ClientIdField = (*Object)->TryGetField(TEXT("ps4_client_id"));
    ParseSuccess &= JsonPs4ClientIdField.IsValid() && !JsonPs4ClientIdField->IsNull() && TryGetJsonValue(JsonPs4ClientIdField, Ps4ClientId);
    const TSharedPtr<FJsonValue> JsonPs5ClientIdField = (*Object)->TryGetField(TEXT("ps5_client_id"));
    ParseSuccess &= JsonPs5ClientIdField.IsValid() && !JsonPs5ClientIdField->IsNull() && TryGetJsonValue(JsonPs5ClientIdField, Ps5ClientId);
    const TSharedPtr<FJsonValue> JsonPs4V1PortalTokenDetailsEnableField = (*Object)->TryGetField(TEXT("ps4_v1_portal_token_details_enable"));
    if (JsonPs4V1PortalTokenDetailsEnableField.IsValid() && !JsonPs4V1PortalTokenDetailsEnableField->IsNull())
    {
        Ps4V1PortalTokenDetailsEnable_IsSet = TryGetJsonValue(JsonPs4V1PortalTokenDetailsEnableField, Ps4V1PortalTokenDetailsEnable_Optional);
        ParseSuccess &= Ps4V1PortalTokenDetailsEnable_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonPs4V3PortalTokenDetailsEnableField = (*Object)->TryGetField(TEXT("ps4_v3_portal_token_details_enable"));
    if (JsonPs4V3PortalTokenDetailsEnableField.IsValid() && !JsonPs4V3PortalTokenDetailsEnableField->IsNull())
    {
        Ps4V3PortalTokenDetailsEnable_IsSet = TryGetJsonValue(JsonPs4V3PortalTokenDetailsEnableField, Ps4V3PortalTokenDetailsEnable_Optional);
        ParseSuccess &= Ps4V3PortalTokenDetailsEnable_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonPs5V3PortalTokenDetailsEnableField = (*Object)->TryGetField(TEXT("ps5_v3_portal_token_details_enable"));
    if (JsonPs5V3PortalTokenDetailsEnableField.IsValid() && !JsonPs5V3PortalTokenDetailsEnableField->IsNull())
    {
        Ps5V3PortalTokenDetailsEnable_IsSet = TryGetJsonValue(JsonPs5V3PortalTokenDetailsEnableField, Ps5V3PortalTokenDetailsEnable_Optional);
        ParseSuccess &= Ps5V3PortalTokenDetailsEnable_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonEuServiceLabelsField = (*Object)->TryGetField(TEXT("eu_service_labels"));
    if (JsonEuServiceLabelsField.IsValid() && !JsonEuServiceLabelsField->IsNull())
    {
        EuServiceLabels_IsSet = TryGetJsonValue(JsonEuServiceLabelsField, EuServiceLabels_Optional);
        ParseSuccess &= EuServiceLabels_IsSet;
    }
    const TSharedPtr<FJsonValue> JsonNaServiceLabelsField = (*Object)->TryGetField(TEXT("na_service_labels"));
    if (JsonNaServiceLabelsField.IsValid() && !JsonNaServiceLabelsField->IsNull())
    {
        NaServiceLabels_IsSet = TryGetJsonValue(JsonNaServiceLabelsField, NaServiceLabels_Optional);
        ParseSuccess &= NaServiceLabels_IsSet;
    }

    return ParseSuccess;
}

