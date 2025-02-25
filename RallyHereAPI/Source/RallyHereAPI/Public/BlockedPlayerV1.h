// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "BlockedPlayerV1.generated.h"

/** @defgroup RHAPI_BlockedPlayerV1 RallyHere API Model BlockedPlayerV1
 *  @{
 */

/**
 * @brief The player that is being blocked. V1 includes player_id and player_uuid.
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_BlockedPlayerV1 : public FRHAPI_Model
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
    int32 BlockedPlayerId_Optional{  };
    /** @brief true if BlockedPlayerId_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool BlockedPlayerId_IsSet{ false };
    /** @brief Gets the value of BlockedPlayerId_Optional, regardless of it having been set */
    int32& GetBlockedPlayerId() { return BlockedPlayerId_Optional; }
    /** @brief Gets the value of BlockedPlayerId_Optional, regardless of it having been set */
    const int32& GetBlockedPlayerId() const { return BlockedPlayerId_Optional; }
    /** @brief Gets the value of BlockedPlayerId_Optional, if it has been set, otherwise it returns DefaultValue */
    const int32& GetBlockedPlayerId(const int32& DefaultValue) const { if (BlockedPlayerId_IsSet) return BlockedPlayerId_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of BlockedPlayerId_Optional and returns true if it has been set, otherwise returns false */
    bool GetBlockedPlayerId(int32& OutValue) const { if (BlockedPlayerId_IsSet) OutValue = BlockedPlayerId_Optional; return BlockedPlayerId_IsSet; }
    /** @brief Returns a pointer to BlockedPlayerId_Optional, if it has been set, otherwise returns nullptr */
    int32* GetBlockedPlayerIdOrNull() { if (BlockedPlayerId_IsSet) return &BlockedPlayerId_Optional; return nullptr; }
    /** @brief Returns a pointer to BlockedPlayerId_Optional, if it has been set, otherwise returns nullptr */
    const int32* GetBlockedPlayerIdOrNull() const { if (BlockedPlayerId_IsSet) return &BlockedPlayerId_Optional; return nullptr; }
    /** @brief Sets the value of BlockedPlayerId_Optional and also sets BlockedPlayerId_IsSet to true */
    void SetBlockedPlayerId(int32 NewValue) { BlockedPlayerId_Optional = NewValue; BlockedPlayerId_IsSet = true; }
     /** @brief Clears the value of BlockedPlayerId_Optional and sets BlockedPlayerId_IsSet to false */
    void ClearBlockedPlayerId() { BlockedPlayerId_Optional = 0; BlockedPlayerId_IsSet = false; }
    /** @brief Returns true if BlockedPlayerId_Optional is set and matches the default value */
    bool IsBlockedPlayerIdDefaultValue() const { return BlockedPlayerId_IsSet && BlockedPlayerId_Optional == 0; }
    /** @brief Sets the value of BlockedPlayerId_Optional to its default and also sets BlockedPlayerId_IsSet to true */
    void SetBlockedPlayerIdToDefault() { BlockedPlayerId_Optional = 0; BlockedPlayerId_IsSet = true; }

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FGuid BlockedPlayerUuid{  };
    /** @brief Gets the value of BlockedPlayerUuid */
    FGuid& GetBlockedPlayerUuid() { return BlockedPlayerUuid; }
    /** @brief Gets the value of BlockedPlayerUuid */
    const FGuid& GetBlockedPlayerUuid() const { return BlockedPlayerUuid; }
    /** @brief Sets the value of BlockedPlayerUuid */
    void SetBlockedPlayerUuid(FGuid NewValue) { BlockedPlayerUuid = NewValue;  }

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FDateTime LastModifiedOn{  };
    /** @brief Gets the value of LastModifiedOn */
    FDateTime& GetLastModifiedOn() { return LastModifiedOn; }
    /** @brief Gets the value of LastModifiedOn */
    const FDateTime& GetLastModifiedOn() const { return LastModifiedOn; }
    /** @brief Sets the value of LastModifiedOn */
    void SetLastModifiedOn(FDateTime NewValue) { LastModifiedOn = NewValue;  }
};

/** @} */
