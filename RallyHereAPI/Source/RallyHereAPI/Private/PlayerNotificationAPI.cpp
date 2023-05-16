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

#include "PlayerNotificationAPI.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIAuthContext.h"
#include "HttpModule.h"
#include "Serialization/JsonSerializer.h"

namespace RallyHereAPI
{

FPlayerNotificationAPI::FPlayerNotificationAPI() : FAPI()
{
    Url = TEXT("http://localhost");
    Name = TEXT("PlayerNotification");
}

FPlayerNotificationAPI::~FPlayerNotificationAPI() {}

FHttpRequestPtr FPlayerNotificationAPI::PlayerCreateNotification(const FRequest_PlayerCreateNotification& Request, const FDelegate_PlayerCreateNotification& Delegate /*= FDelegate_PlayerCreateNotification()*/)
{
    if (!IsValid())
        return nullptr;

    FHttpRequestRef HttpRequest = CreateHttpRequest(Request);
    HttpRequest->SetURL(*(Url + Request.ComputePath()));

    for(const auto& It : AdditionalHeaderParams)
    {
        HttpRequest->SetHeader(It.Key, It.Value);
    }

    if (!Request.SetupHttpRequest(HttpRequest))
    {
        return nullptr;
    }
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &FPlayerNotificationAPI::OnPlayerCreateNotificationResponse, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext());
    HttpRequest->ProcessRequest();
    OnRequestStarted().Broadcast(Request.GetRequestMetadata(), HttpRequest);
    return HttpRequest;
}

void FPlayerNotificationAPI::OnPlayerCreateNotificationResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_PlayerCreateNotification Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry)
{
    if (AuthContextForRetry)
    {
        // An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
        // So, we set the callback to use a null context for the retry
        HttpRequest->OnProcessRequestComplete().BindRaw(this, &FPlayerNotificationAPI::OnPlayerCreateNotificationResponse, Delegate, RequestMetadata, TSharedPtr<FAuthContext>());
    }

    FResponse_PlayerCreateNotification Response{ RequestMetadata };
    const bool bWillRetryWithRefreshedAuth = HandleResponse(HttpRequest, HttpResponse, bSucceeded, AuthContextForRetry, Response);
    OnRequestCompleted().Broadcast(Response, HttpRequest, HttpResponse, bSucceeded, bWillRetryWithRefreshedAuth);
    if (!bWillRetryWithRefreshedAuth)
    {
        Delegate.ExecuteIfBound(Response);
    }
}

FRequest_PlayerCreateNotification::FRequest_PlayerCreateNotification()
{
    RequestMetadata.Identifier = FGuid::NewGuid();
    RequestMetadata.SimplifiedPath = GetSimplifiedPath();
}

FString FRequest_PlayerCreateNotification::GetSimplifiedPath() const
{
    return FString(TEXT("/notification/v1/player/{player_uuid}/notification"));
}

FString FRequest_PlayerCreateNotification::ComputePath() const
{
    TMap<FString, FStringFormatArg> PathParams = { 
        { TEXT("player_uuid"), ToStringFormatArg(PlayerUuid) }
    };

    FString Path = FString::Format(TEXT("/notification/v1/player/{player_uuid}/notification"), PathParams);

    return Path;
}

bool FRequest_PlayerCreateNotification::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
    static const TArray<FString> Consumes = { TEXT("application/json") };
    //static const TArray<FString> Produces = { TEXT("application/json") };

    HttpRequest->SetVerb(TEXT("POST"));

    if (!AuthContext)
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_PlayerCreateNotification - missing auth context"));
        return false;
    }
    if (!AuthContext->AddBearerToken(HttpRequest))
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_PlayerCreateNotification - failed to add bearer token"));
        return false;
    }

    if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json"))) // Default to Json Body request
    {
        // Body parameters
        FString JsonBody;
        TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&JsonBody);

        WriteJsonValue(Writer, NotificationCreates);
        Writer->Close();

        HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
        HttpRequest->SetContentAsString(JsonBody);
    }
    else if (Consumes.Contains(TEXT("multipart/form-data")))
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_PlayerCreateNotification - Body parameter (FRHAPI_NotificationCreates) was ignored, not supported in multipart form"));
    }
    else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_PlayerCreateNotification - Body parameter (FRHAPI_NotificationCreates) was ignored, not supported in urlencoded requests"));
    }
    else
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_PlayerCreateNotification - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
        return false;
    }

    return true;
}

