// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "CoreMinimal.h"
#include "RallyHereAPIAuthContext.h"
#include "RallyHereAPIHelpers.h"
#include "ClientVisibleSettings.h"
#include "HTTPValidationError.h"
#include "HzApiErrorModel.h"
#include "PlayerPresence.h"
#include "PlayerPresenceUpdateSelf.h"

namespace RallyHereAPI
{
using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

struct FRequest_GetPlayerPresencePublicById;
struct FResponse_GetPlayerPresencePublicById;
struct FRequest_GetPlayerPresencePublicByUuid;
struct FResponse_GetPlayerPresencePublicByUuid;
struct FRequest_GetPlayerPresenceSelf;
struct FResponse_GetPlayerPresenceSelf;
struct FRequest_GetPresenceSettings;
struct FResponse_GetPresenceSettings;
struct FRequest_UpdatePlayerPresenceSelf;
struct FResponse_UpdatePlayerPresenceSelf;

DECLARE_DELEGATE_OneParam(FDelegate_GetPlayerPresencePublicById, const FResponse_GetPlayerPresencePublicById&);
DECLARE_DELEGATE_OneParam(FDelegate_GetPlayerPresencePublicByUuid, const FResponse_GetPlayerPresencePublicByUuid&);
DECLARE_DELEGATE_OneParam(FDelegate_GetPlayerPresenceSelf, const FResponse_GetPlayerPresenceSelf&);
DECLARE_DELEGATE_OneParam(FDelegate_GetPresenceSettings, const FResponse_GetPresenceSettings&);
DECLARE_DELEGATE_OneParam(FDelegate_UpdatePlayerPresenceSelf, const FResponse_UpdatePlayerPresenceSelf&);

class RALLYHEREAPI_API FPresenceAPI : public FAPI
{
public:
    FPresenceAPI();
    virtual ~FPresenceAPI();

    FHttpRequestPtr GetPlayerPresencePublicById(const FRequest_GetPlayerPresencePublicById& Request, const FDelegate_GetPlayerPresencePublicById& Delegate = FDelegate_GetPlayerPresencePublicById(), int32 Priority = DefaultRallyHereAPIPriority);
    FHttpRequestPtr GetPlayerPresencePublicByUuid(const FRequest_GetPlayerPresencePublicByUuid& Request, const FDelegate_GetPlayerPresencePublicByUuid& Delegate = FDelegate_GetPlayerPresencePublicByUuid(), int32 Priority = DefaultRallyHereAPIPriority);
    FHttpRequestPtr GetPlayerPresenceSelf(const FRequest_GetPlayerPresenceSelf& Request, const FDelegate_GetPlayerPresenceSelf& Delegate = FDelegate_GetPlayerPresenceSelf(), int32 Priority = DefaultRallyHereAPIPriority);
    FHttpRequestPtr GetPresenceSettings(const FRequest_GetPresenceSettings& Request, const FDelegate_GetPresenceSettings& Delegate = FDelegate_GetPresenceSettings(), int32 Priority = DefaultRallyHereAPIPriority);
    FHttpRequestPtr UpdatePlayerPresenceSelf(const FRequest_UpdatePlayerPresenceSelf& Request, const FDelegate_UpdatePlayerPresenceSelf& Delegate = FDelegate_UpdatePlayerPresenceSelf(), int32 Priority = DefaultRallyHereAPIPriority);

private:
    void OnGetPlayerPresencePublicByIdResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetPlayerPresencePublicById Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnGetPlayerPresencePublicByUuidResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetPlayerPresencePublicByUuid Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnGetPlayerPresenceSelfResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetPlayerPresenceSelf Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnGetPresenceSettingsResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetPresenceSettings Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnUpdatePlayerPresenceSelfResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_UpdatePlayerPresenceSelf Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);

};

/* Get Player Presence Public By Id
 *
 * Get the player&#39;s presence information. The status will be modified based on the following rules: - A status of invisible will be reported as offline - The status will become offline if older than the configured age
*/
struct RALLYHEREAPI_API FRequest_GetPlayerPresencePublicById : public FRequest
{
    FRequest_GetPlayerPresencePublicById();
    virtual ~FRequest_GetPlayerPresencePublicById() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* A valid integer identifying a player. Rejects UUID player identification. */
    int32 PlayerId = 0;
    TOptional<bool> UseCache;
    /* If you provide the ETag that matches the current ETag for this resource, a 304 response will be return - indicating that the resource has not changed. */
    TOptional<FString> IfNoneMatch;
};

struct RALLYHEREAPI_API FResponse_GetPlayerPresencePublicById : public FResponse
{
    FResponse_GetPlayerPresencePublicById(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_GetPlayerPresencePublicById() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    bool ParseHeaders() override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_PlayerPresence Content;
    // Headers
    /* Used to identify this version of the content.  Provide with a get request to avoid downloading the same data multiple times. */
    TOptional<FString> ETag;
};

struct RALLYHEREAPI_API Traits_GetPlayerPresencePublicById
{
    typedef FRequest_GetPlayerPresencePublicById Request;
    typedef FResponse_GetPlayerPresencePublicById Response;
    typedef FDelegate_GetPlayerPresencePublicById Delegate;
    typedef FPresenceAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI.GetPlayerPresencePublicById(InRequest, InDelegate, Priority); }
};

