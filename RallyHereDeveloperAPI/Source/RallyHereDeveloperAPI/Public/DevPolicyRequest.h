// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevPolicyRequest.generated.h"

/** @defgroup RHAPI_DevPolicyRequest RallyHere API Model DevPolicyRequest
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREDEVELOPERAPI_API FRHAPI_DevPolicyRequest : public FRHAPI_DevModel
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

    /** @brief Policy name */
    FString Name{  };
    /** @brief Gets the value of Name */
    FString& GetName() { return Name; }
    /** @brief Gets the value of Name */
    const FString& GetName() const { return Name; }
    /** @brief Sets the value of Name */
    void SetName(FString NewValue) { Name = NewValue;  }

    /** @brief List of permissions applied to the policy */
    TArray<FString> Permissions{  };
    /** @brief Gets the value of Permissions */
    TArray<FString>& GetPermissions() { return Permissions; }
    /** @brief Gets the value of Permissions */
    const TArray<FString>& GetPermissions() const { return Permissions; }
    /** @brief Sets the value of Permissions */
    void SetPermissions(TArray<FString> NewValue) { Permissions = NewValue;  }

    /** @brief Policy description */
    FString Description{  };
    /** @brief Gets the value of Description */
    FString& GetDescription() { return Description; }
    /** @brief Gets the value of Description */
    const FString& GetDescription() const { return Description; }
    /** @brief Sets the value of Description */
    void SetDescription(FString NewValue) { Description = NewValue;  }
};

/** @} */