void FResponse_PlayerCreateNotification::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
    FResponse::SetHttpResponseCode(InHttpResponseCode);
    switch ((int)InHttpResponseCode)
    {
    case 200:
        SetResponseString(TEXT("Successful Response"));
        break;
    case 403:
        SetResponseString(TEXT("Forbidden"));
        break;
    case 422:
        SetResponseString(TEXT("Validation Error"));
        break;
    }
}

bool FResponse_PlayerCreateNotification::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    return TryGetJsonValue(JsonValue, Content);
}

FResponse_PlayerCreateNotification::FResponse_PlayerCreateNotification(FRequestMetadata InRequestMetadata) :
    FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_PlayerCreateNotification::Name = TEXT("PlayerCreateNotification");

FHttpRequestPtr FPlayerNotificationAPI::PlayerGetNotificationById(const FRequest_PlayerGetNotificationById& Request, const FDelegate_PlayerGetNotificationById& Delegate /*= FDelegate_PlayerGetNotificationById()*/)
{
    if (!IsValid())
        return nullptr;

    FHttpRequestRef HttpRequest = CreateHttpRequest(Request);
    HttpRequest->SetURL(*(Url + Request.ComputePath()));

    for(const auto& It : AdditionalHeaderParams)
    {
        HttpRequest->SetHeader(It.Key, It.Value);
    }

    if (!Request.SetupHttpRequest(HttpRequest))
    {
        return nullptr;
    }
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &FPlayerNotificationAPI::OnPlayerGetNotificationByIdResponse, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext());
    HttpRequest->ProcessRequest();
    OnRequestStarted().Broadcast(Request.GetRequestMetadata(), HttpRequest);
    return HttpRequest;
}

void FPlayerNotificationAPI::OnPlayerGetNotificationByIdResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_PlayerGetNotificationById Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry)
{
    if (AuthContextForRetry)
    {
        // An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
        // So, we set the callback to use a null context for the retry
        HttpRequest->OnProcessRequestComplete().BindRaw(this, &FPlayerNotificationAPI::OnPlayerGetNotificationByIdResponse, Delegate, RequestMetadata, TSharedPtr<FAuthContext>());
    }

    FResponse_PlayerGetNotificationById Response{ RequestMetadata };
    const bool bWillRetryWithRefreshedAuth = HandleResponse(HttpRequest, HttpResponse, bSucceeded, AuthContextForRetry, Response);
    OnRequestCompleted().Broadcast(Response, HttpRequest, HttpResponse, bSucceeded, bWillRetryWithRefreshedAuth);
    if (!bWillRetryWithRefreshedAuth)
    {
        Delegate.ExecuteIfBound(Response);
    }
}

FRequest_PlayerGetNotificationById::FRequest_PlayerGetNotificationById()
{
    RequestMetadata.Identifier = FGuid::NewGuid();
    RequestMetadata.SimplifiedPath = GetSimplifiedPath();
}

FString FRequest_PlayerGetNotificationById::GetSimplifiedPath() const
{
    return FString(TEXT("/notification/v1/player/{player_uuid}/notification/{notification_id}"));
}

FString FRequest_PlayerGetNotificationById::ComputePath() const
{
    TMap<FString, FStringFormatArg> PathParams = { 
        { TEXT("notification_id"), ToStringFormatArg(NotificationId) },
        { TEXT("player_uuid"), ToStringFormatArg(PlayerUuid) }
    };

    FString Path = FString::Format(TEXT("/notification/v1/player/{player_uuid}/notification/{notification_id}"), PathParams);

    return Path;
}

bool FRequest_PlayerGetNotificationById::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
    static const TArray<FString> Consumes = {  };
    //static const TArray<FString> Produces = { TEXT("application/json") };

    HttpRequest->SetVerb(TEXT("GET"));

    if (!AuthContext)
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_PlayerGetNotificationById - missing auth context"));
        return false;
    }
    if (!AuthContext->AddBearerToken(HttpRequest))
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_PlayerGetNotificationById - failed to add bearer token"));
        return false;
    }

    if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json"))) // Default to Json Body request
    {
    }
    else if (Consumes.Contains(TEXT("multipart/form-data")))
    {
    }
    else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
    {
    }
    else
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_PlayerGetNotificationById - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
        return false;
    }

    return true;
}

