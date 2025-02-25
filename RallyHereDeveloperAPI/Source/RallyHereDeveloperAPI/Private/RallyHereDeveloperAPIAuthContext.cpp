// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#include "RallyHereDeveloperAPIAuthContext.h"
#include "RallyHereDeveloperAPIModule.h"
#include "RallyHereDeveloperAPIHelpers.h"

namespace RallyHereDeveloperAPI
{

FAuthContext::FAuthContext(FString ClientId, FString ClientSecret) : ClientId{std::move(ClientId)}, ClientSecret{std::move(ClientSecret)}, LoginComplete{}
{
    UpdateBasicAuthValue();
}

FAuthContext::FAuthContext() : LoginComplete{}
{
}

void FAuthContext::AuthFromWebURL(const FString& URL)
{
    int32 AccessTokenIndex = URL.Find("#access_token=");

    if (AccessTokenIndex > 0)
    {
        AccessToken = URL.RightChop(AccessTokenIndex + 14);
		int32 AccessTokenEndIndex = AccessToken.Find("&");
		if (AccessTokenEndIndex > 0)
		{
			AccessToken = AccessToken.Left(AccessTokenEndIndex);
		}

        {
            SCOPED_NAMED_EVENT(RallyHere_BroadcastLoginComplete, FColor::Purple);
            LoginComplete.Broadcast(true);
        }
    }
}

bool FAuthContext::Refresh()
{
    LoginRequested.Broadcast();
    return true;
}

bool FAuthContext::IsLoggedIn() const
{
    return !AccessToken.IsEmpty();
}

FString FAuthContext::GetAccessToken() const
{
    return AccessToken;
}

void FAuthContext::ClearAuthContext()
{
    AccessToken = "";
}

void FAuthContext::SetClientId(const FString& InClientId)
{
    ClientId = InClientId;
    UpdateBasicAuthValue();
}

void FAuthContext::SetClientSecret(const FString& InClientSecret)
{
    ClientSecret = InClientSecret;
    UpdateBasicAuthValue();
}

bool FAuthContext::AddClientCredentials(const FHttpRequestRef& HttpRequest) const
{
    if (BasicAuthValue.IsSet())
    {
        HttpRequest->SetHeader(TEXT("Authorization"), *BasicAuthValue);
    }
    
    return true;
}

bool FAuthContext::AddClientCredentials(const FHttpRequestPtr& HttpRequest) const
{
    if (BasicAuthValue.IsSet())
    {
        HttpRequest->SetHeader(TEXT("Authorization"), *BasicAuthValue);
    }
    
    return true;
}

bool FAuthContext::AddBearerToken(const FHttpRequestRef& HttpRequest) const
{
    if (!IsLoggedIn())
    {
        return false;
    }
    HttpRequest->SetHeader(TEXT("Authorization"), TEXT("Bearer ") + GetAccessToken());
    return true;
}

bool FAuthContext::AddBearerToken(const FHttpRequestPtr& HttpRequest) const
{
    if (!IsLoggedIn())
    {
        return false;
    }
    HttpRequest->SetHeader(TEXT("Authorization"), TEXT("Bearer ") + GetAccessToken());
    return true;
}

void FAuthContext::UpdateBasicAuthValue()
{
    if (ClientId.IsSet() && !ClientId->IsEmpty() && ClientSecret.IsSet() && !ClientSecret->IsEmpty())
    {
        BasicAuthValue = TEXT("Basic ") + Base64UrlEncode(*ClientId + TEXT(":") + *ClientSecret);
    }
    else
    {
        BasicAuthValue.Reset();
    }
}
}
