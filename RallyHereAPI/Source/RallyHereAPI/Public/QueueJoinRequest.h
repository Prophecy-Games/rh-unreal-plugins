// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "AdditionalJoinParams.h"
#include "QueueJoinRequest.generated.h"

/** @defgroup RHAPI_QueueJoinRequest RallyHere API Model QueueJoinRequest
 *  @{
 */

/**
 * @brief A request body to enter into a matchmaking queue
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_QueueJoinRequest : public FRHAPI_Model
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

    /** @brief ID of the queue to join */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString QueueId{  };
    /** @brief Gets the value of QueueId */
    FString& GetQueueId() { return QueueId; }
    /** @brief Gets the value of QueueId */
    const FString& GetQueueId() const { return QueueId; }
    /** @brief Sets the value of QueueId */
    void SetQueueId(FString NewValue) { QueueId = NewValue;  }

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FRHAPI_AdditionalJoinParams AdditionalJoinParams_Optional{  };
    /** @brief true if AdditionalJoinParams_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool AdditionalJoinParams_IsSet{ false };
    /** @brief Gets the value of AdditionalJoinParams_Optional, regardless of it having been set */
    FRHAPI_AdditionalJoinParams& GetAdditionalJoinParams() { return AdditionalJoinParams_Optional; }
    /** @brief Gets the value of AdditionalJoinParams_Optional, regardless of it having been set */
    const FRHAPI_AdditionalJoinParams& GetAdditionalJoinParams() const { return AdditionalJoinParams_Optional; }
    /** @brief Gets the value of AdditionalJoinParams_Optional, if it has been set, otherwise it returns DefaultValue */
    const FRHAPI_AdditionalJoinParams& GetAdditionalJoinParams(const FRHAPI_AdditionalJoinParams& DefaultValue) const { if (AdditionalJoinParams_IsSet) return AdditionalJoinParams_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of AdditionalJoinParams_Optional and returns true if it has been set, otherwise returns false */
    bool GetAdditionalJoinParams(FRHAPI_AdditionalJoinParams& OutValue) const { if (AdditionalJoinParams_IsSet) OutValue = AdditionalJoinParams_Optional; return AdditionalJoinParams_IsSet; }
    /** @brief Returns a pointer to AdditionalJoinParams_Optional, if it has been set, otherwise returns nullptr */
    FRHAPI_AdditionalJoinParams* GetAdditionalJoinParamsOrNull() { if (AdditionalJoinParams_IsSet) return &AdditionalJoinParams_Optional; return nullptr; }
    /** @brief Returns a pointer to AdditionalJoinParams_Optional, if it has been set, otherwise returns nullptr */
    const FRHAPI_AdditionalJoinParams* GetAdditionalJoinParamsOrNull() const { if (AdditionalJoinParams_IsSet) return &AdditionalJoinParams_Optional; return nullptr; }
    /** @brief Sets the value of AdditionalJoinParams_Optional and also sets AdditionalJoinParams_IsSet to true */
    void SetAdditionalJoinParams(FRHAPI_AdditionalJoinParams NewValue) { AdditionalJoinParams_Optional = NewValue; AdditionalJoinParams_IsSet = true; }
     /** @brief Clears the value of AdditionalJoinParams_Optional and sets AdditionalJoinParams_IsSet to false */
    void ClearAdditionalJoinParams() { AdditionalJoinParams_IsSet = false; }

    /** @brief List of map preferences in order from most desired, to least desired */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    TArray<FString> MapPreferences_Optional{  };
    /** @brief true if MapPreferences_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool MapPreferences_IsSet{ false };
    /** @brief Gets the value of MapPreferences_Optional, regardless of it having been set */
    TArray<FString>& GetMapPreferences() { return MapPreferences_Optional; }
    /** @brief Gets the value of MapPreferences_Optional, regardless of it having been set */
    const TArray<FString>& GetMapPreferences() const { return MapPreferences_Optional; }
    /** @brief Gets the value of MapPreferences_Optional, if it has been set, otherwise it returns DefaultValue */
    const TArray<FString>& GetMapPreferences(const TArray<FString>& DefaultValue) const { if (MapPreferences_IsSet) return MapPreferences_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of MapPreferences_Optional and returns true if it has been set, otherwise returns false */
    bool GetMapPreferences(TArray<FString>& OutValue) const { if (MapPreferences_IsSet) OutValue = MapPreferences_Optional; return MapPreferences_IsSet; }
    /** @brief Returns a pointer to MapPreferences_Optional, if it has been set, otherwise returns nullptr */
    TArray<FString>* GetMapPreferencesOrNull() { if (MapPreferences_IsSet) return &MapPreferences_Optional; return nullptr; }
    /** @brief Returns a pointer to MapPreferences_Optional, if it has been set, otherwise returns nullptr */
    const TArray<FString>* GetMapPreferencesOrNull() const { if (MapPreferences_IsSet) return &MapPreferences_Optional; return nullptr; }
    /** @brief Sets the value of MapPreferences_Optional and also sets MapPreferences_IsSet to true */
    void SetMapPreferences(TArray<FString> NewValue) { MapPreferences_Optional = NewValue; MapPreferences_IsSet = true; }
     /** @brief Clears the value of MapPreferences_Optional and sets MapPreferences_IsSet to false */
    void ClearMapPreferences() { MapPreferences_IsSet = false; }
};

/** @} */
