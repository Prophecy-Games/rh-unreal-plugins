// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#include "OrganizationAPI.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIAuthContext.h"
#include "RallyHereDeveloperAPIHttpRequester.h"
#include "HttpModule.h"
#include "Serialization/JsonSerializer.h"

namespace RallyHereDeveloperAPI
{

FOrganizationAPI::FOrganizationAPI() : FAPI()
{
    Url = TEXT("/api");
    Name = FName(TEXT("Organization"));
}

FOrganizationAPI::~FOrganizationAPI() {}

FHttpRequestPtr FOrganizationAPI::CreateOrg(const FRequest_CreateOrg& Request, const FDelegate_CreateOrg& Delegate /*= FDelegate_CreateOrg()*/, int32 Priority /*= DefaultRallyHereDeveloperAPIPriority*/)
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
    ResponseDelegate.BindRaw(this, &FOrganizationAPI::OnCreateOrgResponse, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext(), Priority);
    RequestData->SetDelegate(ResponseDelegate);

    auto* HttpRequester = FRallyHereDeveloperAPIHttpRequester::Get();
    if (HttpRequester)
    {
        HttpRequester->EnqueueHttpRequest(RequestData);
    }
    return RequestData->HttpRequest;
}

void FOrganizationAPI::OnCreateOrgResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_CreateOrg Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority)
{
    FHttpRequestCompleteDelegate ResponseDelegate;

    if (AuthContextForRetry)
    {
        // An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
        // So, we set the callback to use a null context for the retry
        ResponseDelegate.BindRaw(this, &FOrganizationAPI::OnCreateOrgResponse, Delegate, RequestMetadata, TSharedPtr<FAuthContext>(), Priority);
    }

    FResponse_CreateOrg Response{ RequestMetadata };
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

FRequest_CreateOrg::FRequest_CreateOrg()
{
    RequestMetadata.Identifier = FGuid::NewGuid();
    RequestMetadata.SimplifiedPath = GetSimplifiedPath();
    RequestMetadata.RetryCount = 0;
}

FName FRequest_CreateOrg::GetSimplifiedPath() const
{
    static FName Path = FName(TEXT("/v1/org"));
    return Path;
}

FString FRequest_CreateOrg::ComputePath() const
{
    FString Path = GetSimplifiedPath().ToString();
    return Path;
}

bool FRequest_CreateOrg::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
    static const TArray<FString> Consumes = { TEXT("application/json") };
    //static const TArray<FString> Produces = { TEXT("application/json") };

    HttpRequest->SetVerb(TEXT("POST"));

    if (!AuthContext)
    {
        UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("FRequest_CreateOrg - missing auth context"));
        return false;
    }
    if (!AuthContext->AddBearerToken(HttpRequest))
    {
        UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("FRequest_CreateOrg - failed to add bearer token"));
        return false;
    }

    if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json"))) // Default to Json Body request
    {
        // Body parameters
        FString JsonBody;
        TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&JsonBody);

        WriteJsonValue(Writer, OrganizationRequest);
        Writer->Close();

        HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
        HttpRequest->SetContentAsString(JsonBody);
    }
    else if (Consumes.Contains(TEXT("multipart/form-data")))
    {
        UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("FRequest_CreateOrg - Body parameter (FRHAPI_DevOrganizationRequest) was ignored, not supported in multipart form"));
    }
    else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
    {
        UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("FRequest_CreateOrg - Body parameter (FRHAPI_DevOrganizationRequest) was ignored, not supported in urlencoded requests"));
    }
    else
    {
        UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("FRequest_CreateOrg - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
        return false;
    }

    return true;
}

void FResponse_CreateOrg::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
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

bool FResponse_CreateOrg::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    return TryGetJsonValue(JsonValue, Content);
}

FResponse_CreateOrg::FResponse_CreateOrg(FRequestMetadata InRequestMetadata) :
    FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_CreateOrg::Name = TEXT("CreateOrg");

