// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#include "QueuesAPI.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIAuthContext.h"
#include "RallyHereAPIHttpRequester.h"
#include "HttpModule.h"
#include "Serialization/JsonSerializer.h"

namespace RallyHereAPI
{

FQueuesAPI::FQueuesAPI() : FAPI()
{
    Url = TEXT("http://localhost");
    Name = FName(TEXT("Queues"));
}

FQueuesAPI::~FQueuesAPI() {}

FHttpRequestPtr FQueuesAPI::GetAllMapGameInfo(const FRequest_GetAllMapGameInfo& Request, const FDelegate_GetAllMapGameInfo& Delegate /*= FDelegate_GetAllMapGameInfo()*/, int32 Priority /*= DefaultRallyHereAPIPriority*/)
{
    if (!IsValid())
        return nullptr;

    TSharedPtr<FRallyHereAPIHttpRequestData> RequestData = MakeShared<FRallyHereAPIHttpRequestData>(CreateHttpRequest(Request), *this, Priority);
    RequestData->HttpRequest->SetURL(*(Url + Request.ComputePath()));

    for(const auto& It : AdditionalHeaderParams)
    {
        RequestData->HttpRequest->SetHeader(It.Key, It.Value);
    }

    if (!Request.SetupHttpRequest(RequestData->HttpRequest))
    {
        return nullptr;
    }

    RequestData->SetMetadata(Request.GetRequestMetadata());

    FHttpRequestCompleteDelegate ResponseDelegate;
    ResponseDelegate.BindRaw(this, &FQueuesAPI::OnGetAllMapGameInfoResponse, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext(), Priority);
    RequestData->SetDelegate(ResponseDelegate);

    auto* HttpRequester = FRallyHereAPIHttpRequester::Get();
    if (HttpRequester)
    {
        HttpRequester->EnqueueHttpRequest(RequestData);
    }
    return RequestData->HttpRequest;
}

void FQueuesAPI::OnGetAllMapGameInfoResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetAllMapGameInfo Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority)
{
    FHttpRequestCompleteDelegate ResponseDelegate;

    if (AuthContextForRetry)
    {
        // An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
        // So, we set the callback to use a null context for the retry
        ResponseDelegate.BindRaw(this, &FQueuesAPI::OnGetAllMapGameInfoResponse, Delegate, RequestMetadata, TSharedPtr<FAuthContext>(), Priority);
    }

    FResponse_GetAllMapGameInfo Response{ RequestMetadata };
    const bool bWillRetryWithRefreshedAuth = HandleResponse(HttpRequest, HttpResponse, bSucceeded, AuthContextForRetry, Response, ResponseDelegate, RequestMetadata, Priority);

    {
        SCOPED_NAMED_EVENT(RallyHere_BroadcastRequestCompleted, FColor::Purple);
        OnRequestCompleted().Broadcast(Response, HttpRequest, HttpResponse, bSucceeded, bWillRetryWithRefreshedAuth);
    }

    if (!bWillRetryWithRefreshedAuth)
    {
        SCOPED_NAMED_EVENT(RallyHere_ExecuteDelegate, FColor::Purple);
        Delegate.ExecuteIfBound(Response);
    }
}

FRequest_GetAllMapGameInfo::FRequest_GetAllMapGameInfo()
{
    RequestMetadata.Identifier = FGuid::NewGuid();
    RequestMetadata.SimplifiedPath = GetSimplifiedPath();
    RequestMetadata.RetryCount = 0;
}

FName FRequest_GetAllMapGameInfo::GetSimplifiedPath() const
{
    static FName Path = FName(TEXT("/session/v1/instance-launch-templates/{instance_launch_template_id}"));
    return Path;
}

FString FRequest_GetAllMapGameInfo::ComputePath() const
{
    TMap<FString, FStringFormatArg> PathParams = { 
        { TEXT("instance_launch_template_id"), ToStringFormatArg(InstanceLaunchTemplateId) }
    };

    FString Path = FString::Format(TEXT("/session/v1/instance-launch-templates/{instance_launch_template_id}"), PathParams);

    return Path;
}

