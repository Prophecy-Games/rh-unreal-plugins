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
#include "RallyHereAPIAuthContext.h"
#include "RallyHereAPIHelpers.h"
#include "AppSetting.h"
#include "HTTPValidationError.h"
#include "HzApiErrorModel.h"

namespace RallyHereAPI
{
using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

struct FRequest_GetAppSettingsClient;
struct FResponse_GetAppSettingsClient;
struct FRequest_GetAppSettingsServer;
struct FResponse_GetAppSettingsServer;

DECLARE_DELEGATE_OneParam(FDelegate_GetAppSettingsClient, const FResponse_GetAppSettingsClient&);
DECLARE_DELEGATE_OneParam(FDelegate_GetAppSettingsServer, const FResponse_GetAppSettingsServer&);

class RALLYHEREAPI_API FConfigAPI : public FAPI
{
public:
    FConfigAPI();
    virtual ~FConfigAPI();

    FHttpRequestPtr GetAppSettingsClient(const FRequest_GetAppSettingsClient& Request, const FDelegate_GetAppSettingsClient& Delegate = FDelegate_GetAppSettingsClient());
    FHttpRequestPtr GetAppSettingsServer(const FRequest_GetAppSettingsServer& Request, const FDelegate_GetAppSettingsServer& Delegate = FDelegate_GetAppSettingsServer());

private:
    void OnGetAppSettingsClientResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetAppSettingsClient Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry);
    void OnGetAppSettingsServerResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetAppSettingsServer Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry);

};

/* Get App Settings Client

*/
struct RALLYHEREAPI_API FRequest_GetAppSettingsClient : public FRequest
{
    FRequest_GetAppSettingsClient();
    virtual ~FRequest_GetAppSettingsClient() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FString GetSimplifiedPath() const override;

    /* If you provide the ETag that matches the current ETag for this content, will return a 304 response - indicating that the content has not changed. */
    TOptional<FString> IfNoneMatch;
};

struct RALLYHEREAPI_API FResponse_GetAppSettingsClient : public FResponse
{
    FResponse_GetAppSettingsClient(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_GetAppSettingsClient() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    bool ParseHeaders() override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    TArray<FRHAPI_AppSetting> Content;
    // Headers
    /* Used to identify this version of the content.  Provide with a get request to avoid downloading the same data multiple times. */
    TOptional<FString> ETag;
};

struct RALLYHEREAPI_API Traits_GetAppSettingsClient
{
    typedef FRequest_GetAppSettingsClient Request;
    typedef FResponse_GetAppSettingsClient Response;
    typedef FDelegate_GetAppSettingsClient Delegate;
    typedef FConfigAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate()) { return InAPI.GetAppSettingsClient(InRequest, InDelegate); }
};

/* Get App Settings Server

*/
struct RALLYHEREAPI_API FRequest_GetAppSettingsServer : public FRequest
{
    FRequest_GetAppSettingsServer();
    virtual ~FRequest_GetAppSettingsServer() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FString GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* If you provide the ETag that matches the current ETag for this content, will return a 304 response - indicating that the content has not changed. */
    TOptional<FString> IfNoneMatch;
};

struct RALLYHEREAPI_API FResponse_GetAppSettingsServer : public FResponse
{
    FResponse_GetAppSettingsServer(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_GetAppSettingsServer() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    bool ParseHeaders() override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    TArray<FRHAPI_AppSetting> Content;
    // Headers
    /* Used to identify this version of the content.  Provide with a get request to avoid downloading the same data multiple times. */
    TOptional<FString> ETag;
};

struct RALLYHEREAPI_API Traits_GetAppSettingsServer
{
    typedef FRequest_GetAppSettingsServer Request;
    typedef FResponse_GetAppSettingsServer Response;
    typedef FDelegate_GetAppSettingsServer Delegate;
    typedef FConfigAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate()) { return InAPI.GetAppSettingsServer(InRequest, InDelegate); }
};


}