void FResponse_PlayerGetNotificationById::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
    FResponse::SetHttpResponseCode(InHttpResponseCode);
    switch ((int)InHttpResponseCode)
    {
    case 200:
        SetResponseString(TEXT("Successful Response"));
        break;
    case 403:
        SetResponseString(TEXT("Forbidden"));
        break;
    case 404:
        SetResponseString(TEXT("Not Found"));
        break;
    case 422:
        SetResponseString(TEXT("Validation Error"));
        break;
    }
}

bool FResponse_PlayerGetNotificationById::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    return TryGetJsonValue(JsonValue, Content);
}

FResponse_PlayerGetNotificationById::FResponse_PlayerGetNotificationById(FRequestMetadata InRequestMetadata) :
    FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_PlayerGetNotificationById::Name = TEXT("PlayerGetNotificationById");

FHttpRequestPtr FPlayerNotificationAPI::PlayerGetNotificationByIdSelf(const FRequest_PlayerGetNotificationByIdSelf& Request, const FDelegate_PlayerGetNotificationByIdSelf& Delegate /*= FDelegate_PlayerGetNotificationByIdSelf()*/)
{
    if (!IsValid())
        return nullptr;

    FHttpRequestRef HttpRequest = CreateHttpRequest(Request);
    HttpRequest->SetURL(*(Url + Request.ComputePath()));

    for(const auto& It : AdditionalHeaderParams)
    {
        HttpRequest->SetHeader(It.Key, It.Value);
    }

    if (!Request.SetupHttpRequest(HttpRequest))
    {
        return nullptr;
    }
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &FPlayerNotificationAPI::OnPlayerGetNotificationByIdSelfResponse, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext());
    HttpRequest->ProcessRequest();
    OnRequestStarted().Broadcast(Request.GetRequestMetadata(), HttpRequest);
    return HttpRequest;
}

void FPlayerNotificationAPI::OnPlayerGetNotificationByIdSelfResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_PlayerGetNotificationByIdSelf Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry)
{
    if (AuthContextForRetry)
    {
        // An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
        // So, we set the callback to use a null context for the retry
        HttpRequest->OnProcessRequestComplete().BindRaw(this, &FPlayerNotificationAPI::OnPlayerGetNotificationByIdSelfResponse, Delegate, RequestMetadata, TSharedPtr<FAuthContext>());
    }

    FResponse_PlayerGetNotificationByIdSelf Response{ RequestMetadata };
    const bool bWillRetryWithRefreshedAuth = HandleResponse(HttpRequest, HttpResponse, bSucceeded, AuthContextForRetry, Response);
    OnRequestCompleted().Broadcast(Response, HttpRequest, HttpResponse, bSucceeded, bWillRetryWithRefreshedAuth);
    if (!bWillRetryWithRefreshedAuth)
    {
        Delegate.ExecuteIfBound(Response);
    }
}

FRequest_PlayerGetNotificationByIdSelf::FRequest_PlayerGetNotificationByIdSelf()
{
    RequestMetadata.Identifier = FGuid::NewGuid();
    RequestMetadata.SimplifiedPath = GetSimplifiedPath();
}

FString FRequest_PlayerGetNotificationByIdSelf::GetSimplifiedPath() const
{
    return FString(TEXT("/notification/v1/player/me/notification/{notification_id}"));
}

FString FRequest_PlayerGetNotificationByIdSelf::ComputePath() const
{
    TMap<FString, FStringFormatArg> PathParams = { 
        { TEXT("notification_id"), ToStringFormatArg(NotificationId) }
    };

    FString Path = FString::Format(TEXT("/notification/v1/player/me/notification/{notification_id}"), PathParams);

    return Path;
}

bool FRequest_PlayerGetNotificationByIdSelf::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
    static const TArray<FString> Consumes = {  };
    //static const TArray<FString> Produces = { TEXT("application/json") };

    HttpRequest->SetVerb(TEXT("GET"));

    if (!AuthContext)
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_PlayerGetNotificationByIdSelf - missing auth context"));
        return false;
    }
    if (!AuthContext->AddBearerToken(HttpRequest))
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_PlayerGetNotificationByIdSelf - failed to add bearer token"));
        return false;
    }

    if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json"))) // Default to Json Body request
    {
    }
    else if (Consumes.Contains(TEXT("multipart/form-data")))
    {
    }
    else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
    {
    }
    else
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_PlayerGetNotificationByIdSelf - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
        return false;
    }

    return true;
}

