// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "FriendRelationship.h"
#include "PageMeta.h"
#include "FriendsList.generated.h"

/** @defgroup RHAPI_FriendsList RallyHere API Model FriendsList
 *  @{
 */

/**
 * @brief List of the player&#39;s friends. Includes sent friend requests and received friends requests.
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_FriendsList : public FRHAPI_Model
{
    GENERATED_BODY()

    /**
    * @brief Fills this object with data from the passed in JSON
    *
    * @param [in] JsonValue Data from the API call.
    *
    * @return true if parsing of the JSON data was successful.
    */
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override final;

    /**
    * @brief Writes the data from this object into the specified JSON Writer stream
    *
    * @param [in] Writer JSON Writer stream to push .
    */
    void WriteJson(TSharedRef<TJsonWriter<>>& Writer) const override final;

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FGuid PlayerUuid{  };
    /** @brief Gets the value of PlayerUuid */
    FGuid& GetPlayerUuid() { return PlayerUuid; }
    /** @brief Gets the value of PlayerUuid */
    const FGuid& GetPlayerUuid() const { return PlayerUuid; }
    /** @brief Sets the value of PlayerUuid */
    void SetPlayerUuid(FGuid NewValue) { PlayerUuid = NewValue;  }

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    TArray<FRHAPI_FriendRelationship> Friends{  };
    /** @brief Gets the value of Friends */
    TArray<FRHAPI_FriendRelationship>& GetFriends() { return Friends; }
    /** @brief Gets the value of Friends */
    const TArray<FRHAPI_FriendRelationship>& GetFriends() const { return Friends; }
    /** @brief Sets the value of Friends */
    void SetFriends(TArray<FRHAPI_FriendRelationship> NewValue) { Friends = NewValue;  }

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FRHAPI_PageMeta Page{  };
    /** @brief Gets the value of Page */
    FRHAPI_PageMeta& GetPage() { return Page; }
    /** @brief Gets the value of Page */
    const FRHAPI_PageMeta& GetPage() const { return Page; }
    /** @brief Sets the value of Page */
    void SetPage(FRHAPI_PageMeta NewValue) { Page = NewValue;  }
};

/** @} */
