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
#include "DevAllRanksResponse.h"
#include "DevHTTPValidationError.h"
#include "DevRank.h"
#include "DevRankRequest.h"
#include "DevRankUpdateRequest.h"
#include "Misc/TVariant.h"

namespace RallyHereDeveloperAPI
{
using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

struct FRequest_OrgProductSandboxCreateRank;
struct FResponse_OrgProductSandboxCreateRank;
struct FRequest_OrgProductSandboxDeleteRank;
struct FResponse_OrgProductSandboxDeleteRank;
struct FRequest_OrgProductSandboxGetAllRanks;
struct FResponse_OrgProductSandboxGetAllRanks;
struct FRequest_OrgProductSandboxGetRank;
struct FResponse_OrgProductSandboxGetRank;
struct FRequest_OrgProductSandboxPatchRank;
struct FResponse_OrgProductSandboxPatchRank;
struct FRequest_OrgProductSandboxPutRank;
struct FResponse_OrgProductSandboxPutRank;
struct FRequest_SandboxCreateRank;
struct FResponse_SandboxCreateRank;
struct FRequest_SandboxDeleteRank;
struct FResponse_SandboxDeleteRank;
struct FRequest_SandboxGetAllRanks;
struct FResponse_SandboxGetAllRanks;
struct FRequest_SandboxGetRank;
struct FResponse_SandboxGetRank;
struct FRequest_SandboxPatchRank;
struct FResponse_SandboxPatchRank;
struct FRequest_SandboxPutRank;
struct FResponse_SandboxPutRank;

DECLARE_DELEGATE_OneParam(FDelegate_OrgProductSandboxCreateRank, const FResponse_OrgProductSandboxCreateRank&);
DECLARE_DELEGATE_OneParam(FDelegate_OrgProductSandboxDeleteRank, const FResponse_OrgProductSandboxDeleteRank&);
DECLARE_DELEGATE_OneParam(FDelegate_OrgProductSandboxGetAllRanks, const FResponse_OrgProductSandboxGetAllRanks&);
DECLARE_DELEGATE_OneParam(FDelegate_OrgProductSandboxGetRank, const FResponse_OrgProductSandboxGetRank&);
DECLARE_DELEGATE_OneParam(FDelegate_OrgProductSandboxPatchRank, const FResponse_OrgProductSandboxPatchRank&);
DECLARE_DELEGATE_OneParam(FDelegate_OrgProductSandboxPutRank, const FResponse_OrgProductSandboxPutRank&);
DECLARE_DELEGATE_OneParam(FDelegate_SandboxCreateRank, const FResponse_SandboxCreateRank&);
DECLARE_DELEGATE_OneParam(FDelegate_SandboxDeleteRank, const FResponse_SandboxDeleteRank&);
DECLARE_DELEGATE_OneParam(FDelegate_SandboxGetAllRanks, const FResponse_SandboxGetAllRanks&);
DECLARE_DELEGATE_OneParam(FDelegate_SandboxGetRank, const FResponse_SandboxGetRank&);
DECLARE_DELEGATE_OneParam(FDelegate_SandboxPatchRank, const FResponse_SandboxPatchRank&);
DECLARE_DELEGATE_OneParam(FDelegate_SandboxPutRank, const FResponse_SandboxPutRank&);

class RALLYHEREDEVELOPERAPI_API FRanksAPI : public FAPI
{
public:
    FRanksAPI();
    virtual ~FRanksAPI();