/* Get Player Presence Public By Uuid
 *
 * Get the player&#39;s presence information. The status will be modified based on the following rules: - A status of invisible will be reported as offline - The status will become offline if older than the configured age
*/
struct RALLYHEREAPI_API FRequest_GetPlayerPresencePublicByUuid : public FRequest
{
    FRequest_GetPlayerPresencePublicByUuid();
    virtual ~FRequest_GetPlayerPresencePublicByUuid() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* A valid UUID identifying a player. Rejects integer player identification. */
    FGuid PlayerUuid;
    TOptional<bool> UseCache;
    /* If you provide the ETag that matches the current ETag for this resource, a 304 response will be return - indicating that the resource has not changed. */
    TOptional<FString> IfNoneMatch;
};

struct RALLYHEREAPI_API FResponse_GetPlayerPresencePublicByUuid : public FResponse
{
    FResponse_GetPlayerPresencePublicByUuid(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_GetPlayerPresencePublicByUuid() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    bool ParseHeaders() override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_PlayerPresence Content;
    // Headers
    /* Used to identify this version of the content.  Provide with a get request to avoid downloading the same data multiple times. */
    TOptional<FString> ETag;
};

struct RALLYHEREAPI_API Traits_GetPlayerPresencePublicByUuid
{
    typedef FRequest_GetPlayerPresencePublicByUuid Request;
    typedef FResponse_GetPlayerPresencePublicByUuid Response;
    typedef FDelegate_GetPlayerPresencePublicByUuid Delegate;
    typedef FPresenceAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI.GetPlayerPresencePublicByUuid(InRequest, InDelegate, Priority); }
};

/* Get Player Presence Self
 *
 * Get the player&#39;s presence information. The status reflects the true value and is not modified before it is returned.
*/
struct RALLYHEREAPI_API FRequest_GetPlayerPresenceSelf : public FRequest
{
    FRequest_GetPlayerPresenceSelf();
    virtual ~FRequest_GetPlayerPresenceSelf() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    TOptional<bool> UseCache;
};

struct RALLYHEREAPI_API FResponse_GetPlayerPresenceSelf : public FResponse
{
    FResponse_GetPlayerPresenceSelf(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_GetPlayerPresenceSelf() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    bool ParseHeaders() override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_PlayerPresence Content;
    // Headers
    /* Used to identify this version of the content.  Provide with a get request to avoid downloading the same data multiple times. */
    TOptional<FString> ETag;
};

struct RALLYHEREAPI_API Traits_GetPlayerPresenceSelf
{
    typedef FRequest_GetPlayerPresenceSelf Request;
    typedef FResponse_GetPlayerPresenceSelf Response;
    typedef FDelegate_GetPlayerPresenceSelf Delegate;
    typedef FPresenceAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI.GetPlayerPresenceSelf(InRequest, InDelegate, Priority); }
};

/* Get Presence Settings
 *
 * Settings which help tell the client how it should interact with this service.
*/
struct RALLYHEREAPI_API FRequest_GetPresenceSettings : public FRequest
{
    FRequest_GetPresenceSettings();
    virtual ~FRequest_GetPresenceSettings() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;

};

struct RALLYHEREAPI_API FResponse_GetPresenceSettings : public FResponse
{
    FResponse_GetPresenceSettings(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_GetPresenceSettings() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_ClientVisibleSettings Content;

};

struct RALLYHEREAPI_API Traits_GetPresenceSettings
{
    typedef FRequest_GetPresenceSettings Request;
    typedef FResponse_GetPresenceSettings Response;
    typedef FDelegate_GetPresenceSettings Delegate;
    typedef FPresenceAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI.GetPresenceSettings(InRequest, InDelegate, Priority); }
};

/* Update Player Presence Self
 *
 * Update the player&#39;s online status and other presence data. If the player reports their online status as online or away, their \&quot;last_seen\&quot; presence info is updated. Player clients are expected to send requests to this endpoint on an interval of self_ping_interval_seconds. Otherwise they will be considered offline.
*/
struct RALLYHEREAPI_API FRequest_UpdatePlayerPresenceSelf : public FRequest
{
    FRequest_UpdatePlayerPresenceSelf();
    virtual ~FRequest_UpdatePlayerPresenceSelf() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    FRHAPI_PlayerPresenceUpdateSelf PlayerPresenceUpdateSelf;
    TOptional<bool> UseCache;
};

struct RALLYHEREAPI_API FResponse_UpdatePlayerPresenceSelf : public FResponse
{
    FResponse_UpdatePlayerPresenceSelf(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_UpdatePlayerPresenceSelf() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    bool ParseHeaders() override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_JsonValue Content;
    // Headers
    /* Used to identify this version of the content.  Provide with a get request to avoid downloading the same data multiple times. */
    TOptional<FString> ETag;
};

struct RALLYHEREAPI_API Traits_UpdatePlayerPresenceSelf
{
    typedef FRequest_UpdatePlayerPresenceSelf Request;
    typedef FResponse_UpdatePlayerPresenceSelf Response;
    typedef FDelegate_UpdatePlayerPresenceSelf Delegate;
    typedef FPresenceAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereAPIPriority) { return InAPI.UpdatePlayerPresenceSelf(InRequest, InDelegate, Priority); }
};


}
