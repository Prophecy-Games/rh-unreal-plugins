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

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "Containers/Set.h"
#include "PlayerSessionInvite.h"
#include "PlayerSession.generated.h"

/*
* FRHAPI_PlayerSession
*
* 
*/
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_PlayerSession : public FRHAPI_Model
{
    GENERATED_BODY()

    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override final;
    void WriteJson(TSharedRef<TJsonWriter<>>& Writer) const override final;

    /* template type */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString Type{  };
    FString& GetType() { return Type; }
    const FString& GetType() const { return Type; }
    void SetType(FString NewValue) { Type = NewValue;  }

    /* Sessions the player is currently a part of for this session type, if any. */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    TSet<FString> SessionIds_Optional{  };
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool SessionIds_IsSet{ false };
    TSet<FString>& GetSessionIds() { return SessionIds_Optional; }
    const TSet<FString>& GetSessionIds() const { return SessionIds_Optional; }
    const TSet<FString>& GetSessionIds(const TSet<FString>& DefaultValue) const { if (SessionIds_IsSet) return SessionIds_Optional; return DefaultValue; }
    bool GetSessionIds(TSet<FString>& OutValue) const { if (SessionIds_IsSet) OutValue = SessionIds_Optional; return SessionIds_IsSet; }
    TSet<FString>* GetSessionIdsOrNull() { if (SessionIds_IsSet) return &SessionIds_Optional; return nullptr; }
    const TSet<FString>* GetSessionIdsOrNull() const { if (SessionIds_IsSet) return &SessionIds_Optional; return nullptr; }
    void SetSessionIds(TSet<FString> NewValue) { SessionIds_Optional = NewValue; SessionIds_IsSet = true; }
    void ClearSessionIds() { SessionIds_IsSet = false; }

    /* Pending invites, if any, for the current player in this session type */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    TMap<FString, FRHAPI_PlayerSessionInvite> PendingInvites_Optional{  };
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool PendingInvites_IsSet{ false };
    TMap<FString, FRHAPI_PlayerSessionInvite>& GetPendingInvites() { return PendingInvites_Optional; }
    const TMap<FString, FRHAPI_PlayerSessionInvite>& GetPendingInvites() const { return PendingInvites_Optional; }
    const TMap<FString, FRHAPI_PlayerSessionInvite>& GetPendingInvites(const TMap<FString, FRHAPI_PlayerSessionInvite>& DefaultValue) const { if (PendingInvites_IsSet) return PendingInvites_Optional; return DefaultValue; }
    bool GetPendingInvites(TMap<FString, FRHAPI_PlayerSessionInvite>& OutValue) const { if (PendingInvites_IsSet) OutValue = PendingInvites_Optional; return PendingInvites_IsSet; }
    TMap<FString, FRHAPI_PlayerSessionInvite>* GetPendingInvitesOrNull() { if (PendingInvites_IsSet) return &PendingInvites_Optional; return nullptr; }
    const TMap<FString, FRHAPI_PlayerSessionInvite>* GetPendingInvitesOrNull() const { if (PendingInvites_IsSet) return &PendingInvites_Optional; return nullptr; }
    void SetPendingInvites(TMap<FString, FRHAPI_PlayerSessionInvite> NewValue) { PendingInvites_Optional = NewValue; PendingInvites_IsSet = true; }
    void ClearPendingInvites() { PendingInvites_IsSet = false; }
};
