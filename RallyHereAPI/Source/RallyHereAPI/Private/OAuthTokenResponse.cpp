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


#include "OAuthTokenResponse.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for FRHAPI_OAuthTokenResponse

void FRHAPI_OAuthTokenResponse::WriteJson(TSharedRef<TJsonWriter<>>& Writer) const
{
    Writer->WriteObjectStart();
    if (AccessToken_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("access_token"));
        RallyHereAPI::WriteJsonValue(Writer, AccessToken_Optional);
    }
    if (RefreshToken_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("refresh_token"));
        RallyHereAPI::WriteJsonValue(Writer, RefreshToken_Optional);
    }
    if (NeedsEula_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("needs_eula"));
        RallyHereAPI::WriteJsonValue(Writer, NeedsEula_Optional);
    }
    if (NeedsTos_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("needs_tos"));
        RallyHereAPI::WriteJsonValue(Writer, NeedsTos_Optional);
    }
    if (NeedsPrivacyPolicy_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("needs_privacy_policy"));
        RallyHereAPI::WriteJsonValue(Writer, NeedsPrivacyPolicy_Optional);
    }
    if (RegeneratedCode_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("regenerated_code"));
        RallyHereAPI::WriteJsonValue(Writer, RegeneratedCode_Optional);
    }
    if (ErrorMessage_IsSet)
    {
        Writer->WriteIdentifierPrefix(TEXT("error_message"));
        RallyHereAPI::WriteJsonValue(Writer, ErrorMessage_Optional);
    }
    Writer->WriteObjectEnd();
}

bool FRHAPI_OAuthTokenResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    const TSharedPtr<FJsonObject>* Object;
    if (!JsonValue->TryGetObject(Object))
        return false;

    bool ParseSuccess = true;

    if ((*Object)->HasField(TEXT("access_token")))
    {
        AccessToken_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("access_token"), AccessToken_Optional);
        ParseSuccess &= AccessToken_IsSet;
    }
    if ((*Object)->HasField(TEXT("refresh_token")))
    {
        RefreshToken_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("refresh_token"), RefreshToken_Optional);
        ParseSuccess &= RefreshToken_IsSet;
    }
    if ((*Object)->HasField(TEXT("needs_eula")))
    {
        NeedsEula_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("needs_eula"), NeedsEula_Optional);
        ParseSuccess &= NeedsEula_IsSet;
    }
    if ((*Object)->HasField(TEXT("needs_tos")))
    {
        NeedsTos_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("needs_tos"), NeedsTos_Optional);
        ParseSuccess &= NeedsTos_IsSet;
    }
    if ((*Object)->HasField(TEXT("needs_privacy_policy")))
    {
        NeedsPrivacyPolicy_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("needs_privacy_policy"), NeedsPrivacyPolicy_Optional);
        ParseSuccess &= NeedsPrivacyPolicy_IsSet;
    }
    if ((*Object)->HasField(TEXT("regenerated_code")))
    {
        RegeneratedCode_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("regenerated_code"), RegeneratedCode_Optional);
        ParseSuccess &= RegeneratedCode_IsSet;
    }
    if ((*Object)->HasField(TEXT("error_message")))
    {
        ErrorMessage_IsSet = RallyHereAPI::TryGetJsonValue(*Object, TEXT("error_message"), ErrorMessage_Optional);
        ParseSuccess &= ErrorMessage_IsSet;
    }

    return ParseSuccess;
}

