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
#include "DevSandbox.h"
#include "DevSandboxRequest.h"
#include "DevSandboxUpdateRequest.h"
#include "Misc/TVariant.h"

namespace RallyHereDeveloperAPI
{
using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

struct FRequest_CreateSandbox;
struct FResponse_CreateSandbox;
struct FRequest_DeleteSandbox;
struct FResponse_DeleteSandbox;
struct FRequest_GetOrgProductSandbox;
struct FResponse_GetOrgProductSandbox;
struct FRequest_GetOrgProductSandboxes;
struct FResponse_GetOrgProductSandboxes;
struct FRequest_UpdateSandbox;
struct FResponse_UpdateSandbox;

DECLARE_DELEGATE_OneParam(FDelegate_CreateSandbox, const FResponse_CreateSandbox&);
DECLARE_DELEGATE_OneParam(FDelegate_DeleteSandbox, const FResponse_DeleteSandbox&);
DECLARE_DELEGATE_OneParam(FDelegate_GetOrgProductSandbox, const FResponse_GetOrgProductSandbox&);
DECLARE_DELEGATE_OneParam(FDelegate_GetOrgProductSandboxes, const FResponse_GetOrgProductSandboxes&);
DECLARE_DELEGATE_OneParam(FDelegate_UpdateSandbox, const FResponse_UpdateSandbox&);

class RALLYHEREDEVELOPERAPI_API FSandboxAPI : public FAPI
{
public:
    FSandboxAPI();
    virtual ~FSandboxAPI();

    FHttpRequestPtr CreateSandbox(const FRequest_CreateSandbox& Request, const FDelegate_CreateSandbox& Delegate = FDelegate_CreateSandbox(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr DeleteSandbox(const FRequest_DeleteSandbox& Request, const FDelegate_DeleteSandbox& Delegate = FDelegate_DeleteSandbox(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr GetOrgProductSandbox(const FRequest_GetOrgProductSandbox& Request, const FDelegate_GetOrgProductSandbox& Delegate = FDelegate_GetOrgProductSandbox(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr GetOrgProductSandboxes(const FRequest_GetOrgProductSandboxes& Request, const FDelegate_GetOrgProductSandboxes& Delegate = FDelegate_GetOrgProductSandboxes(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr UpdateSandbox(const FRequest_UpdateSandbox& Request, const FDelegate_UpdateSandbox& Delegate = FDelegate_UpdateSandbox(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);

private:
    void OnCreateSandboxResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_CreateSandbox Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnDeleteSandboxResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_DeleteSandbox Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnGetOrgProductSandboxResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetOrgProductSandbox Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnGetOrgProductSandboxesResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetOrgProductSandboxes Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnUpdateSandboxResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_UpdateSandbox Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);

};

/* Create Sandbox
 *
 * Create sandbox, requires product:config:edit permission
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_CreateSandbox : public FRequest
{
    FRequest_CreateSandbox();
    virtual ~FRequest_CreateSandbox() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* Organization ID or short name */
    TVariant<FGuid, FString> OrgIdentifier;
    /* Product ID or short name */
    TVariant<FGuid, FString> ProductIdentifier;
    FRHAPI_DevSandboxRequest SandboxRequest;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_CreateSandbox : public FResponse
{
    FResponse_CreateSandbox(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_CreateSandbox() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevSandbox Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_CreateSandbox
{
    typedef FRequest_CreateSandbox Request;
    typedef FResponse_CreateSandbox Response;
    typedef FDelegate_CreateSandbox Delegate;
    typedef FSandboxAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.CreateSandbox(InRequest, InDelegate, Priority); }
};

/* Delete Sandbox
 *
 * Delete sandbox, requires sandbox:config:edit permission
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_DeleteSandbox : public FRequest
{
    FRequest_DeleteSandbox();
    virtual ~FRequest_DeleteSandbox() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* Organization ID or short name */
    TVariant<FGuid, FString> OrgIdentifier;
    /* Product ID or short name */
    TVariant<FGuid, FString> ProductIdentifier;
    /* Sandbox ID or short name */
    TVariant<FGuid, FString> SandboxIdentifier;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_DeleteSandbox : public FResponse
{
    FResponse_DeleteSandbox(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_DeleteSandbox() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevJsonValue Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_DeleteSandbox
{
    typedef FRequest_DeleteSandbox Request;
    typedef FResponse_DeleteSandbox Response;
    typedef FDelegate_DeleteSandbox Delegate;
    typedef FSandboxAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.DeleteSandbox(InRequest, InDelegate, Priority); }
};

/* Get Org Product Sandbox
 *
 * Get sandbox details, requires sandbox:config:view | sandbox:config:edit permission
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_GetOrgProductSandbox : public FRequest
{
    FRequest_GetOrgProductSandbox();
    virtual ~FRequest_GetOrgProductSandbox() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* Organization ID or short name */
    TVariant<FGuid, FString> OrgIdentifier;
    /* Product ID or short name */
    TVariant<FGuid, FString> ProductIdentifier;
    /* Sandbox ID or short name */
    TVariant<FGuid, FString> SandboxIdentifier;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_GetOrgProductSandbox : public FResponse
{
    FResponse_GetOrgProductSandbox(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_GetOrgProductSandbox() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevSandbox Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_GetOrgProductSandbox
{
    typedef FRequest_GetOrgProductSandbox Request;
    typedef FResponse_GetOrgProductSandbox Response;
    typedef FDelegate_GetOrgProductSandbox Delegate;
    typedef FSandboxAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.GetOrgProductSandbox(InRequest, InDelegate, Priority); }
};

/* Get Org Product Sandboxes
 *
 * Get all sandboxes for a product, requires product:config:view | product:config:edit permission
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_GetOrgProductSandboxes : public FRequest
{
    FRequest_GetOrgProductSandboxes();
    virtual ~FRequest_GetOrgProductSandboxes() = default;
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

struct RALLYHEREDEVELOPERAPI_API FResponse_GetOrgProductSandboxes : public FResponse
{
    FResponse_GetOrgProductSandboxes(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_GetOrgProductSandboxes() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    TArray<FRHAPI_DevSandbox> Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_GetOrgProductSandboxes
{
    typedef FRequest_GetOrgProductSandboxes Request;
    typedef FResponse_GetOrgProductSandboxes Response;
    typedef FDelegate_GetOrgProductSandboxes Delegate;
    typedef FSandboxAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.GetOrgProductSandboxes(InRequest, InDelegate, Priority); }
};

/* Update Sandbox
 *
 * Update sandbox details, requires sandbox:config:edit permission
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_UpdateSandbox : public FRequest
{
    FRequest_UpdateSandbox();
    virtual ~FRequest_UpdateSandbox() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* Organization ID or short name */
    TVariant<FGuid, FString> OrgIdentifier;
    /* Product ID or short name */
    TVariant<FGuid, FString> ProductIdentifier;
    /* Sandbox ID or short name */
    TVariant<FGuid, FString> SandboxIdentifier;
    FRHAPI_DevSandboxUpdateRequest SandboxUpdateRequest;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_UpdateSandbox : public FResponse
{
    FResponse_UpdateSandbox(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_UpdateSandbox() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevSandbox Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_UpdateSandbox
{
    typedef FRequest_UpdateSandbox Request;
    typedef FResponse_UpdateSandbox Response;
    typedef FDelegate_UpdateSandbox Delegate;
    typedef FSandboxAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.UpdateSandbox(InRequest, InDelegate, Priority); }
};


}
