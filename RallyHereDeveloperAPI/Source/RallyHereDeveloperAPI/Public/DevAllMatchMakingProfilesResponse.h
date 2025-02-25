// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevMatchMakingProfile.h"
#include "DevAllMatchMakingProfilesResponse.generated.h"

/** @defgroup RHAPI_DevAllMatchMakingProfilesResponse RallyHere API Model DevAllMatchMakingProfilesResponse
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREDEVELOPERAPI_API FRHAPI_DevAllMatchMakingProfilesResponse : public FRHAPI_DevModel
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

    /** @brief Cursor to designate where you are in iterating through values. Start with '0', and pass this on subsequent calls to continue iteration */
    FString Cursor{  };
    /** @brief Gets the value of Cursor */
    FString& GetCursor() { return Cursor; }
    /** @brief Gets the value of Cursor */
    const FString& GetCursor() const { return Cursor; }
    /** @brief Sets the value of Cursor */
    void SetCursor(FString NewValue) { Cursor = NewValue;  }

    /** @brief List of MatchMakingProfiles */
    TArray<FRHAPI_DevMatchMakingProfile> Profiles_Optional{  };
    /** @brief true if Profiles_Optional has been set to a value */
    bool Profiles_IsSet{ false };
    /** @brief Gets the value of Profiles_Optional, regardless of it having been set */
    TArray<FRHAPI_DevMatchMakingProfile>& GetProfiles() { return Profiles_Optional; }
    /** @brief Gets the value of Profiles_Optional, regardless of it having been set */
    const TArray<FRHAPI_DevMatchMakingProfile>& GetProfiles() const { return Profiles_Optional; }
    /** @brief Gets the value of Profiles_Optional, if it has been set, otherwise it returns DefaultValue */
    const TArray<FRHAPI_DevMatchMakingProfile>& GetProfiles(const TArray<FRHAPI_DevMatchMakingProfile>& DefaultValue) const { if (Profiles_IsSet) return Profiles_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Profiles_Optional and returns true if it has been set, otherwise returns false */
    bool GetProfiles(TArray<FRHAPI_DevMatchMakingProfile>& OutValue) const { if (Profiles_IsSet) OutValue = Profiles_Optional; return Profiles_IsSet; }
    /** @brief Returns a pointer to Profiles_Optional, if it has been set, otherwise returns nullptr */
    TArray<FRHAPI_DevMatchMakingProfile>* GetProfilesOrNull() { if (Profiles_IsSet) return &Profiles_Optional; return nullptr; }
    /** @brief Returns a pointer to Profiles_Optional, if it has been set, otherwise returns nullptr */
    const TArray<FRHAPI_DevMatchMakingProfile>* GetProfilesOrNull() const { if (Profiles_IsSet) return &Profiles_Optional; return nullptr; }
    /** @brief Sets the value of Profiles_Optional and also sets Profiles_IsSet to true */
    void SetProfiles(TArray<FRHAPI_DevMatchMakingProfile> NewValue) { Profiles_Optional = NewValue; Profiles_IsSet = true; }
     /** @brief Clears the value of Profiles_Optional and sets Profiles_IsSet to false */
    void ClearProfiles() { Profiles_IsSet = false; }
};

/** @} */
