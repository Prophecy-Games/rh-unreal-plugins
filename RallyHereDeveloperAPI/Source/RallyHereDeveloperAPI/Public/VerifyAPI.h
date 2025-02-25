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
#include "DevHTTPValidationError.h"
#include "DevPermissionsListResponse.h"
#include "Misc/TVariant.h"

namespace RallyHereDeveloperAPI
{
using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

struct FRequest_Verify;
struct FResponse_Verify;

DECLARE_DELEGATE_OneParam(FDelegate_Verify, const FResponse_Verify&);

class RALLYHEREDEVELOPERAPI_API FVerifyAPI : public FAPI
{
public:
    FVerifyAPI();
    virtual ~FVerifyAPI();

    FHttpRequestPtr Verify(const FRequest_Verify& Request, const FDelegate_Verify& Delegate = FDelegate_Verify(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);

private:
    void OnVerifyResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_Verify Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);

};

/* Verify

*/
struct RALLYHEREDEVELOPERAPI_API FRequest_Verify : public FRequest
{
    FRequest_Verify();
    virtual ~FRequest_Verify() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* Organization ID or short name */
    TVariant<FGuid, FString> OrgIdentifier;
    /* Product ID or short name */
    TVariant<FGuid, FString> ProductIdentifier;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_Verify : public FResponse
{
    FResponse_Verify(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_Verify() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevPermissionsListResponse Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_Verify
{
    typedef FRequest_Verify Request;
    typedef FResponse_Verify Response;
    typedef FDelegate_Verify Delegate;
    typedef FVerifyAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.Verify(InRequest, InDelegate, Priority); }
};


}
