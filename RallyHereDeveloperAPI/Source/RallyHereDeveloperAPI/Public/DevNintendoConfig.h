// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevNintendoEnv.h"
#include "DevNintendoConfig.generated.h"

/** @defgroup RHAPI_DevNintendoConfig RallyHere API Model DevNintendoConfig
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREDEVELOPERAPI_API FRHAPI_DevNintendoConfig : public FRHAPI_DevModel
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

    FRHAPI_DevNintendoEnv Environments{  };
    /** @brief Gets the value of Environments */
    FRHAPI_DevNintendoEnv& GetEnvironments() { return Environments; }
    /** @brief Gets the value of Environments */
    const FRHAPI_DevNintendoEnv& GetEnvironments() const { return Environments; }
    /** @brief Sets the value of Environments */
    void SetEnvironments(FRHAPI_DevNintendoEnv NewValue) { Environments = NewValue;  }

    /** @brief List of active/enabled nintendo environments for this sandbox */
    TArray<FString> ActiveEnvs_Optional{  };
    /** @brief true if ActiveEnvs_Optional has been set to a value */
    bool ActiveEnvs_IsSet{ false };
    /** @brief Gets the value of ActiveEnvs_Optional, regardless of it having been set */
    TArray<FString>& GetActiveEnvs() { return ActiveEnvs_Optional; }
    /** @brief Gets the value of ActiveEnvs_Optional, regardless of it having been set */
    const TArray<FString>& GetActiveEnvs() const { return ActiveEnvs_Optional; }
    /** @brief Gets the value of ActiveEnvs_Optional, if it has been set, otherwise it returns DefaultValue */
    const TArray<FString>& GetActiveEnvs(const TArray<FString>& DefaultValue) const { if (ActiveEnvs_IsSet) return ActiveEnvs_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of ActiveEnvs_Optional and returns true if it has been set, otherwise returns false */
    bool GetActiveEnvs(TArray<FString>& OutValue) const { if (ActiveEnvs_IsSet) OutValue = ActiveEnvs_Optional; return ActiveEnvs_IsSet; }
    /** @brief Returns a pointer to ActiveEnvs_Optional, if it has been set, otherwise returns nullptr */
    TArray<FString>* GetActiveEnvsOrNull() { if (ActiveEnvs_IsSet) return &ActiveEnvs_Optional; return nullptr; }
    /** @brief Returns a pointer to ActiveEnvs_Optional, if it has been set, otherwise returns nullptr */
    const TArray<FString>* GetActiveEnvsOrNull() const { if (ActiveEnvs_IsSet) return &ActiveEnvs_Optional; return nullptr; }
    /** @brief Sets the value of ActiveEnvs_Optional and also sets ActiveEnvs_IsSet to true */
    void SetActiveEnvs(TArray<FString> NewValue) { ActiveEnvs_Optional = NewValue; ActiveEnvs_IsSet = true; }
     /** @brief Clears the value of ActiveEnvs_Optional and sets ActiveEnvs_IsSet to false */
    void ClearActiveEnvs() { ActiveEnvs_IsSet = false; }

    /** @brief Nintendo app ID. Client tokens are validated against this ID */
    FString AppId{  };
    /** @brief Gets the value of AppId */
    FString& GetAppId() { return AppId; }
    /** @brief Gets the value of AppId */
    const FString& GetAppId() const { return AppId; }
    /** @brief Sets the value of AppId */
    void SetAppId(FString NewValue) { AppId = NewValue;  }
};

/** @} */