bool FRequest_GetAllMapGameInfo::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
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
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetAllMapGameInfo - missing auth context"));
        return false;
    }
    if (!AuthContext->AddBearerToken(HttpRequest))
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetAllMapGameInfo - failed to add bearer token"));
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
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetAllMapGameInfo - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
        return false;
    }

    return true;
}

void FResponse_GetAllMapGameInfo::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
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

bool FResponse_GetAllMapGameInfo::ParseHeaders()
{
    // The IHttpBase::GetHeader function doesn't distinguish between missing and empty, so we need to parse ourselves
    TMap<FString, FString> HeadersMap;
    for (const auto& HeaderStr : HttpResponse->GetAllHeaders())
    {
        int32 index;
        if (HeaderStr.FindChar(TEXT(':'), index))
        {
            HeadersMap.Add(HeaderStr.Mid(0, index), HeaderStr.Mid(index + 1));
        }
    }
    bool bParsedAllRequiredHeaders = true;
    if (const FString* Val = HeadersMap.Find(TEXT("ETag")))
    {
        ETag = *Val;
    }
    return bParsedAllRequiredHeaders;
}

bool FResponse_GetAllMapGameInfo::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    return TryGetJsonValue(JsonValue, Content);
}

FResponse_GetAllMapGameInfo::FResponse_GetAllMapGameInfo(FRequestMetadata InRequestMetadata) :
    FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_GetAllMapGameInfo::Name = TEXT("GetAllMapGameInfo");

FHttpRequestPtr FQueuesAPI::GetAllQueueInfo(const FRequest_GetAllQueueInfo& Request, const FDelegate_GetAllQueueInfo& Delegate /*= FDelegate_GetAllQueueInfo()*/, int32 Priority /*= DefaultRallyHereAPIPriority*/)
{
    if (!IsValid())
        return nullptr;

    TSharedPtr<FRallyHereAPIHttpRequestData> RequestData = MakeShared<FRallyHereAPIHttpRequestData>(CreateHttpRequest(Request), *this, Priority);
    RequestData->HttpRequest->SetURL(*(Url + Request.ComputePath()));

    for(const auto& It : AdditionalHeaderParams)
    {
        RequestData->HttpRequest->SetHeader(It.Key, It.Value);
    }

    if (!Request.SetupHttpRequest(RequestData->HttpRequest))
    {
        return nullptr;
    }

    RequestData->SetMetadata(Request.GetRequestMetadata());

    FHttpRequestCompleteDelegate ResponseDelegate;
    ResponseDelegate.BindRaw(this, &FQueuesAPI::OnGetAllQueueInfoResponse, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext(), Priority);
    RequestData->SetDelegate(ResponseDelegate);

    auto* HttpRequester = FRallyHereAPIHttpRequester::Get();
    if (HttpRequester)
    {
        HttpRequester->EnqueueHttpRequest(RequestData);
    }
    return RequestData->HttpRequest;
}

void FQueuesAPI::OnGetAllQueueInfoResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetAllQueueInfo Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority)
{
    FHttpRequestCompleteDelegate ResponseDelegate;

    if (AuthContextForRetry)
    {
        // An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
        // So, we set the callback to use a null context for the retry
        ResponseDelegate.BindRaw(this, &FQueuesAPI::OnGetAllQueueInfoResponse, Delegate, RequestMetadata, TSharedPtr<FAuthContext>(), Priority);
    }

    FResponse_GetAllQueueInfo Response{ RequestMetadata };
    const bool bWillRetryWithRefreshedAuth = HandleResponse(HttpRequest, HttpResponse, bSucceeded, AuthContextForRetry, Response, ResponseDelegate, RequestMetadata, Priority);

    {
        SCOPED_NAMED_EVENT(RallyHere_BroadcastRequestCompleted, FColor::Purple);
        OnRequestCompleted().Broadcast(Response, HttpRequest, HttpResponse, bSucceeded, bWillRetryWithRefreshedAuth);
    }

    if (!bWillRetryWithRefreshedAuth)
    {
        SCOPED_NAMED_EVENT(RallyHere_ExecuteDelegate, FColor::Purple);
        Delegate.ExecuteIfBound(Response);
    }
}

