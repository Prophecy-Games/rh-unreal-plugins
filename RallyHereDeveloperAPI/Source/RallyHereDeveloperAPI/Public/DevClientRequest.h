// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevClientRequest.generated.h"

/** @defgroup RHAPI_DevClientRequest RallyHere API Model DevClientRequest
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREDEVELOPERAPI_API FRHAPI_DevClientRequest : public FRHAPI_DevModel
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

    /** @brief Client name */
    FString Name{  };
    /** @brief Gets the value of Name */
    FString& GetName() { return Name; }
    /** @brief Gets the value of Name */
    const FString& GetName() const { return Name; }
    /** @brief Sets the value of Name */
    void SetName(FString NewValue) { Name = NewValue;  }

    /** @brief Client secret */
    FString ClientSecret{  };
    /** @brief Gets the value of ClientSecret */
    FString& GetClientSecret() { return ClientSecret; }
    /** @brief Gets the value of ClientSecret */
    const FString& GetClientSecret() const { return ClientSecret; }
    /** @brief Sets the value of ClientSecret */
    void SetClientSecret(FString NewValue) { ClientSecret = NewValue;  }

    /** @brief Policy ID to use for the client */
    FGuid PolicyId{  };
    /** @brief Gets the value of PolicyId */
    FGuid& GetPolicyId() { return PolicyId; }
    /** @brief Gets the value of PolicyId */
    const FGuid& GetPolicyId() const { return PolicyId; }
    /** @brief Sets the value of PolicyId */
    void SetPolicyId(FGuid NewValue) { PolicyId = NewValue;  }

    /** @brief Client description */
    FString Description{  };
    /** @brief Gets the value of Description */
    FString& GetDescription() { return Description; }
    /** @brief Gets the value of Description */
    const FString& GetDescription() const { return Description; }
    /** @brief Sets the value of Description */
    void SetDescription(FString NewValue) { Description = NewValue;  }
};

/** @} */
