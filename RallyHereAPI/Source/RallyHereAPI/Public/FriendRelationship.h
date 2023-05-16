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
#include "FriendshipStatus.h"
#include "FriendRelationship.generated.h"

/*
* FRHAPI_FriendRelationship
*
* 
*/
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_FriendRelationship : public FRHAPI_Model
{
    GENERATED_BODY()

    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override final;
    void WriteJson(TSharedRef<TJsonWriter<>>& Writer) const override final;

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FGuid FriendsPlayerUuid{  };
    FGuid& GetFriendsPlayerUuid() { return FriendsPlayerUuid; }
    const FGuid& GetFriendsPlayerUuid() const { return FriendsPlayerUuid; }
    void SetFriendsPlayerUuid(FGuid NewValue) { FriendsPlayerUuid = NewValue;  }

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    ERHAPI_FriendshipStatus Status{  };
    ERHAPI_FriendshipStatus& GetStatus() { return Status; }
    const ERHAPI_FriendshipStatus& GetStatus() const { return Status; }
    void SetStatus(ERHAPI_FriendshipStatus NewValue) { Status = NewValue;  }

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString Notes_Optional{  };
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool Notes_IsSet{ false };
    FString& GetNotes() { return Notes_Optional; }
    const FString& GetNotes() const { return Notes_Optional; }
    const FString& GetNotes(const FString& DefaultValue) const { if (Notes_IsSet) return Notes_Optional; return DefaultValue; }
    bool GetNotes(FString& OutValue) const { if (Notes_IsSet) OutValue = Notes_Optional; return Notes_IsSet; }
    FString* GetNotesOrNull() { if (Notes_IsSet) return &Notes_Optional; return nullptr; }
    const FString* GetNotesOrNull() const { if (Notes_IsSet) return &Notes_Optional; return nullptr; }
    void SetNotes(FString NewValue) { Notes_Optional = NewValue; Notes_IsSet = true; }
    void ClearNotes() { Notes_IsSet = false; }

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FDateTime LastModifiedOn{  };
    FDateTime& GetLastModifiedOn() { return LastModifiedOn; }
    const FDateTime& GetLastModifiedOn() const { return LastModifiedOn; }
    void SetLastModifiedOn(FDateTime NewValue) { LastModifiedOn = NewValue;  }
};