FRequest_GetAllQueueInfo::FRequest_GetAllQueueInfo()
{
    RequestMetadata.Identifier = FGuid::NewGuid();
    RequestMetadata.SimplifiedPath = GetSimplifiedPath();
    RequestMetadata.RetryCount = 0;
}

FName FRequest_GetAllQueueInfo::GetSimplifiedPath() const
{
    static FName Path = FName(TEXT("/session/v1/queues"));
    return Path;
}

FString FRequest_GetAllQueueInfo::ComputePath() const
{
    FString Path = GetSimplifiedPath().ToString();
    TArray<FString> QueryParams;
    if(Cursor.IsSet())
    {
        QueryParams.Add(FString(TEXT("cursor=")) + ToUrlString(Cursor.GetValue()));
    }
    if(PageSize.IsSet())
    {
        QueryParams.Add(FString(TEXT("page_size=")) + ToUrlString(PageSize.GetValue()));
    }
    Path += TCHAR('?');
    Path += FString::Join(QueryParams, TEXT("&"));

    return Path;
}

bool FRequest_GetAllQueueInfo::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
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
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetAllQueueInfo - missing auth context"));
        return false;
    }
    if (!AuthContext->AddBearerToken(HttpRequest))
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetAllQueueInfo - failed to add bearer token"));
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
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetAllQueueInfo - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
        return false;
    }

    return true;
}

void FResponse_GetAllQueueInfo::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
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

bool FResponse_GetAllQueueInfo::ParseHeaders()
{
    // The IHttpBase::GetHeader function doesn't distinguish between missing and empty, so we need to parse ourselves
    TMap<FString, FString> HeadersMap;
    for (const auto& HeaderStr : HttpResponse->GetAllHeaders())
    {
        int32 index;
        if (HeaderStr.FindChar(TEXT(':'), index))
        {
            HeadersMap.Add(HeaderStr.Mid(0, index), HeaderStr.Mid(index + 1));
        }
    }
    bool bParsedAllRequiredHeaders = true;
    if (const FString* Val = HeadersMap.Find(TEXT("ETag")))
    {
        ETag = *Val;
    }
    return bParsedAllRequiredHeaders;
}

bool FResponse_GetAllQueueInfo::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    return TryGetJsonValue(JsonValue, Content);
}

FResponse_GetAllQueueInfo::FResponse_GetAllQueueInfo(FRequestMetadata InRequestMetadata) :
    FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_GetAllQueueInfo::Name = TEXT("GetAllQueueInfo");

FHttpRequestPtr FQueuesAPI::GetAllQueueInfoV2(const FRequest_GetAllQueueInfoV2& Request, const FDelegate_GetAllQueueInfoV2& Delegate /*= FDelegate_GetAllQueueInfoV2()*/, int32 Priority /*= DefaultRallyHereAPIPriority*/)
{
    if (!IsValid())
        return nullptr;

    TSharedPtr<FRallyHereAPIHttpRequestData> RequestData = MakeShared<FRallyHereAPIHttpRequestData>(CreateHttpRequest(Request), *this, Priority);
    RequestData->HttpRequest->SetURL(*(Url + Request.ComputePath()));

    for(const auto& It : AdditionalHeaderParams)
    {
        RequestData->HttpRequest->SetHeader(It.Key, It.Value);
    }

    if (!Request.SetupHttpRequest(RequestData->HttpRequest))
    {
        return nullptr;
    }

    RequestData->SetMetadata(Request.GetRequestMetadata());

    FHttpRequestCompleteDelegate ResponseDelegate;
    ResponseDelegate.BindRaw(this, &FQueuesAPI::OnGetAllQueueInfoV2Response, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext(), Priority);
    RequestData->SetDelegate(ResponseDelegate);

    auto* HttpRequester = FRallyHereAPIHttpRequester::Get();
    if (HttpRequester)
    {
        HttpRequester->EnqueueHttpRequest(RequestData);
    }
    return RequestData->HttpRequest;
}

