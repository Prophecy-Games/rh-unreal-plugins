// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "QueueConfig.generated.h"

/** @defgroup RHAPI_QueueConfig RallyHere API Model QueueConfig
 *  @{
 */

/**
 * @brief DEPRECATED - V1 Configuration about a specific queue
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_QueueConfig : public FRHAPI_Model
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

    /** @brief ID to uniquely identify this queue */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString QueueId{  };
    /** @brief Gets the value of QueueId */
    FString& GetQueueId() { return QueueId; }
    /** @brief Gets the value of QueueId */
    const FString& GetQueueId() const { return QueueId; }
    /** @brief Sets the value of QueueId */
    void SetQueueId(FString NewValue) { QueueId = NewValue;  }

    /** @brief Flag for whether or not the queue is active, and can be joined or sessions created from it */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool Active{ false };
    /** @brief Gets the value of Active */
    bool& GetActive() { return Active; }
    /** @brief Gets the value of Active */
    const bool& GetActive() const { return Active; }
    /** @brief Sets the value of Active */
    void SetActive(bool NewValue) { Active = NewValue;  }
    /** @brief Returns true if Active matches the default value */
    bool IsActiveDefaultValue() const { return Active == false; }
    /** @brief Sets the value of Active to its default  */
    void SetActiveToDefault() { Active = false;  }

    /** @brief Which rank this queue should use MMR from to make matches from, and update at the end of match (1v1 MMR or 2v2 MMR for example) */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    int32 RankingType{ 0 };
    /** @brief Gets the value of RankingType */
    int32& GetRankingType() { return RankingType; }
    /** @brief Gets the value of RankingType */
    const int32& GetRankingType() const { return RankingType; }
    /** @brief Sets the value of RankingType */
    void SetRankingType(int32 NewValue) { RankingType = NewValue;  }
    /** @brief Returns true if RankingType matches the default value */
    bool IsRankingTypeDefaultValue() const { return RankingType == 0; }
    /** @brief Sets the value of RankingType to its default  */
    void SetRankingTypeToDefault() { RankingType = 0;  }

    /** @brief The number of sides a game in this queue will have (2 in a 1v1 and 3 in a 1v1v1 for example */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    int32 NumSides{ 0 };
    /** @brief Gets the value of NumSides */
    int32& GetNumSides() { return NumSides; }
    /** @brief Gets the value of NumSides */
    const int32& GetNumSides() const { return NumSides; }
    /** @brief Sets the value of NumSides */
    void SetNumSides(int32 NewValue) { NumSides = NewValue;  }
    /** @brief Returns true if NumSides matches the default value */
    bool IsNumSidesDefaultValue() const { return NumSides == 0; }
    /** @brief Sets the value of NumSides to its default  */
    void SetNumSidesToDefault() { NumSides = 0;  }

    /** @brief The maximum number of players that can be on each team */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    int32 MaxPlayersPerSide{ 0 };
    /** @brief Gets the value of MaxPlayersPerSide */
    int32& GetMaxPlayersPerSide() { return MaxPlayersPerSide; }
    /** @brief Gets the value of MaxPlayersPerSide */
    const int32& GetMaxPlayersPerSide() const { return MaxPlayersPerSide; }
    /** @brief Sets the value of MaxPlayersPerSide */
    void SetMaxPlayersPerSide(int32 NewValue) { MaxPlayersPerSide = NewValue;  }
    /** @brief Returns true if MaxPlayersPerSide matches the default value */
    bool IsMaxPlayersPerSideDefaultValue() const { return MaxPlayersPerSide == 0; }
    /** @brief Sets the value of MaxPlayersPerSide to its default  */
    void SetMaxPlayersPerSideToDefault() { MaxPlayersPerSide = 0;  }

    /** @brief The minimum number of players that can be on each team */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    int32 MinPlayersPerSide{ 0 };
    /** @brief Gets the value of MinPlayersPerSide */
    int32& GetMinPlayersPerSide() { return MinPlayersPerSide; }
    /** @brief Gets the value of MinPlayersPerSide */
    const int32& GetMinPlayersPerSide() const { return MinPlayersPerSide; }
    /** @brief Sets the value of MinPlayersPerSide */
    void SetMinPlayersPerSide(int32 NewValue) { MinPlayersPerSide = NewValue;  }
    /** @brief Returns true if MinPlayersPerSide matches the default value */
    bool IsMinPlayersPerSideDefaultValue() const { return MinPlayersPerSide == 0; }
    /** @brief Sets the value of MinPlayersPerSide to its default  */
    void SetMinPlayersPerSideToDefault() { MinPlayersPerSide = 0;  }

    /** @brief The maximum size of a group that can join this queue */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    int32 MaxQueueGroupSize{ 0 };
    /** @brief Gets the value of MaxQueueGroupSize */
    int32& GetMaxQueueGroupSize() { return MaxQueueGroupSize; }
    /** @brief Gets the value of MaxQueueGroupSize */
    const int32& GetMaxQueueGroupSize() const { return MaxQueueGroupSize; }
    /** @brief Sets the value of MaxQueueGroupSize */
    void SetMaxQueueGroupSize(int32 NewValue) { MaxQueueGroupSize = NewValue;  }
    /** @brief Returns true if MaxQueueGroupSize matches the default value */
    bool IsMaxQueueGroupSizeDefaultValue() const { return MaxQueueGroupSize == 0; }
    /** @brief Sets the value of MaxQueueGroupSize to its default  */
    void SetMaxQueueGroupSizeToDefault() { MaxQueueGroupSize = 0;  }

    /** @brief ID for which group of matchmaking templates/rules will be used when joining this queue */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FGuid MatchMakingTemplateGroupId{  };
    /** @brief Gets the value of MatchMakingTemplateGroupId */
    FGuid& GetMatchMakingTemplateGroupId() { return MatchMakingTemplateGroupId; }
    /** @brief Gets the value of MatchMakingTemplateGroupId */
    const FGuid& GetMatchMakingTemplateGroupId() const { return MatchMakingTemplateGroupId; }
    /** @brief Sets the value of MatchMakingTemplateGroupId */
    void SetMatchMakingTemplateGroupId(FGuid NewValue) { MatchMakingTemplateGroupId = NewValue;  }
};

/** @} */
