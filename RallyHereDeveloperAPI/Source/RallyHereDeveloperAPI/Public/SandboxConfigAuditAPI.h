// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "CoreMinimal.h"
#include "RallyHereDeveloperAPIAuthContext.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevAuditComparisonResponse.h"
#include "DevAuditPatchResponse.h"
#include "DevHTTPValidationError.h"

namespace RallyHereDeveloperAPI
{
using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

struct FRequest_SandboxGetAuditComparisonsForSandbox;
struct FResponse_SandboxGetAuditComparisonsForSandbox;
struct FRequest_SandboxGetAuditForSandbox;
struct FResponse_SandboxGetAuditForSandbox;

DECLARE_DELEGATE_OneParam(FDelegate_SandboxGetAuditComparisonsForSandbox, const FResponse_SandboxGetAuditComparisonsForSandbox&);
DECLARE_DELEGATE_OneParam(FDelegate_SandboxGetAuditForSandbox, const FResponse_SandboxGetAuditForSandbox&);

class RALLYHEREDEVELOPERAPI_API FSandboxConfigAuditAPI : public FAPI
{
public:
    FSandboxConfigAuditAPI();
    virtual ~FSandboxConfigAuditAPI();

    FHttpRequestPtr SandboxGetAuditComparisonsForSandbox(const FRequest_SandboxGetAuditComparisonsForSandbox& Request, const FDelegate_SandboxGetAuditComparisonsForSandbox& Delegate = FDelegate_SandboxGetAuditComparisonsForSandbox(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr SandboxGetAuditForSandbox(const FRequest_SandboxGetAuditForSandbox& Request, const FDelegate_SandboxGetAuditForSandbox& Delegate = FDelegate_SandboxGetAuditForSandbox(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);

private:
    void OnSandboxGetAuditComparisonsForSandboxResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_SandboxGetAuditComparisonsForSandbox Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnSandboxGetAuditForSandboxResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_SandboxGetAuditForSandbox Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);

};

/* Get Audit Comparisons For Sandbox

*/
struct RALLYHEREDEVELOPERAPI_API FRequest_SandboxGetAuditComparisonsForSandbox : public FRequest
{
    FRequest_SandboxGetAuditComparisonsForSandbox();
    virtual ~FRequest_SandboxGetAuditComparisonsForSandbox() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* Sandbox ID */
    FGuid SandboxId;
    TOptional<FString> Type;
    TOptional<FString> Start;
    TOptional<FString> End;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_SandboxGetAuditComparisonsForSandbox : public FResponse
{
    FResponse_SandboxGetAuditComparisonsForSandbox(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_SandboxGetAuditComparisonsForSandbox() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    TArray<FRHAPI_DevAuditComparisonResponse> Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_SandboxGetAuditComparisonsForSandbox
{
    typedef FRequest_SandboxGetAuditComparisonsForSandbox Request;
    typedef FResponse_SandboxGetAuditComparisonsForSandbox Response;
    typedef FDelegate_SandboxGetAuditComparisonsForSandbox Delegate;
    typedef FSandboxConfigAuditAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.SandboxGetAuditComparisonsForSandbox(InRequest, InDelegate, Priority); }
};

/* Get Audit For Sandbox

*/
struct RALLYHEREDEVELOPERAPI_API FRequest_SandboxGetAuditForSandbox : public FRequest
{
    FRequest_SandboxGetAuditForSandbox();
    virtual ~FRequest_SandboxGetAuditForSandbox() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* Sandbox ID */
    FGuid SandboxId;
    TOptional<FString> Type;
    TOptional<FString> Start;
    TOptional<FString> End;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_SandboxGetAuditForSandbox : public FResponse
{
    FResponse_SandboxGetAuditForSandbox(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_SandboxGetAuditForSandbox() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    TArray<FRHAPI_DevAuditPatchResponse> Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_SandboxGetAuditForSandbox
{
    typedef FRequest_SandboxGetAuditForSandbox Request;
    typedef FResponse_SandboxGetAuditForSandbox Response;
    typedef FDelegate_SandboxGetAuditForSandbox Delegate;
    typedef FSandboxConfigAuditAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.SandboxGetAuditForSandbox(InRequest, InDelegate, Priority); }
};


}