void FQueuesAPI::OnGetAllQueueInfoV2Response(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetAllQueueInfoV2 Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority)
{
    FHttpRequestCompleteDelegate ResponseDelegate;

    if (AuthContextForRetry)
    {
        // An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
        // So, we set the callback to use a null context for the retry
        ResponseDelegate.BindRaw(this, &FQueuesAPI::OnGetAllQueueInfoV2Response, Delegate, RequestMetadata, TSharedPtr<FAuthContext>(), Priority);
    }

    FResponse_GetAllQueueInfoV2 Response{ RequestMetadata };
    const bool bWillRetryWithRefreshedAuth = HandleResponse(HttpRequest, HttpResponse, bSucceeded, AuthContextForRetry, Response, ResponseDelegate, RequestMetadata, Priority);

    {
        SCOPED_NAMED_EVENT(RallyHere_BroadcastRequestCompleted, FColor::Purple);
        OnRequestCompleted().Broadcast(Response, HttpRequest, HttpResponse, bSucceeded, bWillRetryWithRefreshedAuth);
    }

    if (!bWillRetryWithRefreshedAuth)
    {
        SCOPED_NAMED_EVENT(RallyHere_ExecuteDelegate, FColor::Purple);
        Delegate.ExecuteIfBound(Response);
    }
}

FRequest_GetAllQueueInfoV2::FRequest_GetAllQueueInfoV2()
{
    RequestMetadata.Identifier = FGuid::NewGuid();
    RequestMetadata.SimplifiedPath = GetSimplifiedPath();
    RequestMetadata.RetryCount = 0;
}

FName FRequest_GetAllQueueInfoV2::GetSimplifiedPath() const
{
    static FName Path = FName(TEXT("/session/v2/queues"));
    return Path;
}

FString FRequest_GetAllQueueInfoV2::ComputePath() const
{
    FString Path = GetSimplifiedPath().ToString();
    TArray<FString> QueryParams;
    if(Cursor.IsSet())
    {
        QueryParams.Add(FString(TEXT("cursor=")) + ToUrlString(Cursor.GetValue()));
    }
    if(PageSize.IsSet())
    {
        QueryParams.Add(FString(TEXT("page_size=")) + ToUrlString(PageSize.GetValue()));
    }
    Path += TCHAR('?');
    Path += FString::Join(QueryParams, TEXT("&"));

    return Path;
}

bool FRequest_GetAllQueueInfoV2::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
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
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetAllQueueInfoV2 - missing auth context"));
        return false;
    }
    if (!AuthContext->AddBearerToken(HttpRequest))
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetAllQueueInfoV2 - failed to add bearer token"));
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
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetAllQueueInfoV2 - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
        return false;
    }

    return true;
}

void FResponse_GetAllQueueInfoV2::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
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

bool FResponse_GetAllQueueInfoV2::ParseHeaders()
{
    // The IHttpBase::GetHeader function doesn't distinguish between missing and empty, so we need to parse ourselves
    TMap<FString, FString> HeadersMap;
    for (const auto& HeaderStr : HttpResponse->GetAllHeaders())
    {
        int32 index;
        if (HeaderStr.FindChar(TEXT(':'), index))
        {
            HeadersMap.Add(HeaderStr.Mid(0, index), HeaderStr.Mid(index + 1));
        }
    }
    bool bParsedAllRequiredHeaders = true;
    if (const FString* Val = HeadersMap.Find(TEXT("ETag")))
    {
        ETag = *Val;
    }
    return bParsedAllRequiredHeaders;
}

bool FResponse_GetAllQueueInfoV2::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    return TryGetJsonValue(JsonValue, Content);
}

