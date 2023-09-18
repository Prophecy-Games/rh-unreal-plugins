// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "PlayerResponse.h"
#include "PlatformIdentityLookupResults.generated.h"

/** @defgroup RHAPI_PlatformIdentityLookupResults RallyHere API Model PlatformIdentityLookupResults
 *  @{
 */

/**
 * @brief Lookup results for a platform user id
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_PlatformIdentityLookupResults : public FRHAPI_Model
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

    /** @brief List of platform user ids and the players that match that platform user id */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    TMap<FString, FRHAPI_PlayerResponse> Identity_Optional{  };
    /** @brief true if Identity_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool Identity_IsSet{ false };
    /** @brief Gets the value of Identity_Optional, regardless of it having been set */
    TMap<FString, FRHAPI_PlayerResponse>& GetIdentity() { return Identity_Optional; }
    /** @brief Gets the value of Identity_Optional, regardless of it having been set */
    const TMap<FString, FRHAPI_PlayerResponse>& GetIdentity() const { return Identity_Optional; }
    /** @brief Gets the value of Identity_Optional, if it has been set, otherwise it returns DefaultValue */
    const TMap<FString, FRHAPI_PlayerResponse>& GetIdentity(const TMap<FString, FRHAPI_PlayerResponse>& DefaultValue) const { if (Identity_IsSet) return Identity_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Identity_Optional and returns true if it has been set, otherwise returns false */
    bool GetIdentity(TMap<FString, FRHAPI_PlayerResponse>& OutValue) const { if (Identity_IsSet) OutValue = Identity_Optional; return Identity_IsSet; }
    /** @brief Returns a pointer to Identity_Optional, if it has been set, otherwise returns nullptr */
    TMap<FString, FRHAPI_PlayerResponse>* GetIdentityOrNull() { if (Identity_IsSet) return &Identity_Optional; return nullptr; }
    /** @brief Returns a pointer to Identity_Optional, if it has been set, otherwise returns nullptr */
    const TMap<FString, FRHAPI_PlayerResponse>* GetIdentityOrNull() const { if (Identity_IsSet) return &Identity_Optional; return nullptr; }
    /** @brief Sets the value of Identity_Optional and also sets Identity_IsSet to true */
    void SetIdentity(TMap<FString, FRHAPI_PlayerResponse> NewValue) { Identity_Optional = NewValue; Identity_IsSet = true; }
     /** @brief Clears the value of Identity_Optional and sets Identity_IsSet to false */
    void ClearIdentity() { Identity_IsSet = false; }
};

/** @} */
