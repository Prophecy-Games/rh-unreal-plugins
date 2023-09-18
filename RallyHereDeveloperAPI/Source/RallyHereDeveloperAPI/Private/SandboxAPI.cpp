// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#include "SandboxAPI.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIAuthContext.h"
#include "RallyHereDeveloperAPIHttpRequester.h"
#include "HttpModule.h"
#include "Serialization/JsonSerializer.h"

namespace RallyHereDeveloperAPI
{

FSandboxAPI::FSandboxAPI() : FAPI()
{
    Url = TEXT("/api");
    Name = FName(TEXT("Sandbox"));
}

FSandboxAPI::~FSandboxAPI() {}

FHttpRequestPtr FSandboxAPI::CreateSandbox(const FRequest_CreateSandbox& Request, const FDelegate_CreateSandbox& Delegate /*= FDelegate_CreateSandbox()*/, int32 Priority /*= DefaultRallyHereDeveloperAPIPriority*/)
{
    if (!IsValid())
        return nullptr;

    TSharedPtr<FRallyHereDeveloperAPIHttpRequestData> RequestData = MakeShared<FRallyHereDeveloperAPIHttpRequestData>(CreateHttpRequest(Request), *this, Priority);
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
    ResponseDelegate.BindRaw(this, &FSandboxAPI::OnCreateSandboxResponse, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext(), Priority);
    RequestData->SetDelegate(ResponseDelegate);

    auto* HttpRequester = FRallyHereDeveloperAPIHttpRequester::Get();
    if (HttpRequester)
    {
        HttpRequester->EnqueueHttpRequest(RequestData);
    }
    return RequestData->HttpRequest;
}

void FSandboxAPI::OnCreateSandboxResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_CreateSandbox Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority)
{
    FHttpRequestCompleteDelegate ResponseDelegate;

    if (AuthContextForRetry)
    {
        // An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
        // So, we set the callback to use a null context for the retry
        ResponseDelegate.BindRaw(this, &FSandboxAPI::OnCreateSandboxResponse, Delegate, RequestMetadata, TSharedPtr<FAuthContext>(), Priority);
    }

    FResponse_CreateSandbox Response{ RequestMetadata };
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

FRequest_CreateSandbox::FRequest_CreateSandbox()
{
    RequestMetadata.Identifier = FGuid::NewGuid();
    RequestMetadata.SimplifiedPath = GetSimplifiedPath();
    RequestMetadata.RetryCount = 0;
}

FName FRequest_CreateSandbox::GetSimplifiedPath() const
{
    static FName Path = FName(TEXT("/v1/org/{org_identifier}/product/{product_identifier}/sandbox"));
    return Path;
}

FString FRequest_CreateSandbox::ComputePath() const
{
    TMap<FString, FStringFormatArg> PathParams = { 
        { TEXT("org_identifier"), ToStringFormatArg(OrgIdentifier) },
        { TEXT("product_identifier"), ToStringFormatArg(ProductIdentifier) }
    };

    FString Path = FString::Format(TEXT("/v1/org/{org_identifier}/product/{product_identifier}/sandbox"), PathParams);

    return Path;
}

bool FRequest_CreateSandbox::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
    static const TArray<FString> Consumes = { TEXT("application/json") };
    //static const TArray<FString> Produces = { TEXT("application/json") };

    HttpRequest->SetVerb(TEXT("POST"));

    if (!AuthContext)
    {
        UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("FRequest_CreateSandbox - missing auth context"));
        return false;
    }
    if (!AuthContext->AddBearerToken(HttpRequest))
    {
        UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("FRequest_CreateSandbox - failed to add bearer token"));
        return false;
    }

    if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json"))) // Default to Json Body request
    {
        // Body parameters
        FString JsonBody;
        TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&JsonBody);

        WriteJsonValue(Writer, SandboxRequest);
        Writer->Close();

        HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
        HttpRequest->SetContentAsString(JsonBody);
    }
    else if (Consumes.Contains(TEXT("multipart/form-data")))
    {
        UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("FRequest_CreateSandbox - Body parameter (FRHAPI_DevSandboxRequest) was ignored, not supported in multipart form"));
    }
    else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
    {
        UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("FRequest_CreateSandbox - Body parameter (FRHAPI_DevSandboxRequest) was ignored, not supported in urlencoded requests"));
    }
    else
    {
        UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("FRequest_CreateSandbox - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
        return false;
    }

    return true;
}

