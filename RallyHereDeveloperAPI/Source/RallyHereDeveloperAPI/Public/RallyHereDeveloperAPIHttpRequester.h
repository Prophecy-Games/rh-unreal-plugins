// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "CoreMinimal.h"
#include "RallyHereDeveloperAPIBaseModel.h"
#include "HttpModule.h"

DECLARE_STATS_GROUP(TEXT("RallyHereDeveloperAPI"), STATGROUP_RallyHereDeveloperAPI, STATCAT_Advanced);

namespace RallyHereDeveloperAPI
{

class FRallyHereDeveloperAPIHttpRequester;

struct FRallyHereDeveloperAPIHttpRequestData
{
public:
    FRallyHereDeveloperAPIHttpRequestData(const FHttpRequestRef& InHttpRequest, FAPI& InAPI, int32 InPriority) :
      HttpRequest(InHttpRequest),
      API(InAPI),
      Priority(InPriority)
    {
    }
    
    void SetMetadata(const FRequestMetadata& InMetadata)
    {
        Metadata = InMetadata;
    }

    void SetDelegate(const FHttpRequestCompleteDelegate& InDelegate)
    {
        ResponseDelegate = InDelegate;
    }

    FHttpRequestRef HttpRequest;
    FRequestMetadata Metadata;
    FAPI& API;
    int32 Priority;
    FHttpRequestCompleteDelegate ResponseDelegate;
};

typedef TMap<int32, TArray<TSharedPtr<struct FRallyHereDeveloperAPIHttpRequestData>, TInlineAllocator<10>>> HttpRequestMap;

class RALLYHEREDEVELOPERAPI_API FRallyHereDeveloperAPIHttpRequester
{
public:
    FRallyHereDeveloperAPIHttpRequester();
    virtual ~FRallyHereDeveloperAPIHttpRequester() = default;

    static void Initialize()
    {
        if (Singleton == nullptr)
        {
            Singleton = new FRallyHereDeveloperAPIHttpRequester();
        }
    }

    static void Uninitialize()
    {
        if (Singleton != nullptr)
        {
            delete Singleton;
			Singleton = nullptr;
        }
    }

    static FRallyHereDeveloperAPIHttpRequester* Get()
    {
        return Singleton;
    }

    void SetMaxSimultaneousRequests(int32 InNum) { MaxSimultaneousRequests = InNum; }

    void EnqueueHttpRequest(TSharedPtr<struct FRallyHereDeveloperAPIHttpRequestData> RequestData);

    void OnResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FHttpRequestCompleteDelegate ResponseDelegate);

private:
    void QueueNextRequestCall();
    void TryExecuteNextRequest();
    bool CanExecuteRequest() const { return HttpRequestQueue.Num() > 0 && (MaxSimultaneousRequests == 0 || PendingRequestCount < MaxSimultaneousRequests); }

    static FRallyHereDeveloperAPIHttpRequester* Singleton;

    HttpRequestMap HttpRequestQueue;

    int32 MaxSimultaneousRequests;
    int32 PendingRequestCount;
};

}