FResponse_GetAllQueueInfoV2::FResponse_GetAllQueueInfoV2(FRequestMetadata InRequestMetadata) :
    FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_GetAllQueueInfoV2::Name = TEXT("GetAllQueueInfoV2");

FHttpRequestPtr FQueuesAPI::GetInstanceRequestTemplate(const FRequest_GetInstanceRequestTemplate& Request, const FDelegate_GetInstanceRequestTemplate& Delegate /*= FDelegate_GetInstanceRequestTemplate()*/, int32 Priority /*= DefaultRallyHereAPIPriority*/)
{
    if (!IsValid())
        return nullptr;

    TSharedPtr<FRallyHereAPIHttpRequestData> RequestData = MakeShared<FRallyHereAPIHttpRequestData>(CreateHttpRequest(Request), *this, Priority);
    RequestData->HttpRequest->SetURL(*(Url + Request.ComputePath()));

    for(const auto& It : AdditionalHeaderParams)
    {
        RequestData->HttpRequest->SetHeader(It.Key, It.Value);
    }

    if (!Request.SetupHttpRequest(RequestData->HttpRequest))
    {
        return nullptr;
    }

    RequestData->SetMetadata(Request.GetRequestMetadata());

    FHttpRequestCompleteDelegate ResponseDelegate;
    ResponseDelegate.BindRaw(this, &FQueuesAPI::OnGetInstanceRequestTemplateResponse, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext(), Priority);
    RequestData->SetDelegate(ResponseDelegate);

    auto* HttpRequester = FRallyHereAPIHttpRequester::Get();
    if (HttpRequester)
    {
        HttpRequester->EnqueueHttpRequest(RequestData);
    }
    return RequestData->HttpRequest;
}

void FQueuesAPI::OnGetInstanceRequestTemplateResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetInstanceRequestTemplate Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority)
{
    FHttpRequestCompleteDelegate ResponseDelegate;

    if (AuthContextForRetry)
    {
        // An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
        // So, we set the callback to use a null context for the retry
        ResponseDelegate.BindRaw(this, &FQueuesAPI::OnGetInstanceRequestTemplateResponse, Delegate, RequestMetadata, TSharedPtr<FAuthContext>(), Priority);
    }

    FResponse_GetInstanceRequestTemplate Response{ RequestMetadata };
    const bool bWillRetryWithRefreshedAuth = HandleResponse(HttpRequest, HttpResponse, bSucceeded, AuthContextForRetry, Response, ResponseDelegate, RequestMetadata, Priority);

    {
        SCOPED_NAMED_EVENT(RallyHere_BroadcastRequestCompleted, FColor::Purple);
        OnRequestCompleted().Broadcast(Response, HttpRequest, HttpResponse, bSucceeded, bWillRetryWithRefreshedAuth);
    }

    if (!bWillRetryWithRefreshedAuth)
    {
        SCOPED_NAMED_EVENT(RallyHere_ExecuteDelegate, FColor::Purple);
        Delegate.ExecuteIfBound(Response);
    }
}

FRequest_GetInstanceRequestTemplate::FRequest_GetInstanceRequestTemplate()
{
    RequestMetadata.Identifier = FGuid::NewGuid();
    RequestMetadata.SimplifiedPath = GetSimplifiedPath();
    RequestMetadata.RetryCount = 0;
}

FName FRequest_GetInstanceRequestTemplate::GetSimplifiedPath() const
{
    static FName Path = FName(TEXT("/session/v1/instance-request-template/{instance_request_template_id}"));
    return Path;
}

FString FRequest_GetInstanceRequestTemplate::ComputePath() const
{
    TMap<FString, FStringFormatArg> PathParams = { 
        { TEXT("instance_request_template_id"), ToStringFormatArg(InstanceRequestTemplateId) }
    };

    FString Path = FString::Format(TEXT("/session/v1/instance-request-template/{instance_request_template_id}"), PathParams);

    return Path;
}