FHttpRequestPtr FOrganizationAPI::DeleteOrg(const FRequest_DeleteOrg& Request, const FDelegate_DeleteOrg& Delegate /*= FDelegate_DeleteOrg()*/, int32 Priority /*= DefaultRallyHereDeveloperAPIPriority*/)
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
    ResponseDelegate.BindRaw(this, &FOrganizationAPI::OnDeleteOrgResponse, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext(), Priority);
    RequestData->SetDelegate(ResponseDelegate);

    auto* HttpRequester = FRallyHereDeveloperAPIHttpRequester::Get();
    if (HttpRequester)
    {
        HttpRequester->EnqueueHttpRequest(RequestData);
    }
    return RequestData->HttpRequest;
}

void FOrganizationAPI::OnDeleteOrgResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_DeleteOrg Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority)
{
    FHttpRequestCompleteDelegate ResponseDelegate;

    if (AuthContextForRetry)
    {
        // An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
        // So, we set the callback to use a null context for the retry
        ResponseDelegate.BindRaw(this, &FOrganizationAPI::OnDeleteOrgResponse, Delegate, RequestMetadata, TSharedPtr<FAuthContext>(), Priority);
    }

    FResponse_DeleteOrg Response{ RequestMetadata };
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

FRequest_DeleteOrg::FRequest_DeleteOrg()
{
    RequestMetadata.Identifier = FGuid::NewGuid();
    RequestMetadata.SimplifiedPath = GetSimplifiedPath();
    RequestMetadata.RetryCount = 0;
}

FName FRequest_DeleteOrg::GetSimplifiedPath() const
{
    static FName Path = FName(TEXT("/v1/org/{org_identifier}"));
    return Path;
}

FString FRequest_DeleteOrg::ComputePath() const
{
    TMap<FString, FStringFormatArg> PathParams = { 
        { TEXT("org_identifier"), ToStringFormatArg(OrgIdentifier) }
    };

    FString Path = FString::Format(TEXT("/v1/org/{org_identifier}"), PathParams);

    return Path;
}

bool FRequest_DeleteOrg::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
    static const TArray<FString> Consumes = {  };
    //static const TArray<FString> Produces = { TEXT("application/json") };

    HttpRequest->SetVerb(TEXT("DELETE"));

    if (!AuthContext)
    {
        UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("FRequest_DeleteOrg - missing auth context"));
        return false;
    }
    if (!AuthContext->AddBearerToken(HttpRequest))
    {
        UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("FRequest_DeleteOrg - failed to add bearer token"));
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
        UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("FRequest_DeleteOrg - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
        return false;
    }

    return true;
}

void FResponse_DeleteOrg::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
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

bool FResponse_DeleteOrg::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    return TryGetJsonValue(JsonValue, Content);
}

FResponse_DeleteOrg::FResponse_DeleteOrg(FRequestMetadata InRequestMetadata) :
    FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_DeleteOrg::Name = TEXT("DeleteOrg");

FHttpRequestPtr FOrganizationAPI::GetAllOrgs(const FRequest_GetAllOrgs& Request, const FDelegate_GetAllOrgs& Delegate /*= FDelegate_GetAllOrgs()*/, int32 Priority /*= DefaultRallyHereDeveloperAPIPriority*/)
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
    ResponseDelegate.BindRaw(this, &FOrganizationAPI::OnGetAllOrgsResponse, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext(), Priority);
    RequestData->SetDelegate(ResponseDelegate);

    auto* HttpRequester = FRallyHereDeveloperAPIHttpRequester::Get();
    if (HttpRequester)
    {
        HttpRequester->EnqueueHttpRequest(RequestData);
    }
    return RequestData->HttpRequest;
}

void FOrganizationAPI::OnGetAllOrgsResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetAllOrgs Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority)
{
    FHttpRequestCompleteDelegate ResponseDelegate;

    if (AuthContextForRetry)
    {
        // An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
        // So, we set the callback to use a null context for the retry
        ResponseDelegate.BindRaw(this, &FOrganizationAPI::OnGetAllOrgsResponse, Delegate, RequestMetadata, TSharedPtr<FAuthContext>(), Priority);
    }

    FResponse_GetAllOrgs Response{ RequestMetadata };
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

FRequest_GetAllOrgs::FRequest_GetAllOrgs()
{
    RequestMetadata.Identifier = FGuid::NewGuid();
    RequestMetadata.SimplifiedPath = GetSimplifiedPath();
    RequestMetadata.RetryCount = 0;
}

FName FRequest_GetAllOrgs::GetSimplifiedPath() const
{
    static FName Path = FName(TEXT("/v1/org"));
    return Path;
}

FString FRequest_GetAllOrgs::ComputePath() const
{
    FString Path = GetSimplifiedPath().ToString();
    return Path;
}

bool FRequest_GetAllOrgs::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
    static const TArray<FString> Consumes = {  };
    //static const TArray<FString> Produces = { TEXT("application/json") };

    HttpRequest->SetVerb(TEXT("GET"));

    if (!AuthContext)
    {
        UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("FRequest_GetAllOrgs - missing auth context"));
        return false;
    }
    if (!AuthContext->AddBearerToken(HttpRequest))
    {
        UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("FRequest_GetAllOrgs - failed to add bearer token"));
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
        UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("FRequest_GetAllOrgs - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
        return false;
    }

    return true;
}

