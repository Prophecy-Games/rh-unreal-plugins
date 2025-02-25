// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevMenuDataAssignedEntities.h"
#include "DevMenuDataSelectedEntities.h"
#include "DevMenuData.generated.h"

/** @defgroup RHAPI_DevMenuData RallyHere API Model DevMenuData
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREDEVELOPERAPI_API FRHAPI_DevMenuData : public FRHAPI_DevModel
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

    FRHAPI_DevMenuDataSelectedEntities SelectedEntities{  };
    /** @brief Gets the value of SelectedEntities */
    FRHAPI_DevMenuDataSelectedEntities& GetSelectedEntities() { return SelectedEntities; }
    /** @brief Gets the value of SelectedEntities */
    const FRHAPI_DevMenuDataSelectedEntities& GetSelectedEntities() const { return SelectedEntities; }
    /** @brief Sets the value of SelectedEntities */
    void SetSelectedEntities(FRHAPI_DevMenuDataSelectedEntities NewValue) { SelectedEntities = NewValue;  }

    FRHAPI_DevMenuDataAssignedEntities AssignedEntities{  };
    /** @brief Gets the value of AssignedEntities */
    FRHAPI_DevMenuDataAssignedEntities& GetAssignedEntities() { return AssignedEntities; }
    /** @brief Gets the value of AssignedEntities */
    const FRHAPI_DevMenuDataAssignedEntities& GetAssignedEntities() const { return AssignedEntities; }
    /** @brief Sets the value of AssignedEntities */
    void SetAssignedEntities(FRHAPI_DevMenuDataAssignedEntities NewValue) { AssignedEntities = NewValue;  }
};

/** @} */