bool FRequest_GetInstanceRequestTemplate::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
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
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetInstanceRequestTemplate - missing auth context"));
        return false;
    }
    if (!AuthContext->AddBearerToken(HttpRequest))
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetInstanceRequestTemplate - failed to add bearer token"));
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
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetInstanceRequestTemplate - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
        return false;
    }

    return true;
}

void FResponse_GetInstanceRequestTemplate::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
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

bool FResponse_GetInstanceRequestTemplate::ParseHeaders()
{
    // The IHttpBase::GetHeader function doesn't distinguish between missing and empty, so we need to parse ourselves
    TMap<FString, FString> HeadersMap;
    for (const auto& HeaderStr : HttpResponse->GetAllHeaders())
    {
        int32 index;
        if (HeaderStr.FindChar(TEXT(':'), index))
        {
            HeadersMap.Add(HeaderStr.Mid(0, index), HeaderStr.Mid(index + 1));
        }
    }
    bool bParsedAllRequiredHeaders = true;
    if (const FString* Val = HeadersMap.Find(TEXT("ETag")))
    {
        ETag = *Val;
    }
    return bParsedAllRequiredHeaders;
}

bool FResponse_GetInstanceRequestTemplate::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    return TryGetJsonValue(JsonValue, Content);
}

FResponse_GetInstanceRequestTemplate::FResponse_GetInstanceRequestTemplate(FRequestMetadata InRequestMetadata) :
    FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_GetInstanceRequestTemplate::Name = TEXT("GetInstanceRequestTemplate");

FHttpRequestPtr FQueuesAPI::GetMatchMakingTemplates(const FRequest_GetMatchMakingTemplates& Request, const FDelegate_GetMatchMakingTemplates& Delegate /*= FDelegate_GetMatchMakingTemplates()*/, int32 Priority /*= DefaultRallyHereAPIPriority*/)
{
    if (!IsValid())
        return nullptr;

    TSharedPtr<FRallyHereAPIHttpRequestData> RequestData = MakeShared<FRallyHereAPIHttpRequestData>(CreateHttpRequest(Request), *this, Priority);
    RequestData->HttpRequest->SetURL(*(Url + Request.ComputePath()));

    for(const auto& It : AdditionalHeaderParams)
    {
        RequestData->HttpRequest->SetHeader(It.Key, It.Value);
    }

    if (!Request.SetupHttpRequest(RequestData->HttpRequest))
    {
        return nullptr;
    }

    RequestData->SetMetadata(Request.GetRequestMetadata());

    FHttpRequestCompleteDelegate ResponseDelegate;
    ResponseDelegate.BindRaw(this, &FQueuesAPI::OnGetMatchMakingTemplatesResponse, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext(), Priority);
    RequestData->SetDelegate(ResponseDelegate);

    auto* HttpRequester = FRallyHereAPIHttpRequester::Get();
    if (HttpRequester)
    {
        HttpRequester->EnqueueHttpRequest(RequestData);
    }
    return RequestData->HttpRequest;
}

void FQueuesAPI::OnGetMatchMakingTemplatesResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetMatchMakingTemplates Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority)
{
    FHttpRequestCompleteDelegate ResponseDelegate;

    if (AuthContextForRetry)
    {
        // An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
        // So, we set the callback to use a null context for the retry
        ResponseDelegate.BindRaw(this, &FQueuesAPI::OnGetMatchMakingTemplatesResponse, Delegate, RequestMetadata, TSharedPtr<FAuthContext>(), Priority);
    }

    FResponse_GetMatchMakingTemplates Response{ RequestMetadata };
    const bool bWillRetryWithRefreshedAuth = HandleResponse(HttpRequest, HttpResponse, bSucceeded, AuthContextForRetry, Response, ResponseDelegate, RequestMetadata, Priority);

    {
        SCOPED_NAMED_EVENT(RallyHere_BroadcastRequestCompleted, FColor::Purple);
        OnRequestCompleted().Broadcast(Response, HttpRequest, HttpResponse, bSucceeded, bWillRetryWithRefreshedAuth);
    }

    if (!bWillRetryWithRefreshedAuth)
    {
        SCOPED_NAMED_EVENT(RallyHere_ExecuteDelegate, FColor::Purple);
        Delegate.ExecuteIfBound(Response);
    }
}