void FResponse_CreateSandbox::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
    FResponse::SetHttpResponseCode(InHttpResponseCode);
    switch ((int)InHttpResponseCode)
    {
    case 200:
        SetResponseString(TEXT("Successful Response"));
        break;
    case 404:
        SetResponseString(TEXT("Not Found"));
        break;
    case 422:
        SetResponseString(TEXT("Validation Error"));
        break;
    }
}

bool FResponse_CreateSandbox::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    return TryGetJsonValue(JsonValue, Content);
}

FResponse_CreateSandbox::FResponse_CreateSandbox(FRequestMetadata InRequestMetadata) :
    FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_CreateSandbox::Name = TEXT("CreateSandbox");

FHttpRequestPtr FSandboxAPI::DeleteSandbox(const FRequest_DeleteSandbox& Request, const FDelegate_DeleteSandbox& Delegate /*= FDelegate_DeleteSandbox()*/, int32 Priority /*= DefaultRallyHereDeveloperAPIPriority*/)
{
    if (!IsValid())
        return nullptr;

    TSharedPtr<FRallyHereDeveloperAPIHttpRequestData> RequestData = MakeShared<FRallyHereDeveloperAPIHttpRequestData>(CreateHttpRequest(Request), *this, Priority);
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
    ResponseDelegate.BindRaw(this, &FSandboxAPI::OnDeleteSandboxResponse, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext(), Priority);
    RequestData->SetDelegate(ResponseDelegate);

    auto* HttpRequester = FRallyHereDeveloperAPIHttpRequester::Get();
    if (HttpRequester)
    {
        HttpRequester->EnqueueHttpRequest(RequestData);
    }
    return RequestData->HttpRequest;
}

void FSandboxAPI::OnDeleteSandboxResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_DeleteSandbox Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority)
{
    FHttpRequestCompleteDelegate ResponseDelegate;

    if (AuthContextForRetry)
    {
        // An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
        // So, we set the callback to use a null context for the retry
        ResponseDelegate.BindRaw(this, &FSandboxAPI::OnDeleteSandboxResponse, Delegate, RequestMetadata, TSharedPtr<FAuthContext>(), Priority);
    }

    FResponse_DeleteSandbox Response{ RequestMetadata };
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

FRequest_DeleteSandbox::FRequest_DeleteSandbox()
{
    RequestMetadata.Identifier = FGuid::NewGuid();
    RequestMetadata.SimplifiedPath = GetSimplifiedPath();
    RequestMetadata.RetryCount = 0;
}

FName FRequest_DeleteSandbox::GetSimplifiedPath() const
{
    static FName Path = FName(TEXT("/v1/org/{org_identifier}/product/{product_identifier}/sandbox/{sandbox_identifier}"));
    return Path;
}

FString FRequest_DeleteSandbox::ComputePath() const
{
    TMap<FString, FStringFormatArg> PathParams = { 
        { TEXT("org_identifier"), ToStringFormatArg(OrgIdentifier) },
        { TEXT("product_identifier"), ToStringFormatArg(ProductIdentifier) },
        { TEXT("sandbox_identifier"), ToStringFormatArg(SandboxIdentifier) }
    };

    FString Path = FString::Format(TEXT("/v1/org/{org_identifier}/product/{product_identifier}/sandbox/{sandbox_identifier}"), PathParams);

    return Path;
}

bool FRequest_DeleteSandbox::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
    static const TArray<FString> Consumes = {  };
    //static const TArray<FString> Produces = { TEXT("application/json") };

    HttpRequest->SetVerb(TEXT("DELETE"));

    if (!AuthContext)
    {
        UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("FRequest_DeleteSandbox - missing auth context"));
        return false;
    }
    if (!AuthContext->AddBearerToken(HttpRequest))
    {
        UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("FRequest_DeleteSandbox - failed to add bearer token"));
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
        UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("FRequest_DeleteSandbox - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
        return false;
    }

    return true;
}

void FResponse_DeleteSandbox::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
    FResponse::SetHttpResponseCode(InHttpResponseCode);
    switch ((int)InHttpResponseCode)
    {
    case 200:
        SetResponseString(TEXT("Successful Response"));
        break;
    case 404:
        SetResponseString(TEXT("Not Found"));
        break;
    case 422:
        SetResponseString(TEXT("Validation Error"));
        break;
    }
}