void FResponse_GetAllOrgs::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
    FResponse::SetHttpResponseCode(InHttpResponseCode);
    switch ((int)InHttpResponseCode)
    {
    case 200:
        SetResponseString(TEXT("Successful Response"));
        break;
    }
}

bool FResponse_GetAllOrgs::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    return TryGetJsonValue(JsonValue, Content);
}

FResponse_GetAllOrgs::FResponse_GetAllOrgs(FRequestMetadata InRequestMetadata) :
    FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_GetAllOrgs::Name = TEXT("GetAllOrgs");

FHttpRequestPtr FOrganizationAPI::GetOrg(const FRequest_GetOrg& Request, const FDelegate_GetOrg& Delegate /*= FDelegate_GetOrg()*/, int32 Priority /*= DefaultRallyHereDeveloperAPIPriority*/)
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
    ResponseDelegate.BindRaw(this, &FOrganizationAPI::OnGetOrgResponse, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext(), Priority);
    RequestData->SetDelegate(ResponseDelegate);

    auto* HttpRequester = FRallyHereDeveloperAPIHttpRequester::Get();
    if (HttpRequester)
    {
        HttpRequester->EnqueueHttpRequest(RequestData);
    }
    return RequestData->HttpRequest;
}

void FOrganizationAPI::OnGetOrgResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetOrg Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority)
{
    FHttpRequestCompleteDelegate ResponseDelegate;

    if (AuthContextForRetry)
    {
        // An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
        // So, we set the callback to use a null context for the retry
        ResponseDelegate.BindRaw(this, &FOrganizationAPI::OnGetOrgResponse, Delegate, RequestMetadata, TSharedPtr<FAuthContext>(), Priority);
    }

    FResponse_GetOrg Response{ RequestMetadata };
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

FRequest_GetOrg::FRequest_GetOrg()
{
    RequestMetadata.Identifier = FGuid::NewGuid();
    RequestMetadata.SimplifiedPath = GetSimplifiedPath();
    RequestMetadata.RetryCount = 0;
}

FName FRequest_GetOrg::GetSimplifiedPath() const
{
    static FName Path = FName(TEXT("/v1/org/{org_identifier}"));
    return Path;
}

FString FRequest_GetOrg::ComputePath() const
{
    TMap<FString, FStringFormatArg> PathParams = { 
        { TEXT("org_identifier"), ToStringFormatArg(OrgIdentifier) }
    };

    FString Path = FString::Format(TEXT("/v1/org/{org_identifier}"), PathParams);

    return Path;
}

bool FRequest_GetOrg::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
    static const TArray<FString> Consumes = {  };
    //static const TArray<FString> Produces = { TEXT("application/json") };

    HttpRequest->SetVerb(TEXT("GET"));

    if (!AuthContext)
    {
        UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("FRequest_GetOrg - missing auth context"));
        return false;
    }
    if (!AuthContext->AddBearerToken(HttpRequest))
    {
        UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("FRequest_GetOrg - failed to add bearer token"));
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
        UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("FRequest_GetOrg - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
        return false;
    }

    return true;
}

void FResponse_GetOrg::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
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

bool FResponse_GetOrg::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    return TryGetJsonValue(JsonValue, Content);
}

FResponse_GetOrg::FResponse_GetOrg(FRequestMetadata InRequestMetadata) :
    FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_GetOrg::Name = TEXT("GetOrg");