FRequest_GetMatchMakingTemplates::FRequest_GetMatchMakingTemplates()
{
    RequestMetadata.Identifier = FGuid::NewGuid();
    RequestMetadata.SimplifiedPath = GetSimplifiedPath();
    RequestMetadata.RetryCount = 0;
}

FName FRequest_GetMatchMakingTemplates::GetSimplifiedPath() const
{
    static FName Path = FName(TEXT("/session/v1/match-making-templates/{template_group_id}"));
    return Path;
}

FString FRequest_GetMatchMakingTemplates::ComputePath() const
{
    TMap<FString, FStringFormatArg> PathParams = { 
        { TEXT("template_group_id"), ToStringFormatArg(TemplateGroupId) }
    };

    FString Path = FString::Format(TEXT("/session/v1/match-making-templates/{template_group_id}"), PathParams);

    return Path;
}

bool FRequest_GetMatchMakingTemplates::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
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
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetMatchMakingTemplates - missing auth context"));
        return false;
    }
    if (!AuthContext->AddBearerToken(HttpRequest))
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetMatchMakingTemplates - failed to add bearer token"));
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
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetMatchMakingTemplates - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
        return false;
    }

    return true;
}

void FResponse_GetMatchMakingTemplates::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
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

bool FResponse_GetMatchMakingTemplates::ParseHeaders()
{
    // The IHttpBase::GetHeader function doesn't distinguish between missing and empty, so we need to parse ourselves
    TMap<FString, FString> HeadersMap;
    for (const auto& HeaderStr : HttpResponse->GetAllHeaders())
    {
        int32 index;
        if (HeaderStr.FindChar(TEXT(':'), index))
        {
            HeadersMap.Add(HeaderStr.Mid(0, index), HeaderStr.Mid(index + 1));
        }
    }
    bool bParsedAllRequiredHeaders = true;
    if (const FString* Val = HeadersMap.Find(TEXT("ETag")))
    {
        ETag = *Val;
    }
    return bParsedAllRequiredHeaders;
}

bool FResponse_GetMatchMakingTemplates::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    return TryGetJsonValue(JsonValue, Content);
}

FResponse_GetMatchMakingTemplates::FResponse_GetMatchMakingTemplates(FRequestMetadata InRequestMetadata) :
    FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_GetMatchMakingTemplates::Name = TEXT("GetMatchMakingTemplates");

FHttpRequestPtr FQueuesAPI::GetMatchMakingTemplatesV2(const FRequest_GetMatchMakingTemplatesV2& Request, const FDelegate_GetMatchMakingTemplatesV2& Delegate /*= FDelegate_GetMatchMakingTemplatesV2()*/, int32 Priority /*= DefaultRallyHereAPIPriority*/)
{
    if (!IsValid())
        return nullptr;

    TSharedPtr<FRallyHereAPIHttpRequestData> RequestData = MakeShared<FRallyHereAPIHttpRequestData>(CreateHttpRequest(Request), *this, Priority);
    RequestData->HttpRequest->SetURL(*(Url + Request.ComputePath()));

    for(const auto& It : AdditionalHeaderParams)
    {
        RequestData->HttpRequest->SetHeader(It.Key, It.Value);
    }

    if (!Request.SetupHttpRequest(RequestData->HttpRequest))
    {
        return nullptr;
    }

    RequestData->SetMetadata(Request.GetRequestMetadata());

    FHttpRequestCompleteDelegate ResponseDelegate;
    ResponseDelegate.BindRaw(this, &FQueuesAPI::OnGetMatchMakingTemplatesV2Response, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext(), Priority);
    RequestData->SetDelegate(ResponseDelegate);

    auto* HttpRequester = FRallyHereAPIHttpRequester::Get();
    if (HttpRequester)
    {
        HttpRequester->EnqueueHttpRequest(RequestData);
    }
    return RequestData->HttpRequest;
}

