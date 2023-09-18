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
#include "DevOrganization.h"
#include "DevOrganizationRequest.h"
#include "DevOrganizationUpdateRequest.h"
#include "Misc/TVariant.h"

namespace RallyHereDeveloperAPI
{
using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

struct FRequest_CreateOrg;
struct FResponse_CreateOrg;
struct FRequest_DeleteOrg;
struct FResponse_DeleteOrg;
struct FRequest_GetAllOrgs;
struct FResponse_GetAllOrgs;
struct FRequest_GetOrg;
struct FResponse_GetOrg;
struct FRequest_UpdateOrg;
struct FResponse_UpdateOrg;

DECLARE_DELEGATE_OneParam(FDelegate_CreateOrg, const FResponse_CreateOrg&);
DECLARE_DELEGATE_OneParam(FDelegate_DeleteOrg, const FResponse_DeleteOrg&);
DECLARE_DELEGATE_OneParam(FDelegate_GetAllOrgs, const FResponse_GetAllOrgs&);
DECLARE_DELEGATE_OneParam(FDelegate_GetOrg, const FResponse_GetOrg&);
DECLARE_DELEGATE_OneParam(FDelegate_UpdateOrg, const FResponse_UpdateOrg&);

class RALLYHEREDEVELOPERAPI_API FOrganizationAPI : public FAPI
{
public:
    FOrganizationAPI();
    virtual ~FOrganizationAPI();

    FHttpRequestPtr CreateOrg(const FRequest_CreateOrg& Request, const FDelegate_CreateOrg& Delegate = FDelegate_CreateOrg(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr DeleteOrg(const FRequest_DeleteOrg& Request, const FDelegate_DeleteOrg& Delegate = FDelegate_DeleteOrg(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr GetAllOrgs(const FRequest_GetAllOrgs& Request, const FDelegate_GetAllOrgs& Delegate = FDelegate_GetAllOrgs(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr GetOrg(const FRequest_GetOrg& Request, const FDelegate_GetOrg& Delegate = FDelegate_GetOrg(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr UpdateOrg(const FRequest_UpdateOrg& Request, const FDelegate_UpdateOrg& Delegate = FDelegate_UpdateOrg(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);

private:
    void OnCreateOrgResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_CreateOrg Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnDeleteOrgResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_DeleteOrg Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnGetAllOrgsResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetAllOrgs Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnGetOrgResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetOrg Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnUpdateOrgResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_UpdateOrg Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);

};

/* Create Org
 *
 * Delete an organization, requires globalAdmin:*:* permissions
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_CreateOrg : public FRequest
{
    FRequest_CreateOrg();
    virtual ~FRequest_CreateOrg() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    FRHAPI_DevOrganizationRequest OrganizationRequest;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_CreateOrg : public FResponse
{
    FResponse_CreateOrg(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_CreateOrg() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevOrganization Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_CreateOrg
{
    typedef FRequest_CreateOrg Request;
    typedef FResponse_CreateOrg Response;
    typedef FDelegate_CreateOrg Delegate;
    typedef FOrganizationAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.CreateOrg(InRequest, InDelegate, Priority); }
};

/* Delete Org
 *
 * Delete an organization, requires globalAdmin:*:* permissions
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_DeleteOrg : public FRequest
{
    FRequest_DeleteOrg();
    virtual ~FRequest_DeleteOrg() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* Organization ID or short name */
    TVariant<FGuid, FString> OrgIdentifier;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_DeleteOrg : public FResponse
{
    FResponse_DeleteOrg(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_DeleteOrg() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevJsonValue Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_DeleteOrg
{
    typedef FRequest_DeleteOrg Request;
    typedef FResponse_DeleteOrg Response;
    typedef FDelegate_DeleteOrg Delegate;
    typedef FOrganizationAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.DeleteOrg(InRequest, InDelegate, Priority); }
};

/* Get All Orgs
 *
 * Get all organizations available to you, requires org:config:view or org:config:edit permissions
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_GetAllOrgs : public FRequest
{
    FRequest_GetAllOrgs();
    virtual ~FRequest_GetAllOrgs() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_GetAllOrgs : public FResponse
{
    FResponse_GetAllOrgs(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_GetAllOrgs() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    TArray<FRHAPI_DevOrganization> Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_GetAllOrgs
{
    typedef FRequest_GetAllOrgs Request;
    typedef FResponse_GetAllOrgs Response;
    typedef FDelegate_GetAllOrgs Delegate;
    typedef FOrganizationAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.GetAllOrgs(InRequest, InDelegate, Priority); }
};

/* Get Org
 *
 * Get an organization by ID or short name, requires org:config:view or org:config:edit permissions on the organization
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_GetOrg : public FRequest
{
    FRequest_GetOrg();
    virtual ~FRequest_GetOrg() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* Organization ID or short name */
    TVariant<FGuid, FString> OrgIdentifier;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_GetOrg : public FResponse
{
    FResponse_GetOrg(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_GetOrg() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevOrganization Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_GetOrg
{
    typedef FRequest_GetOrg Request;
    typedef FResponse_GetOrg Response;
    typedef FDelegate_GetOrg Delegate;
    typedef FOrganizationAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.GetOrg(InRequest, InDelegate, Priority); }
};

/* Update Org
 *
 * Update an organization, requires org:config:edit permissions on the organization
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_UpdateOrg : public FRequest
{
    FRequest_UpdateOrg();
    virtual ~FRequest_UpdateOrg() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* Organization ID or short name */
    TVariant<FGuid, FString> OrgIdentifier;
    FRHAPI_DevOrganizationUpdateRequest OrganizationUpdateRequest;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_UpdateOrg : public FResponse
{
    FResponse_UpdateOrg(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_UpdateOrg() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevOrganizationUpdateRequest Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_UpdateOrg
{
    typedef FRequest_UpdateOrg Request;
    typedef FResponse_UpdateOrg Response;
    typedef FDelegate_UpdateOrg Delegate;
    typedef FOrganizationAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.UpdateOrg(InRequest, InDelegate, Priority); }
};


}