void FResponse_PlayerGetNotificationByIdSelf::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
    FResponse::SetHttpResponseCode(InHttpResponseCode);
    switch ((int)InHttpResponseCode)
    {
    case 200:
        SetResponseString(TEXT("Successful Response"));
        break;
    case 403:
        SetResponseString(TEXT("Forbidden"));
        break;
    case 404:
        SetResponseString(TEXT("Not Found"));
        break;
    case 422:
        SetResponseString(TEXT("Validation Error"));
        break;
    }
}

bool FResponse_PlayerGetNotificationByIdSelf::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    return TryGetJsonValue(JsonValue, Content);
}

FResponse_PlayerGetNotificationByIdSelf::FResponse_PlayerGetNotificationByIdSelf(FRequestMetadata InRequestMetadata) :
    FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_PlayerGetNotificationByIdSelf::Name = TEXT("PlayerGetNotificationByIdSelf");

FHttpRequestPtr FPlayerNotificationAPI::PlayerGetNotificationsPage(const FRequest_PlayerGetNotificationsPage& Request, const FDelegate_PlayerGetNotificationsPage& Delegate /*= FDelegate_PlayerGetNotificationsPage()*/)
{
    if (!IsValid())
        return nullptr;

    FHttpRequestRef HttpRequest = CreateHttpRequest(Request);
    HttpRequest->SetURL(*(Url + Request.ComputePath()));

    for(const auto& It : AdditionalHeaderParams)
    {
        HttpRequest->SetHeader(It.Key, It.Value);
    }

    if (!Request.SetupHttpRequest(HttpRequest))
    {
        return nullptr;
    }
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &FPlayerNotificationAPI::OnPlayerGetNotificationsPageResponse, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext());
    HttpRequest->ProcessRequest();
    OnRequestStarted().Broadcast(Request.GetRequestMetadata(), HttpRequest);
    return HttpRequest;
}

void FPlayerNotificationAPI::OnPlayerGetNotificationsPageResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_PlayerGetNotificationsPage Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry)
{
    if (AuthContextForRetry)
    {
        // An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
        // So, we set the callback to use a null context for the retry
        HttpRequest->OnProcessRequestComplete().BindRaw(this, &FPlayerNotificationAPI::OnPlayerGetNotificationsPageResponse, Delegate, RequestMetadata, TSharedPtr<FAuthContext>());
    }

    FResponse_PlayerGetNotificationsPage Response{ RequestMetadata };
    const bool bWillRetryWithRefreshedAuth = HandleResponse(HttpRequest, HttpResponse, bSucceeded, AuthContextForRetry, Response);
    OnRequestCompleted().Broadcast(Response, HttpRequest, HttpResponse, bSucceeded, bWillRetryWithRefreshedAuth);
    if (!bWillRetryWithRefreshedAuth)
    {
        Delegate.ExecuteIfBound(Response);
    }
}

FRequest_PlayerGetNotificationsPage::FRequest_PlayerGetNotificationsPage()
{
    RequestMetadata.Identifier = FGuid::NewGuid();
    RequestMetadata.SimplifiedPath = GetSimplifiedPath();
}

FString FRequest_PlayerGetNotificationsPage::GetSimplifiedPath() const
{
    return FString(TEXT("/notification/v1/player/{player_uuid}/notification"));
}

FString FRequest_PlayerGetNotificationsPage::ComputePath() const
{
    TMap<FString, FStringFormatArg> PathParams = { 
        { TEXT("player_uuid"), ToStringFormatArg(PlayerUuid) }
    };

    FString Path = FString::Format(TEXT("/notification/v1/player/{player_uuid}/notification"), PathParams);

    TArray<FString> QueryParams;
    if(PageSize.IsSet())
    {
        QueryParams.Add(FString(TEXT("page_size=")) + ToUrlString(PageSize.GetValue()));
    }
    if(StartAt.IsSet())
    {
        QueryParams.Add(FString(TEXT("start_at=")) + ToUrlString(StartAt.GetValue()));
    }
    if(ExcludeBefore.IsSet())
    {
        QueryParams.Add(FString(TEXT("exclude_before=")) + ToUrlString(ExcludeBefore.GetValue()));
    }
    Path += TCHAR('?');
    Path += FString::Join(QueryParams, TEXT("&"));

    return Path;
}