FHttpRequestPtr FOrganizationAPI::UpdateOrg(const FRequest_UpdateOrg& Request, const FDelegate_UpdateOrg& Delegate /*= FDelegate_UpdateOrg()*/, int32 Priority /*= DefaultRallyHereDeveloperAPIPriority*/)
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
    ResponseDelegate.BindRaw(this, &FOrganizationAPI::OnUpdateOrgResponse, Delegate, Request.GetRequestMetadata(), Request.GetAuthContext(), Priority);
    RequestData->SetDelegate(ResponseDelegate);

    auto* HttpRequester = FRallyHereDeveloperAPIHttpRequester::Get();
    if (HttpRequester)
    {
        HttpRequester->EnqueueHttpRequest(RequestData);
    }
    return RequestData->HttpRequest;
}

void FOrganizationAPI::OnUpdateOrgResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_UpdateOrg Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority)
{
    FHttpRequestCompleteDelegate ResponseDelegate;

    if (AuthContextForRetry)
    {
        // An included auth context indicates we should auth-retry this request, we only want to do that at most once per call.
        // So, we set the callback to use a null context for the retry
        ResponseDelegate.BindRaw(this, &FOrganizationAPI::OnUpdateOrgResponse, Delegate, RequestMetadata, TSharedPtr<FAuthContext>(), Priority);
    }

    FResponse_UpdateOrg Response{ RequestMetadata };
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

FRequest_UpdateOrg::FRequest_UpdateOrg()
{
    RequestMetadata.Identifier = FGuid::NewGuid();
    RequestMetadata.SimplifiedPath = GetSimplifiedPath();
    RequestMetadata.RetryCount = 0;
}

FName FRequest_UpdateOrg::GetSimplifiedPath() const
{
    static FName Path = FName(TEXT("/v1/org/{org_identifier}"));
    return Path;
}

FString FRequest_UpdateOrg::ComputePath() const
{
    TMap<FString, FStringFormatArg> PathParams = { 
        { TEXT("org_identifier"), ToStringFormatArg(OrgIdentifier) }
    };

    FString Path = FString::Format(TEXT("/v1/org/{org_identifier}"), PathParams);

    return Path;
}

bool FRequest_UpdateOrg::SetupHttpRequest(const FHttpRequestRef& HttpRequest) const
{
    static const TArray<FString> Consumes = { TEXT("application/json") };
    //static const TArray<FString> Produces = { TEXT("application/json") };

    HttpRequest->SetVerb(TEXT("PUT"));

    if (!AuthContext)
    {
        UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("FRequest_UpdateOrg - missing auth context"));
        return false;
    }
    if (!AuthContext->AddBearerToken(HttpRequest))
    {
        UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("FRequest_UpdateOrg - failed to add bearer token"));
        return false;
    }

    if (Consumes.Num() == 0 || Consumes.Contains(TEXT("application/json"))) // Default to Json Body request
    {
        // Body parameters
        FString JsonBody;
        TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&JsonBody);

        WriteJsonValue(Writer, OrganizationUpdateRequest);
        Writer->Close();

        HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json; charset=utf-8"));
        HttpRequest->SetContentAsString(JsonBody);
    }
    else if (Consumes.Contains(TEXT("multipart/form-data")))
    {
        UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("FRequest_UpdateOrg - Body parameter (FRHAPI_DevOrganizationUpdateRequest) was ignored, not supported in multipart form"));
    }
    else if (Consumes.Contains(TEXT("application/x-www-form-urlencoded")))
    {
        UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("FRequest_UpdateOrg - Body parameter (FRHAPI_DevOrganizationUpdateRequest) was ignored, not supported in urlencoded requests"));
    }
    else
    {
        UE_LOG(LogRallyHereDeveloperAPI, Error, TEXT("FRequest_UpdateOrg - Request ContentType not supported (%s)"), *FString::Join(Consumes, TEXT(",")));
        return false;
    }

    return true;
}

void FResponse_UpdateOrg::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
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

bool FResponse_UpdateOrg::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
    return TryGetJsonValue(JsonValue, Content);
}

FResponse_UpdateOrg::FResponse_UpdateOrg(FRequestMetadata InRequestMetadata) :
    FResponse(MoveTemp(InRequestMetadata))
{
}

FString Traits_UpdateOrg::Name = TEXT("UpdateOrg");


}
