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
#include "FriendRelationshipV1.h"
#include "PageMeta.h"
#include "FriendsListV1.generated.h"

/*
* FRHAPI_FriendsListV1
*
* 
*/
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_FriendsListV1 : public FRHAPI_Model
{
    GENERATED_BODY()

    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override final;
    void WriteJson(TSharedRef<TJsonWriter<>>& Writer) const override final;

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FGuid PlayerUuid{  };
    FGuid& GetPlayerUuid() { return PlayerUuid; }
    const FGuid& GetPlayerUuid() const { return PlayerUuid; }
    void SetPlayerUuid(FGuid NewValue) { PlayerUuid = NewValue;  }

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    int32 PlayerId{ 0 };
    int32& GetPlayerId() { return PlayerId; }
    const int32& GetPlayerId() const { return PlayerId; }
    void SetPlayerId(int32 NewValue) { PlayerId = NewValue;  }
    bool IsPlayerIdDefaultValue() const { return PlayerId == 0; }
    void SetPlayerIdToDefault() { PlayerId = 0;  }

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    TArray<FRHAPI_FriendRelationshipV1> Friends{  };
    TArray<FRHAPI_FriendRelationshipV1>& GetFriends() { return Friends; }
    const TArray<FRHAPI_FriendRelationshipV1>& GetFriends() const { return Friends; }
    void SetFriends(TArray<FRHAPI_FriendRelationshipV1> NewValue) { Friends = NewValue;  }

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FRHAPI_PageMeta Page{  };
    FRHAPI_PageMeta& GetPage() { return Page; }
    const FRHAPI_PageMeta& GetPage() const { return Page; }
    void SetPage(FRHAPI_PageMeta NewValue) { Page = NewValue;  }
};