bool FResponse_DeleteSandbox::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    return TryGetJsonValue(JsonValue, Content);
}

FResponse_DeleteSandbox::FResponse_DeleteSandbox(FRequestMetadata InRequestMetadata) :
    FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_DeleteSandbox::Name = TEXT("DeleteSandbox");

FHttpRequestPtr FSandboxAPI::GetOrgProductSandbox(const FRequest_GetOrgProductSandbox& Request, const FDelegate_GetOrgProductSandbox& Delegate /*= FDelegate_GetOrgProductSandbox()*/, int32 Priority /*= DefaultRallyHereDeveloperAPIPriority*/)
{
    if (!IsValid())
        return nullptr;

    TSharedPtr<FRallyHereDeveloperAPIHttpRequestData> RequestData = MakeShared<FRallyHereDeveloperAPIHttpRequestData>(CreateHttpRequest(Request), *this, Priority);
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
    ResponseDelegate.BindRaw(this, &FSandboxAPI::OnGetOrgProductSandboxResponse, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext(), Priority);
    RequestData->SetDelegate(ResponseDelegate);

    auto* HttpRequester = FRallyHereDeveloperAPIHttpRequester::Get();
    if (HttpRequester)
    {
        HttpRequester->EnqueueHttpRequest(RequestData);
    }
    return RequestData->HttpRequest;
}

void FSandboxAPI::OnGetOrgProductSandboxResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetOrgProductSandbox Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority)
{
    FHttpRequestCompleteDelegate ResponseDelegate;

    if (AuthContextForRetry)
    {
        // An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
        // So, we set the callback to use a null context for the retry
        ResponseDelegate.BindRaw(this, &FSandboxAPI::OnGetOrgProductSandboxResponse, Delegate, RequestMetadata, TSharedPtr<FAuthContext>(), Priority);
    }

    FResponse_GetOrgProductSandbox Response{ RequestMetadata };
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

FRequest_GetOrgProductSandbox::FRequest_GetOrgProductSandbox()
{
    RequestMetadata.Identifier = FGuid::NewGuid();
    RequestMetadata.SimplifiedPath = GetSimplifiedPath();
    RequestMetadata.RetryCount = 0;
}

FName FRequest_GetOrgProductSandbox::GetSimplifiedPath() const
{
    static FName Path = FName(TEXT("/v1/org/{org_identifier}/product/{product_identifier}/sandbox/{sandbox_identifier}"));
    return Path;
}

FString FRequest_GetOrgProductSandbox::ComputePath() const
{
    TMap<FString, FStringFormatArg> PathParams = { 
        { TEXT("org_identifier"), ToStringFormatArg(OrgIdentifier) },
        { TEXT("product_identifier"), ToStringFormatArg(ProductIdentifier) },
        { TEXT("sandbox_identifier"), ToStringFormatArg(SandboxIdentifier) }
    };

    FString Path = FString::Format(TEXT("/v1/org/{org_identifier}/product/{product_identifier}/sandbox/{sandbox_identifier}"), PathParams);

    return Path;
}

bool FRequest_GetOrgProductSandbox::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
    static const TArray<FString> Consumes = {  };
    //static const TArray<FString> Produces = { TEXT("application/json") };

    HttpRequest->SetVerb(TEXT("GET"));

    if (!AuthContext)
    {
        UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("FRequest_GetOrgProductSandbox - missing auth context"));
        return false;
    }
    if (!AuthContext->AddBearerToken(HttpRequest))
    {
        UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("FRequest_GetOrgProductSandbox - failed to add bearer token"));
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
        UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("FRequest_GetOrgProductSandbox - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
        return false;
    }

    return true;
}

void FResponse_GetOrgProductSandbox::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
    FResponse::SetHttpResponseCode(InHttpResponseCode);
    switch ((int)InHttpResponseCode)
    {
    case 200:
        SetResponseString(TEXT("Successful Response"));
        break;
    case 422:
        SetResponseString(TEXT("Validation Error"));
        break;
    }
}

bool FResponse_GetOrgProductSandbox::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    return TryGetJsonValue(JsonValue, Content);
}

FResponse_GetOrgProductSandbox::FResponse_GetOrgProductSandbox(FRequestMetadata InRequestMetadata) :
    FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_GetOrgProductSandbox::Name = TEXT("GetOrgProductSandbox");