bool FRequest_PlayerGetNotificationsPage::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
    static const TArray<FString> Consumes = {  };
    //static const TArray<FString> Produces = { TEXT("application/json") };

    HttpRequest->SetVerb(TEXT("GET"));

    // Header parameters
    if (IfNoneMatch.IsSet())
    {
        HttpRequest->SetHeader(TEXT("if-none-match"), IfNoneMatch.GetValue());
    }

    if (!AuthContext)
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_PlayerGetNotificationsPage - missing auth context"));
        return false;
    }
    if (!AuthContext->AddBearerToken(HttpRequest))
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_PlayerGetNotificationsPage - failed to add bearer token"));
        return false;
    }

    if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json"))) // Default to Json Body request
    {
    }
    else if (Consumes.Contains(TEXT("multipart/form-data")))
    {
    }
    else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
    {
    }
    else
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_PlayerGetNotificationsPage - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
        return false;
    }

    return true;
}

void FResponse_PlayerGetNotificationsPage::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
    FResponse::SetHttpResponseCode(InHttpResponseCode);
    switch ((int)InHttpResponseCode)
    {
    case 200:
        SetResponseString(TEXT("Successful Response"));
        break;
    case 304:
        SetResponseString(TEXT("Not Modified"));
        break;
    case 403:
        SetResponseString(TEXT("Forbidden"));
        break;
    case 422:
        SetResponseString(TEXT("Validation Error"));
        break;
    }
}

bool FResponse_PlayerGetNotificationsPage::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    return TryGetJsonValue(JsonValue, Content);
}

FResponse_PlayerGetNotificationsPage::FResponse_PlayerGetNotificationsPage(FRequestMetadata InRequestMetadata) :
    FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_PlayerGetNotificationsPage::Name = TEXT("PlayerGetNotificationsPage");

FHttpRequestPtr FPlayerNotificationAPI::PlayerGetNotificationsPageSelf(const FRequest_PlayerGetNotificationsPageSelf& Request, const FDelegate_PlayerGetNotificationsPageSelf& Delegate /*= FDelegate_PlayerGetNotificationsPageSelf()*/)
{
    if (!IsValid())
        return nullptr;

    FHttpRequestRef HttpRequest = CreateHttpRequest(Request);
    HttpRequest->SetURL(*(Url + Request.ComputePath()));

    for(const auto& It : AdditionalHeaderParams)
    {
        HttpRequest->SetHeader(It.Key, It.Value);
    }

    if (!Request.SetupHttpRequest(HttpRequest))
    {
        return nullptr;
    }
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &FPlayerNotificationAPI::OnPlayerGetNotificationsPageSelfResponse, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext());
    HttpRequest->ProcessRequest();
    OnRequestStarted().Broadcast(Request.GetRequestMetadata(), HttpRequest);
    return HttpRequest;
}

void FPlayerNotificationAPI::OnPlayerGetNotificationsPageSelfResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_PlayerGetNotificationsPageSelf Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry)
{
    if (AuthContextForRetry)
    {
        // An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
        // So, we set the callback to use a null context for the retry
        HttpRequest->OnProcessRequestComplete().BindRaw(this, &FPlayerNotificationAPI::OnPlayerGetNotificationsPageSelfResponse, Delegate, RequestMetadata, TSharedPtr<FAuthContext>());
    }

    FResponse_PlayerGetNotificationsPageSelf Response{ RequestMetadata };
    const bool bWillRetryWithRefreshedAuth = HandleResponse(HttpRequest, HttpResponse, bSucceeded, AuthContextForRetry, Response);
    OnRequestCompleted().Broadcast(Response, HttpRequest, HttpResponse, bSucceeded, bWillRetryWithRefreshedAuth);
    if (!bWillRetryWithRefreshedAuth)
    {
        Delegate.ExecuteIfBound(Response);
    }
}

FRequest_PlayerGetNotificationsPageSelf::FRequest_PlayerGetNotificationsPageSelf()
{
    RequestMetadata.Identifier = FGuid::NewGuid();
    RequestMetadata.SimplifiedPath = GetSimplifiedPath();
}

FString FRequest_PlayerGetNotificationsPageSelf::GetSimplifiedPath() const
{
    return FString(TEXT("/notification/v1/player/me/notification"));
}