    FHttpRequestPtr OrgProductSandboxCreateRank(const FRequest_OrgProductSandboxCreateRank& Request, const FDelegate_OrgProductSandboxCreateRank& Delegate = FDelegate_OrgProductSandboxCreateRank(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr OrgProductSandboxDeleteRank(const FRequest_OrgProductSandboxDeleteRank& Request, const FDelegate_OrgProductSandboxDeleteRank& Delegate = FDelegate_OrgProductSandboxDeleteRank(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr OrgProductSandboxGetAllRanks(const FRequest_OrgProductSandboxGetAllRanks& Request, const FDelegate_OrgProductSandboxGetAllRanks& Delegate = FDelegate_OrgProductSandboxGetAllRanks(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr OrgProductSandboxGetRank(const FRequest_OrgProductSandboxGetRank& Request, const FDelegate_OrgProductSandboxGetRank& Delegate = FDelegate_OrgProductSandboxGetRank(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr OrgProductSandboxPatchRank(const FRequest_OrgProductSandboxPatchRank& Request, const FDelegate_OrgProductSandboxPatchRank& Delegate = FDelegate_OrgProductSandboxPatchRank(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr OrgProductSandboxPutRank(const FRequest_OrgProductSandboxPutRank& Request, const FDelegate_OrgProductSandboxPutRank& Delegate = FDelegate_OrgProductSandboxPutRank(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr SandboxCreateRank(const FRequest_SandboxCreateRank& Request, const FDelegate_SandboxCreateRank& Delegate = FDelegate_SandboxCreateRank(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr SandboxDeleteRank(const FRequest_SandboxDeleteRank& Request, const FDelegate_SandboxDeleteRank& Delegate = FDelegate_SandboxDeleteRank(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr SandboxGetAllRanks(const FRequest_SandboxGetAllRanks& Request, const FDelegate_SandboxGetAllRanks& Delegate = FDelegate_SandboxGetAllRanks(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr SandboxGetRank(const FRequest_SandboxGetRank& Request, const FDelegate_SandboxGetRank& Delegate = FDelegate_SandboxGetRank(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr SandboxPatchRank(const FRequest_SandboxPatchRank& Request, const FDelegate_SandboxPatchRank& Delegate = FDelegate_SandboxPatchRank(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr SandboxPutRank(const FRequest_SandboxPutRank& Request, const FDelegate_SandboxPutRank& Delegate = FDelegate_SandboxPutRank(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);

private:
    void OnOrgProductSandboxCreateRankResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_OrgProductSandboxCreateRank Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnOrgProductSandboxDeleteRankResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_OrgProductSandboxDeleteRank Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnOrgProductSandboxGetAllRanksResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_OrgProductSandboxGetAllRanks Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnOrgProductSandboxGetRankResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_OrgProductSandboxGetRank Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnOrgProductSandboxPatchRankResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_OrgProductSandboxPatchRank Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnOrgProductSandboxPutRankResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_OrgProductSandboxPutRank Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnSandboxCreateRankResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_SandboxCreateRank Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnSandboxDeleteRankResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_SandboxDeleteRank Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnSandboxGetAllRanksResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_SandboxGetAllRanks Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnSandboxGetRankResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_SandboxGetRank Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnSandboxPatchRankResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_SandboxPatchRank Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnSandboxPutRankResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_SandboxPutRank Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);

};

/* Create Rank
 *
 * Create a new Rank in a sandbox  Requires permission sandbox:config:edit.
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_OrgProductSandboxCreateRank : public FRequest
{
    FRequest_OrgProductSandboxCreateRank();
    virtual ~FRequest_OrgProductSandboxCreateRank() = default;
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
    FRHAPI_DevRankRequest RankRequest;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_OrgProductSandboxCreateRank : public FResponse
{
    FResponse_OrgProductSandboxCreateRank(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_OrgProductSandboxCreateRank() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevRank Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_OrgProductSandboxCreateRank
{
    typedef FRequest_OrgProductSandboxCreateRank Request;
    typedef FResponse_OrgProductSandboxCreateRank Response;
    typedef FDelegate_OrgProductSandboxCreateRank Delegate;
    typedef FRanksAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.OrgProductSandboxCreateRank(InRequest, InDelegate, Priority); }
};

/* Delete Rank
 *
 * Delete an existing Rank in a sandbox  Requires permission sandbox:config:edit.
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_OrgProductSandboxDeleteRank : public FRequest
{
    FRequest_OrgProductSandboxDeleteRank();
    virtual ~FRequest_OrgProductSandboxDeleteRank() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    FGuid RankId;
    /* Organization ID or short name */
    TVariant<FGuid, FString> OrgIdentifier;
    /* Product ID or short name */
    TVariant<FGuid, FString> ProductIdentifier;
    /* Sandbox ID or short name */
    TVariant<FGuid, FString> SandboxIdentifier;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_OrgProductSandboxDeleteRank : public FResponse
{
    FResponse_OrgProductSandboxDeleteRank(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_OrgProductSandboxDeleteRank() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    

};

struct RALLYHEREDEVELOPERAPI_API Traits_OrgProductSandboxDeleteRank
{
    typedef FRequest_OrgProductSandboxDeleteRank Request;
    typedef FResponse_OrgProductSandboxDeleteRank Response;
    typedef FDelegate_OrgProductSandboxDeleteRank Delegate;
    typedef FRanksAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.OrgProductSandboxDeleteRank(InRequest, InDelegate, Priority); }
};

/* Get All Ranks
 *
 * Get all Ranks in a sandbox  Requires any of permissions:    sandbox:config:view, sandbox:config:edit
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_OrgProductSandboxGetAllRanks : public FRequest
{
    FRequest_OrgProductSandboxGetAllRanks();
    virtual ~FRequest_OrgProductSandboxGetAllRanks() = default;
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
    /* The maximum number of elements to be returned per call */
    TOptional<int32> PageSize;
    /* Cursor to designate where you are in iterating through values. Start with '0', and pass this on subsequent calls to continue iteration */
    TOptional<FString> Cursor;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_OrgProductSandboxGetAllRanks : public FResponse
{
    FResponse_OrgProductSandboxGetAllRanks(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_OrgProductSandboxGetAllRanks() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevAllRanksResponse Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_OrgProductSandboxGetAllRanks
{
    typedef FRequest_OrgProductSandboxGetAllRanks Request;
    typedef FResponse_OrgProductSandboxGetAllRanks Response;
    typedef FDelegate_OrgProductSandboxGetAllRanks Delegate;
    typedef FRanksAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.OrgProductSandboxGetAllRanks(InRequest, InDelegate, Priority); }
};

/* Get Rank
 *
 * Get specific Rank in a sandbox  Requires any of permissions:    sandbox:config:view, sandbox:config:edit
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_OrgProductSandboxGetRank : public FRequest
{
    FRequest_OrgProductSandboxGetRank();
    virtual ~FRequest_OrgProductSandboxGetRank() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    FGuid RankId;
    /* Organization ID or short name */
    TVariant<FGuid, FString> OrgIdentifier;
    /* Product ID or short name */
    TVariant<FGuid, FString> ProductIdentifier;
    /* Sandbox ID or short name */
    TVariant<FGuid, FString> SandboxIdentifier;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_OrgProductSandboxGetRank : public FResponse
{
    FResponse_OrgProductSandboxGetRank(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_OrgProductSandboxGetRank() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevRank Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_OrgProductSandboxGetRank
{
    typedef FRequest_OrgProductSandboxGetRank Request;
    typedef FResponse_OrgProductSandboxGetRank Response;
    typedef FDelegate_OrgProductSandboxGetRank Delegate;
    typedef FRanksAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.OrgProductSandboxGetRank(InRequest, InDelegate, Priority); }
};

/* Patch Rank
 *
 * Update an existing Rank in a sandbox  Requires permission sandbox:config:edit.
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_OrgProductSandboxPatchRank : public FRequest
{
    FRequest_OrgProductSandboxPatchRank();
    virtual ~FRequest_OrgProductSandboxPatchRank() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    FGuid RankId;
    /* Organization ID or short name */
    TVariant<FGuid, FString> OrgIdentifier;
    /* Product ID or short name */
    TVariant<FGuid, FString> ProductIdentifier;
    /* Sandbox ID or short name */
    TVariant<FGuid, FString> SandboxIdentifier;
    FRHAPI_DevRankUpdateRequest RankUpdateRequest;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_OrgProductSandboxPatchRank : public FResponse
{
    FResponse_OrgProductSandboxPatchRank(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_OrgProductSandboxPatchRank() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevRank Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_OrgProductSandboxPatchRank
{
    typedef FRequest_OrgProductSandboxPatchRank Request;
    typedef FResponse_OrgProductSandboxPatchRank Response;
    typedef FDelegate_OrgProductSandboxPatchRank Delegate;
    typedef FRanksAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.OrgProductSandboxPatchRank(InRequest, InDelegate, Priority); }
};

/* Put Rank
 *
 * Update an existing Rank in a sandbox  Requires permission sandbox:config:edit.
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_OrgProductSandboxPutRank : public FRequest
{
    FRequest_OrgProductSandboxPutRank();
    virtual ~FRequest_OrgProductSandboxPutRank() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    FGuid RankId;
    /* Organization ID or short name */
    TVariant<FGuid, FString> OrgIdentifier;
    /* Product ID or short name */
    TVariant<FGuid, FString> ProductIdentifier;
    /* Sandbox ID or short name */
    TVariant<FGuid, FString> SandboxIdentifier;
    FRHAPI_DevRankUpdateRequest RankUpdateRequest;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_OrgProductSandboxPutRank : public FResponse
{
    FResponse_OrgProductSandboxPutRank(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_OrgProductSandboxPutRank() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevRank Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_OrgProductSandboxPutRank
{
    typedef FRequest_OrgProductSandboxPutRank Request;
    typedef FResponse_OrgProductSandboxPutRank Response;
    typedef FDelegate_OrgProductSandboxPutRank Delegate;
    typedef FRanksAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.OrgProductSandboxPutRank(InRequest, InDelegate, Priority); }
};

/* Create Rank
 *
 * Create a new Rank in a sandbox  Requires permission sandbox:config:edit.
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_SandboxCreateRank : public FRequest
{
    FRequest_SandboxCreateRank();
    virtual ~FRequest_SandboxCreateRank() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* Sandbox ID */
    FGuid SandboxId;
    FRHAPI_DevRankRequest RankRequest;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_SandboxCreateRank : public FResponse
{
    FResponse_SandboxCreateRank(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_SandboxCreateRank() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevRank Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_SandboxCreateRank
{
    typedef FRequest_SandboxCreateRank Request;
    typedef FResponse_SandboxCreateRank Response;
    typedef FDelegate_SandboxCreateRank Delegate;
    typedef FRanksAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.SandboxCreateRank(InRequest, InDelegate, Priority); }
};

/* Delete Rank
 *
 * Delete an existing Rank in a sandbox  Requires permission sandbox:config:edit.
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_SandboxDeleteRank : public FRequest
{
    FRequest_SandboxDeleteRank();
    virtual ~FRequest_SandboxDeleteRank() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    FGuid RankId;
    /* Sandbox ID */
    FGuid SandboxId;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_SandboxDeleteRank : public FResponse
{
    FResponse_SandboxDeleteRank(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_SandboxDeleteRank() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    

};

struct RALLYHEREDEVELOPERAPI_API Traits_SandboxDeleteRank
{
    typedef FRequest_SandboxDeleteRank Request;
    typedef FResponse_SandboxDeleteRank Response;
    typedef FDelegate_SandboxDeleteRank Delegate;
    typedef FRanksAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.SandboxDeleteRank(InRequest, InDelegate, Priority); }
};

/* Get All Ranks
 *
 * Get all Ranks in a sandbox  Requires any of permissions:    sandbox:config:view, sandbox:config:edit
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_SandboxGetAllRanks : public FRequest
{
    FRequest_SandboxGetAllRanks();
    virtual ~FRequest_SandboxGetAllRanks() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* Sandbox ID */
    FGuid SandboxId;
    /* The maximum number of elements to be returned per call */
    TOptional<int32> PageSize;
    /* Cursor to designate where you are in iterating through values. Start with '0', and pass this on subsequent calls to continue iteration */
    TOptional<FString> Cursor;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_SandboxGetAllRanks : public FResponse
{
    FResponse_SandboxGetAllRanks(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_SandboxGetAllRanks() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevAllRanksResponse Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_SandboxGetAllRanks
{
    typedef FRequest_SandboxGetAllRanks Request;
    typedef FResponse_SandboxGetAllRanks Response;
    typedef FDelegate_SandboxGetAllRanks Delegate;
    typedef FRanksAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.SandboxGetAllRanks(InRequest, InDelegate, Priority); }
};

/* Get Rank
 *
 * Get specific Rank in a sandbox  Requires any of permissions:    sandbox:config:view, sandbox:config:edit
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_SandboxGetRank : public FRequest
{
    FRequest_SandboxGetRank();
    virtual ~FRequest_SandboxGetRank() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    FGuid RankId;
    /* Sandbox ID */
    FGuid SandboxId;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_SandboxGetRank : public FResponse
{
    FResponse_SandboxGetRank(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_SandboxGetRank() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevRank Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_SandboxGetRank
{
    typedef FRequest_SandboxGetRank Request;
    typedef FResponse_SandboxGetRank Response;
    typedef FDelegate_SandboxGetRank Delegate;
    typedef FRanksAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.SandboxGetRank(InRequest, InDelegate, Priority); }
};

/* Patch Rank
 *
 * Update an existing Rank in a sandbox  Requires permission sandbox:config:edit.
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_SandboxPatchRank : public FRequest
{
    FRequest_SandboxPatchRank();
    virtual ~FRequest_SandboxPatchRank() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    FGuid RankId;
    /* Sandbox ID */
    FGuid SandboxId;
    FRHAPI_DevRankUpdateRequest RankUpdateRequest;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_SandboxPatchRank : public FResponse
{
    FResponse_SandboxPatchRank(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_SandboxPatchRank() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevRank Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_SandboxPatchRank
{
    typedef FRequest_SandboxPatchRank Request;
    typedef FResponse_SandboxPatchRank Response;
    typedef FDelegate_SandboxPatchRank Delegate;
    typedef FRanksAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.SandboxPatchRank(InRequest, InDelegate, Priority); }
};

/* Put Rank
 *
 * Update an existing Rank in a sandbox  Requires permission sandbox:config:edit.
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_SandboxPutRank : public FRequest
{
    FRequest_SandboxPutRank();
    virtual ~FRequest_SandboxPutRank() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    FGuid RankId;
    /* Sandbox ID */
    FGuid SandboxId;
    FRHAPI_DevRankUpdateRequest RankUpdateRequest;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_SandboxPutRank : public FResponse
{
    FResponse_SandboxPutRank(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_SandboxPutRank() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevRank Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_SandboxPutRank
{
    typedef FRequest_SandboxPutRank Request;
    typedef FResponse_SandboxPutRank Response;
    typedef FDelegate_SandboxPutRank Delegate;
    typedef FRanksAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.SandboxPutRank(InRequest, InDelegate, Priority); }
};


}