FHttpRequestPtr FSandboxAPI::GetOrgProductSandboxes(const FRequest_GetOrgProductSandboxes& Request, const FDelegate_GetOrgProductSandboxes& Delegate /*= FDelegate_GetOrgProductSandboxes()*/, int32 Priority /*= DefaultRallyHereDeveloperAPIPriority*/)
{
    if (!IsValid())
        return nullptr;

    TSharedPtr<FRallyHereDeveloperAPIHttpRequestData> RequestData = MakeShared<FRallyHereDeveloperAPIHttpRequestData>(CreateHttpRequest(Request), *this, Priority);
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
    ResponseDelegate.BindRaw(this, &FSandboxAPI::OnGetOrgProductSandboxesResponse, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext(), Priority);
    RequestData->SetDelegate(ResponseDelegate);

    auto* HttpRequester = FRallyHereDeveloperAPIHttpRequester::Get();
    if (HttpRequester)
    {
        HttpRequester->EnqueueHttpRequest(RequestData);
    }
    return RequestData->HttpRequest;
}

void FSandboxAPI::OnGetOrgProductSandboxesResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetOrgProductSandboxes Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority)
{
    FHttpRequestCompleteDelegate ResponseDelegate;

    if (AuthContextForRetry)
    {
        // An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
        // So, we set the callback to use a null context for the retry
        ResponseDelegate.BindRaw(this, &FSandboxAPI::OnGetOrgProductSandboxesResponse, Delegate, RequestMetadata, TSharedPtr<FAuthContext>(), Priority);
    }

    FResponse_GetOrgProductSandboxes Response{ RequestMetadata };
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

FRequest_GetOrgProductSandboxes::FRequest_GetOrgProductSandboxes()
{
    RequestMetadata.Identifier = FGuid::NewGuid();
    RequestMetadata.SimplifiedPath = GetSimplifiedPath();
    RequestMetadata.RetryCount = 0;
}

FName FRequest_GetOrgProductSandboxes::GetSimplifiedPath() const
{
    static FName Path = FName(TEXT("/v1/org/{org_identifier}/product/{product_identifier}/sandboxes"));
    return Path;
}

FString FRequest_GetOrgProductSandboxes::ComputePath() const
{
    TMap<FString, FStringFormatArg> PathParams = { 
        { TEXT("org_identifier"), ToStringFormatArg(OrgIdentifier) },
        { TEXT("product_identifier"), ToStringFormatArg(ProductIdentifier) }
    };

    FString Path = FString::Format(TEXT("/v1/org/{org_identifier}/product/{product_identifier}/sandboxes"), PathParams);

    return Path;
}

bool FRequest_GetOrgProductSandboxes::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
    static const TArray<FString> Consumes = {  };
    //static const TArray<FString> Produces = { TEXT("application/json") };

    HttpRequest->SetVerb(TEXT("GET"));

    if (!AuthContext)
    {
        UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("FRequest_GetOrgProductSandboxes - missing auth context"));
        return false;
    }
    if (!AuthContext->AddBearerToken(HttpRequest))
    {
        UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("FRequest_GetOrgProductSandboxes - failed to add bearer token"));
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
        UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("FRequest_GetOrgProductSandboxes - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
        return false;
    }

    return true;
}

void FResponse_GetOrgProductSandboxes::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
    FResponse::SetHttpResponseCode(InHttpResponseCode);
    switch ((int)InHttpResponseCode)
    {
    case 200:
        SetResponseString(TEXT("Successful Response"));
        break;
    case 422:
        SetResponseString(TEXT("Validation Error"));
        break;
    }
}

bool FResponse_GetOrgProductSandboxes::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    return TryGetJsonValue(JsonValue, Content);
}

FResponse_GetOrgProductSandboxes::FResponse_GetOrgProductSandboxes(FRequestMetadata InRequestMetadata) :
    FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_GetOrgProductSandboxes::Name = TEXT("GetOrgProductSandboxes");

