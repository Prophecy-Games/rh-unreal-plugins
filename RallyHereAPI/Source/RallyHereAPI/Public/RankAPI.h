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
#include "HTTPValidationError.h"
#include "HzApiErrorModel.h"
#include "PlayerRatingUpdateRequest.h"
#include "RankRequestResponse.h"
#include "RankUpdateResponse.h"
#include "TrueskillV1UpdateRequest.h"

namespace RallyHereAPI
{
using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

struct FRequest_GetAllPlayerRating;
struct FResponse_GetAllPlayerRating;
struct FRequest_GetPlayerRating;
struct FResponse_GetPlayerRating;
struct FRequest_UpdatePlayerUuidRating;
struct FResponse_UpdatePlayerUuidRating;
struct FRequest_UpdateRatingsTrueskillV1;
struct FResponse_UpdateRatingsTrueskillV1;

DECLARE_DELEGATE_OneParam(FDelegate_GetAllPlayerRating, const FResponse_GetAllPlayerRating&);
DECLARE_DELEGATE_OneParam(FDelegate_GetPlayerRating, const FResponse_GetPlayerRating&);
DECLARE_DELEGATE_OneParam(FDelegate_UpdatePlayerUuidRating, const FResponse_UpdatePlayerUuidRating&);
DECLARE_DELEGATE_OneParam(FDelegate_UpdateRatingsTrueskillV1, const FResponse_UpdateRatingsTrueskillV1&);

class RALLYHEREAPI_API FRankAPI : public FAPI
{
public:
    FRankAPI();
    virtual ~FRankAPI();

    FHttpRequestPtr GetAllPlayerRating(const FRequest_GetAllPlayerRating& Request, const FDelegate_GetAllPlayerRating& Delegate = FDelegate_GetAllPlayerRating());
    FHttpRequestPtr GetPlayerRating(const FRequest_GetPlayerRating& Request, const FDelegate_GetPlayerRating& Delegate = FDelegate_GetPlayerRating());
    FHttpRequestPtr UpdatePlayerUuidRating(const FRequest_UpdatePlayerUuidRating& Request, const FDelegate_UpdatePlayerUuidRating& Delegate = FDelegate_UpdatePlayerUuidRating());
    FHttpRequestPtr UpdateRatingsTrueskillV1(const FRequest_UpdateRatingsTrueskillV1& Request, const FDelegate_UpdateRatingsTrueskillV1& Delegate = FDelegate_UpdateRatingsTrueskillV1());

private:
    void OnGetAllPlayerRatingResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetAllPlayerRating Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry);
    void OnGetPlayerRatingResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetPlayerRating Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry);
    void OnUpdatePlayerUuidRatingResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_UpdatePlayerUuidRating Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry);
    void OnUpdateRatingsTrueskillV1Response(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_UpdateRatingsTrueskillV1 Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry);

};

/* Get All Player Rating
 *
 * Get a specific player&#39;s rank for a specific ranking type
*/
struct RALLYHEREAPI_API FRequest_GetAllPlayerRating : public FRequest
{
    FRequest_GetAllPlayerRating();
    virtual ~FRequest_GetAllPlayerRating() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FString GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    FGuid PlayerUuid;
};

struct RALLYHEREAPI_API FResponse_GetAllPlayerRating : public FResponse
{
    FResponse_GetAllPlayerRating(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_GetAllPlayerRating() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_RankRequestResponse Content;

};

struct RALLYHEREAPI_API Traits_GetAllPlayerRating
{
    typedef FRequest_GetAllPlayerRating Request;
    typedef FResponse_GetAllPlayerRating Response;
    typedef FDelegate_GetAllPlayerRating Delegate;
    typedef FRankAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate()) { return InAPI.GetAllPlayerRating(InRequest, InDelegate); }
};

/* Get Player Rating
 *
 * Get a specific player&#39;s rank for a specific ranking type
*/
struct RALLYHEREAPI_API FRequest_GetPlayerRating : public FRequest
{
    FRequest_GetPlayerRating();
    virtual ~FRequest_GetPlayerRating() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FString GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    FGuid PlayerUuid;
    int32 RankingTypeId = 0;
};

struct RALLYHEREAPI_API FResponse_GetPlayerRating : public FResponse
{
    FResponse_GetPlayerRating(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_GetPlayerRating() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_RankRequestResponse Content;

};

struct RALLYHEREAPI_API Traits_GetPlayerRating
{
    typedef FRequest_GetPlayerRating Request;
    typedef FResponse_GetPlayerRating Response;
    typedef FDelegate_GetPlayerRating Delegate;
    typedef FRankAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate()) { return InAPI.GetPlayerRating(InRequest, InDelegate); }
};

/* Update Player Uuid Rating
 *
 * Update a specific player&#39;s ratings to those that are provided. Ratings are taken as is
*/
struct RALLYHEREAPI_API FRequest_UpdatePlayerUuidRating : public FRequest
{
    FRequest_UpdatePlayerUuidRating();
    virtual ~FRequest_UpdatePlayerUuidRating() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FString GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    FGuid PlayerUuid;
    int32 RankId = 0;
    FRHAPI_PlayerRatingUpdateRequest PlayerRatingUpdateRequest;
};

struct RALLYHEREAPI_API FResponse_UpdatePlayerUuidRating : public FResponse
{
    FResponse_UpdatePlayerUuidRating(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_UpdatePlayerUuidRating() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_RankUpdateResponse Content;

};

struct RALLYHEREAPI_API Traits_UpdatePlayerUuidRating
{
    typedef FRequest_UpdatePlayerUuidRating Request;
    typedef FResponse_UpdatePlayerUuidRating Response;
    typedef FDelegate_UpdatePlayerUuidRating Delegate;
    typedef FRankAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate()) { return InAPI.UpdatePlayerUuidRating(InRequest, InDelegate); }
};

/* Update Ratings Trueskill V1
 *
 * Run Trueskill V1 rating update on players and persist their new ratings
*/
struct RALLYHEREAPI_API FRequest_UpdateRatingsTrueskillV1 : public FRequest
{
    FRequest_UpdateRatingsTrueskillV1();
    virtual ~FRequest_UpdateRatingsTrueskillV1() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FString GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    FRHAPI_TrueskillV1UpdateRequest TrueskillV1UpdateRequest;
};

struct RALLYHEREAPI_API FResponse_UpdateRatingsTrueskillV1 : public FResponse
{
    FResponse_UpdateRatingsTrueskillV1(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_UpdateRatingsTrueskillV1() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_RankUpdateResponse Content;

};

struct RALLYHEREAPI_API Traits_UpdateRatingsTrueskillV1
{
    typedef FRequest_UpdateRatingsTrueskillV1 Request;
    typedef FResponse_UpdateRatingsTrueskillV1 Response;
    typedef FDelegate_UpdateRatingsTrueskillV1 Delegate;
    typedef FRankAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate()) { return InAPI.UpdateRatingsTrueskillV1(InRequest, InDelegate); }
};


}