void FQueuesAPI::OnGetMatchMakingTemplatesV2Response(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetMatchMakingTemplatesV2 Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority)
{
    FHttpRequestCompleteDelegate ResponseDelegate;

    if (AuthContextForRetry)
    {
        // An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
        // So, we set the callback to use a null context for the retry
        ResponseDelegate.BindRaw(this, &FQueuesAPI::OnGetMatchMakingTemplatesV2Response, Delegate, RequestMetadata, TSharedPtr<FAuthContext>(), Priority);
    }

    FResponse_GetMatchMakingTemplatesV2 Response{ RequestMetadata };
    const bool bWillRetryWithRefreshedAuth = HandleResponse(HttpRequest, HttpResponse, bSucceeded, AuthContextForRetry, Response, ResponseDelegate, RequestMetadata, Priority);

    {
        SCOPED_NAMED_EVENT(RallyHere_BroadcastRequestCompleted, FColor::Purple);
        OnRequestCompleted().Broadcast(Response, HttpRequest, HttpResponse, bSucceeded, bWillRetryWithRefreshedAuth);
    }

    if (!bWillRetryWithRefreshedAuth)
    {
        SCOPED_NAMED_EVENT(RallyHere_ExecuteDelegate, FColor::Purple);
        Delegate.ExecuteIfBound(Response);
    }
}

FRequest_GetMatchMakingTemplatesV2::FRequest_GetMatchMakingTemplatesV2()
{
    RequestMetadata.Identifier = FGuid::NewGuid();
    RequestMetadata.SimplifiedPath = GetSimplifiedPath();
    RequestMetadata.RetryCount = 0;
}

FName FRequest_GetMatchMakingTemplatesV2::GetSimplifiedPath() const
{
    static FName Path = FName(TEXT("/session/v2/match-making-templates/{template_group_id}"));
    return Path;
}

FString FRequest_GetMatchMakingTemplatesV2::ComputePath() const
{
    TMap<FString, FStringFormatArg> PathParams = { 
        { TEXT("template_group_id"), ToStringFormatArg(TemplateGroupId) }
    };

    FString Path = FString::Format(TEXT("/session/v2/match-making-templates/{template_group_id}"), PathParams);

    return Path;
}

bool FRequest_GetMatchMakingTemplatesV2::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
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
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetMatchMakingTemplatesV2 - missing auth context"));
        return false;
    }
    if (!AuthContext->AddBearerToken(HttpRequest))
    {
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetMatchMakingTemplatesV2 - failed to add bearer token"));
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
        UE_LOG(LogRallyHereAPI, Error, TEXT("FRequest_GetMatchMakingTemplatesV2 - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
        return false;
    }

    return true;
}

void FResponse_GetMatchMakingTemplatesV2::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
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

bool FResponse_GetMatchMakingTemplatesV2::ParseHeaders()
{
    // The IHttpBase::GetHeader function doesn't distinguish between missing and empty, so we need to parse ourselves
    TMap<FString, FString> HeadersMap;
    for (const auto& HeaderStr : HttpResponse->GetAllHeaders())
    {
        int32 index;
        if (HeaderStr.FindChar(TEXT(':'), index))
        {
            HeadersMap.Add(HeaderStr.Mid(0, index), HeaderStr.Mid(index + 1));
        }
    }
    bool bParsedAllRequiredHeaders = true;
    if (const FString* Val = HeadersMap.Find(TEXT("ETag")))
    {
        ETag = *Val;
    }
    return bParsedAllRequiredHeaders;
}

bool FResponse_GetMatchMakingTemplatesV2::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    return TryGetJsonValue(JsonValue, Content);
}

FResponse_GetMatchMakingTemplatesV2::FResponse_GetMatchMakingTemplatesV2(FRequestMetadata InRequestMetadata) :
    FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_GetMatchMakingTemplatesV2::Name = TEXT("GetMatchMakingTemplatesV2");


}