FHttpRequestPtr FSandboxAPI::UpdateSandbox(const FRequest_UpdateSandbox& Request, const FDelegate_UpdateSandbox& Delegate /*= FDelegate_UpdateSandbox()*/, int32 Priority /*= DefaultRallyHereDeveloperAPIPriority*/)
{
    if (!IsValid())
        return nullptr;

    TSharedPtr<FRallyHereDeveloperAPIHttpRequestData> RequestData = MakeShared<FRallyHereDeveloperAPIHttpRequestData>(CreateHttpRequest(Request), *this, Priority);
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
    ResponseDelegate.BindRaw(this, &FSandboxAPI::OnUpdateSandboxResponse, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext(), Priority);
    RequestData->SetDelegate(ResponseDelegate);

    auto* HttpRequester = FRallyHereDeveloperAPIHttpRequester::Get();
    if (HttpRequester)
    {
        HttpRequester->EnqueueHttpRequest(RequestData);
    }
    return RequestData->HttpRequest;
}

void FSandboxAPI::OnUpdateSandboxResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_UpdateSandbox Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority)
{
    FHttpRequestCompleteDelegate ResponseDelegate;

    if (AuthContextForRetry)
    {
        // An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
        // So, we set the callback to use a null context for the retry
        ResponseDelegate.BindRaw(this, &FSandboxAPI::OnUpdateSandboxResponse, Delegate, RequestMetadata, TSharedPtr<FAuthContext>(), Priority);
    }

    FResponse_UpdateSandbox Response{ RequestMetadata };
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

FRequest_UpdateSandbox::FRequest_UpdateSandbox()
{
    RequestMetadata.Identifier = FGuid::NewGuid();
    RequestMetadata.SimplifiedPath = GetSimplifiedPath();
    RequestMetadata.RetryCount = 0;
}

FName FRequest_UpdateSandbox::GetSimplifiedPath() const
{
    static FName Path = FName(TEXT("/v1/org/{org_identifier}/product/{product_identifier}/sandbox/{sandbox_identifier}"));
    return Path;
}

FString FRequest_UpdateSandbox::ComputePath() const
{
    TMap<FString, FStringFormatArg> PathParams = { 
        { TEXT("org_identifier"), ToStringFormatArg(OrgIdentifier) },
        { TEXT("product_identifier"), ToStringFormatArg(ProductIdentifier) },
        { TEXT("sandbox_identifier"), ToStringFormatArg(SandboxIdentifier) }
    };

    FString Path = FString::Format(TEXT("/v1/org/{org_identifier}/product/{product_identifier}/sandbox/{sandbox_identifier}"), PathParams);

    return Path;
}

bool FRequest_UpdateSandbox::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
    static const TArray<FString> Consumes = { TEXT("application/json") };
    //static const TArray<FString> Produces = { TEXT("application/json") };

    HttpRequest->SetVerb(TEXT("PUT"));

    if (!AuthContext)
    {
        UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("FRequest_UpdateSandbox - missing auth context"));
        return false;
    }
    if (!AuthContext->AddBearerToken(HttpRequest))
    {
        UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("FRequest_UpdateSandbox - failed to add bearer token"));
        return false;
    }

    if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json"))) // Default to Json Body request
    {
        // Body parameters
        FString JsonBody;
        TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&JsonBody);

        WriteJsonValue(Writer, SandboxUpdateRequest);
        Writer->Close();

        HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
        HttpRequest->SetContentAsString(JsonBody);
    }
    else if (Consumes.Contains(TEXT("multipart/form-data")))
    {
        UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("FRequest_UpdateSandbox - Body parameter (FRHAPI_DevSandboxUpdateRequest) was ignored, not supported in multipart form"));
    }
    else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
    {
        UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("FRequest_UpdateSandbox - Body parameter (FRHAPI_DevSandboxUpdateRequest) was ignored, not supported in urlencoded requests"));
    }
    else
    {
        UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("FRequest_UpdateSandbox - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
        return false;
    }

    return true;
}

void FResponse_UpdateSandbox::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
    FResponse::SetHttpResponseCode(InHttpResponseCode);
    switch ((int)InHttpResponseCode)
    {
    case 200:
        SetResponseString(TEXT("Successful Response"));
        break;
    case 404:
        SetResponseString(TEXT("Not Found"));
        break;
    case 422:
        SetResponseString(TEXT("Validation Error"));
        break;
    }
}

bool FResponse_UpdateSandbox::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    return TryGetJsonValue(JsonValue, Content);
}

FResponse_UpdateSandbox::FResponse_UpdateSandbox(FRequestMetadata InRequestMetadata) :
    FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_UpdateSandbox::Name = TEXT("UpdateSandbox");


}