FString FRequest_PlayerGetNotificationsPageSelf::ComputePath() const
{
    FString Path = GetSimplifiedPath();
    TArray<FString> QueryParams;
    if(PageSize.IsSet())
    {
        QueryParams.Add(FString(TEXT("page_size=")) + ToUrlString(PageSize.GetValue()));
    }
    if(StartAt.IsSet())
    {
        QueryParams.Add(FString(TEXT("start_at=")) + ToUrlString(StartAt.GetValue()));
    }
    if(ExcludeBefore.IsSet())
    {
        QueryParams.Add(FString(TEXT("exclude_before=")) + ToUrlString(ExcludeBefore.GetValue()));
    }
    Path += TCHAR('?');
    Path += FString::Join(QueryParams, TEXT("&"));

    return Path;
}

bool FRequest_PlayerGetNotificationsPageSelf::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
    static const TArray<FString> Consumes = {  };
    //static const TArray<FString> Produces = { TEXT("application/json") };

    HttpRequest->SetVerb(TEXT("GET"));

    // Header parameters
    if (IfNoneMatch.IsSet())
    {
        HttpRequest->SetHeader(TEXT("if-none-match"), IfNoneMatch.GetValue());
    }

    if (!AuthContext)
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_PlayerGetNotificationsPageSelf - missing auth context"));
        return false;
    }
    if (!AuthContext->AddBearerToken(HttpRequest))
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_PlayerGetNotificationsPageSelf - failed to add bearer token"));
        return false;
    }

    if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json"))) // Default to Json Body request
    {
    }
    else if (Consumes.Contains(TEXT("multipart/form-data")))
    {
    }
    else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
    {
    }
    else
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_PlayerGetNotificationsPageSelf - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
        return false;
    }

    return true;
}

void FResponse_PlayerGetNotificationsPageSelf::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
    FResponse::SetHttpResponseCode(InHttpResponseCode);
    switch ((int)InHttpResponseCode)
    {
    case 200:
        SetResponseString(TEXT("Successful Response"));
        break;
    case 304:
        SetResponseString(TEXT("Not Modified"));
        break;
    case 403:
        SetResponseString(TEXT("Forbidden"));
        break;
    case 422:
        SetResponseString(TEXT("Validation Error"));
        break;
    }
}

bool FResponse_PlayerGetNotificationsPageSelf::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    return TryGetJsonValue(JsonValue, Content);
}

FResponse_PlayerGetNotificationsPageSelf::FResponse_PlayerGetNotificationsPageSelf(FRequestMetadata InRequestMetadata) :
    FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_PlayerGetNotificationsPageSelf::Name = TEXT("PlayerGetNotificationsPageSelf");

FHttpRequestPtr FPlayerNotificationAPI::PlayerLongPollForNotifications(const FRequest_PlayerLongPollForNotifications& Request, const FDelegate_PlayerLongPollForNotifications& Delegate /*= FDelegate_PlayerLongPollForNotifications()*/)
{
    if (!IsValid())
        return nullptr;

    FHttpRequestRef HttpRequest = CreateHttpRequest(Request);
    HttpRequest->SetURL(*(Url + Request.ComputePath()));

    for(const auto& It : AdditionalHeaderParams)
    {
        HttpRequest->SetHeader(It.Key, It.Value);
    }

    if (!Request.SetupHttpRequest(HttpRequest))
    {
        return nullptr;
    }
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &FPlayerNotificationAPI::OnPlayerLongPollForNotificationsResponse, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext());
    HttpRequest->ProcessRequest();
    OnRequestStarted().Broadcast(Request.GetRequestMetadata(), HttpRequest);
    return HttpRequest;
}

void FPlayerNotificationAPI::OnPlayerLongPollForNotificationsResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_PlayerLongPollForNotifications Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry)
{
    if (AuthContextForRetry)
    {
        // An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
        // So, we set the callback to use a null context for the retry
        HttpRequest->OnProcessRequestComplete().BindRaw(this, &FPlayerNotificationAPI::OnPlayerLongPollForNotificationsResponse, Delegate, RequestMetadata, TSharedPtr<FAuthContext>());
    }

    FResponse_PlayerLongPollForNotifications Response{ RequestMetadata };
    const bool bWillRetryWithRefreshedAuth = HandleResponse(HttpRequest, HttpResponse, bSucceeded, AuthContextForRetry, Response);
    OnRequestCompleted().Broadcast(Response, HttpRequest, HttpResponse, bSucceeded, bWillRetryWithRefreshedAuth);
    if (!bWillRetryWithRefreshedAuth)
    {
        Delegate.ExecuteIfBound(Response);
    }
}

