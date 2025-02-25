// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevAccountOrganization.generated.h"

/** @defgroup RHAPI_DevAccountOrganization RallyHere API Model DevAccountOrganization
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREDEVELOPERAPI_API FRHAPI_DevAccountOrganization : public FRHAPI_DevModel
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

    /** @brief Account id */
    FGuid AccountId{  };
    /** @brief Gets the value of AccountId */
    FGuid& GetAccountId() { return AccountId; }
    /** @brief Gets the value of AccountId */
    const FGuid& GetAccountId() const { return AccountId; }
    /** @brief Sets the value of AccountId */
    void SetAccountId(FGuid NewValue) { AccountId = NewValue;  }

    /** @brief Organization that this user belongs to */
    FGuid OrgId{  };
    /** @brief Gets the value of OrgId */
    FGuid& GetOrgId() { return OrgId; }
    /** @brief Gets the value of OrgId */
    const FGuid& GetOrgId() const { return OrgId; }
    /** @brief Sets the value of OrgId */
    void SetOrgId(FGuid NewValue) { OrgId = NewValue;  }
};

/** @} */
