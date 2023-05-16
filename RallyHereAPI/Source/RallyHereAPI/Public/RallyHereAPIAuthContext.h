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

#pragma once

#include "CoreMinimal.h"
#include "RallyHereAPIBaseModel.h"
#include "LoginResult.h"

namespace RallyHereAPI
{

class FAuthAPI;
struct FRequest_Login;
struct FResponse_Login;
struct LoginResult;

DECLARE_MULTICAST_DELEGATE_OneParam(FAuthContextLoginComplete, bool /* bAuthSuccess */);
DECLARE_MULTICAST_DELEGATE(FAuthContextLoginUserChanged);

struct RALLYHEREAPI_API FAuthContext : TSharedFromThis<FAuthContext>
{
public:
    FAuthContext(FAuthAPI& LoginAPI_, FString ClientId, FString ClientSecret);

    FAuthContext(FAuthAPI& LoginAPI_);

    void ProcessLogin(const FResponse_Login &LoginResponse_);
    bool Refresh();
    FAuthContextLoginComplete& OnLoginComplete() { return LoginComplete; }
    FAuthContextLoginUserChanged& OnLoginUserChanged() { return LoginUserChanged; }
    const TOptional<FRHAPI_LoginResult>& GetLoginResult() const;
    bool IsLoggedIn() const;
    FString GetAccessToken() const;
    FString GetRefreshToken() const;

    void SetClientId(const FString& InClientId);
    void SetClientSecret(const FString& InClientSecret);

    bool AddClientCredentials(const FHttpRequestRef& HttpRequest) const;
    bool AddClientCredentials(const FHttpRequestPtr& HttpRequest) const;

    bool AddBearerToken(const FHttpRequestRef& HttpRequest) const;
    bool AddBearerToken(const FHttpRequestPtr& HttpRequest) const;

    static bool IsSameUser(const TOptional<FRHAPI_LoginResult>& A, const TOptional<FRHAPI_LoginResult>& B);

private:
    FAuthAPI* LoginAPI;
    TOptional<FString> ClientId;
    TOptional<FString> ClientSecret;
    TOptional<FString> BasicAuthValue;
    bool bIsRefreshing;
    FAuthContextLoginComplete LoginComplete;
    FAuthContextLoginUserChanged LoginUserChanged;
    TOptional<FRHAPI_LoginResult> LoginResult;

    inline void UpdateBasicAuthValue();
};
}