FRequest_PlayerLongPollForNotifications::FRequest_PlayerLongPollForNotifications()
{
    RequestMetadata.Identifier = FGuid::NewGuid();
    RequestMetadata.SimplifiedPath = GetSimplifiedPath();
}

FString FRequest_PlayerLongPollForNotifications::GetSimplifiedPath() const
{
    return FString(TEXT("/notification/v1/player/{player_uuid}/stream/notification/lp"));
}

FString FRequest_PlayerLongPollForNotifications::ComputePath() const
{
    TMap<FString, FStringFormatArg> PathParams = { 
        { TEXT("player_uuid"), ToStringFormatArg(PlayerUuid) }
    };

    FString Path = FString::Format(TEXT("/notification/v1/player/{player_uuid}/stream/notification/lp"), PathParams);

    TArray<FString> QueryParams;
    if(MaxPageSize.IsSet())
    {
        QueryParams.Add(FString(TEXT("max_page_size=")) + ToUrlString(MaxPageSize.GetValue()));
    }
    if(ExcludeBefore.IsSet())
    {
        QueryParams.Add(FString(TEXT("exclude_before=")) + ToUrlString(ExcludeBefore.GetValue()));
    }
    if(OffsetResetStrategy.IsSet())
    {
        QueryParams.Add(FString(TEXT("offset_reset_strategy=")) + ToUrlString(OffsetResetStrategy.GetValue()));
    }
    if(Deadline.IsSet())
    {
        QueryParams.Add(FString(TEXT("deadline=")) + ToUrlString(Deadline.GetValue()));
    }
    Path += TCHAR('?');
    Path += FString::Join(QueryParams, TEXT("&"));

    return Path;
}

bool FRequest_PlayerLongPollForNotifications::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
    static const TArray<FString> Consumes = {  };
    //static const TArray<FString> Produces = { TEXT("application/json") };

    HttpRequest->SetVerb(TEXT("GET"));

    if (!AuthContext)
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_PlayerLongPollForNotifications - missing auth context"));
        return false;
    }
    if (!AuthContext->AddBearerToken(HttpRequest))
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_PlayerLongPollForNotifications - failed to add bearer token"));
        return false;
    }

    if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json"))) // Default to Json Body request
    {
    }
    else if (Consumes.Contains(TEXT("multipart/form-data")))
    {
    }
    else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
    {
    }
    else
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_PlayerLongPollForNotifications - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
        return false;
    }

    return true;
}

void FResponse_PlayerLongPollForNotifications::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
    FResponse::SetHttpResponseCode(InHttpResponseCode);
    switch ((int)InHttpResponseCode)
    {
    case 200:
        SetResponseString(TEXT("Successful Response"));
        break;
    case 403:
        SetResponseString(TEXT("Forbidden"));
        break;
    case 422:
        SetResponseString(TEXT("Validation Error"));
        break;
    }
}

bool FResponse_PlayerLongPollForNotifications::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    return TryGetJsonValue(JsonValue, Content);
}

FResponse_PlayerLongPollForNotifications::FResponse_PlayerLongPollForNotifications(FRequestMetadata InRequestMetadata) :
    FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_PlayerLongPollForNotifications::Name = TEXT("PlayerLongPollForNotifications");

FHttpRequestPtr FPlayerNotificationAPI::PlayerLongPollForNotificationsSelf(const FRequest_PlayerLongPollForNotificationsSelf& Request, const FDelegate_PlayerLongPollForNotificationsSelf& Delegate /*= FDelegate_PlayerLongPollForNotificationsSelf()*/)
{
    if (!IsValid())
        return nullptr;

    FHttpRequestRef HttpRequest = CreateHttpRequest(Request);
    HttpRequest->SetURL(*(Url + Request.ComputePath()));

    for(const auto& It : AdditionalHeaderParams)
    {
        HttpRequest->SetHeader(It.Key, It.Value);
    }

    if (!Request.SetupHttpRequest(HttpRequest))
    {
        return nullptr;
    }
    HttpRequest->OnProcessRequestComplete().BindRaw(this, &FPlayerNotificationAPI::OnPlayerLongPollForNotificationsSelfResponse, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext());
    HttpRequest->ProcessRequest();
    OnRequestStarted().Broadcast(Request.GetRequestMetadata(), HttpRequest);
    return HttpRequest;
}

void FPlayerNotificationAPI::OnPlayerLongPollForNotificationsSelfResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_PlayerLongPollForNotificationsSelf Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry)
{
    if (AuthContextForRetry)
    {
        // An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
        // So, we set the callback to use a null context for the retry
        HttpRequest->OnProcessRequestComplete().BindRaw(this, &FPlayerNotificationAPI::OnPlayerLongPollForNotificationsSelfResponse, Delegate, RequestMetadata, TSharedPtr<FAuthContext>());
    }

    FResponse_PlayerLongPollForNotificationsSelf Response{ RequestMetadata };
    const bool bWillRetryWithRefreshedAuth = HandleResponse(HttpRequest, HttpResponse, bSucceeded, AuthContextForRetry, Response);
    OnRequestCompleted().Broadcast(Response, HttpRequest, HttpResponse, bSucceeded, bWillRetryWithRefreshedAuth);
    if (!bWillRetryWithRefreshedAuth)
    {
        Delegate.ExecuteIfBound(Response);
    }
}

FRequest_PlayerLongPollForNotificationsSelf::FRequest_PlayerLongPollForNotificationsSelf()
{
    RequestMetadata.Identifier = FGuid::NewGuid();
    RequestMetadata.SimplifiedPath = GetSimplifiedPath();
}

FString FRequest_PlayerLongPollForNotificationsSelf::GetSimplifiedPath() const
{
    return FString(TEXT("/notification/v1/player/me/stream/notification/lp"));
}

FString FRequest_PlayerLongPollForNotificationsSelf::ComputePath() const
{
    FString Path = GetSimplifiedPath();
    TArray<FString> QueryParams;
    if(MaxPageSize.IsSet())
    {
        QueryParams.Add(FString(TEXT("max_page_size=")) + ToUrlString(MaxPageSize.GetValue()));
    }
    if(ExcludeBefore.IsSet())
    {
        QueryParams.Add(FString(TEXT("exclude_before=")) + ToUrlString(ExcludeBefore.GetValue()));
    }
    if(OffsetResetStrategy.IsSet())
    {
        QueryParams.Add(FString(TEXT("offset_reset_strategy=")) + ToUrlString(OffsetResetStrategy.GetValue()));
    }
    if(Deadline.IsSet())
    {
        QueryParams.Add(FString(TEXT("deadline=")) + ToUrlString(Deadline.GetValue()));
    }
    Path += TCHAR('?');
    Path += FString::Join(QueryParams, TEXT("&"));

    return Path;
}

bool FRequest_PlayerLongPollForNotificationsSelf::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
    static const TArray<FString> Consumes = {  };
    //static const TArray<FString> Produces = { TEXT("application/json") };

    HttpRequest->SetVerb(TEXT("GET"));

    if (!AuthContext)
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_PlayerLongPollForNotificationsSelf - missing auth context"));
        return false;
    }
    if (!AuthContext->AddBearerToken(HttpRequest))
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_PlayerLongPollForNotificationsSelf - failed to add bearer token"));
        return false;
    }

    if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json"))) // Default to Json Body request
    {
    }
    else if (Consumes.Contains(TEXT("multipart/form-data")))
    {
    }
    else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
    {
    }
    else
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_PlayerLongPollForNotificationsSelf - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
        return false;
    }

    return true;
}

void FResponse_PlayerLongPollForNotificationsSelf::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
    FResponse::SetHttpResponseCode(InHttpResponseCode);
    switch ((int)InHttpResponseCode)
    {
    case 200:
        SetResponseString(TEXT("Successful Response"));
        break;
    case 403:
        SetResponseString(TEXT("Forbidden"));
        break;
    case 422:
        SetResponseString(TEXT("Validation Error"));
        break;
    }
}

bool FResponse_PlayerLongPollForNotificationsSelf::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    return TryGetJsonValue(JsonValue, Content);
}

FResponse_PlayerLongPollForNotificationsSelf::FResponse_PlayerLongPollForNotificationsSelf(FRequestMetadata InRequestMetadata) :
    FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_PlayerLongPollForNotificationsSelf::Name = TEXT("PlayerLongPollForNotificationsSelf");


}
