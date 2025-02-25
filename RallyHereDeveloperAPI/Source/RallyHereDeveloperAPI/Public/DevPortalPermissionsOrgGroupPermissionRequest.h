// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevPortalPermissionsOrgGroupPermissionRequest.generated.h"

/** @defgroup RHAPI_DevPortalPermissionsOrgGroupPermissionRequest RallyHere API Model DevPortalPermissionsOrgGroupPermissionRequest
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREDEVELOPERAPI_API FRHAPI_DevPortalPermissionsOrgGroupPermissionRequest : public FRHAPI_DevModel
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

    FGuid GroupPermissionId{  };
    /** @brief Gets the value of GroupPermissionId */
    FGuid& GetGroupPermissionId() { return GroupPermissionId; }
    /** @brief Gets the value of GroupPermissionId */
    const FGuid& GetGroupPermissionId() const { return GroupPermissionId; }
    /** @brief Sets the value of GroupPermissionId */
    void SetGroupPermissionId(FGuid NewValue) { GroupPermissionId = NewValue;  }

    FGuid GroupId{  };
    /** @brief Gets the value of GroupId */
    FGuid& GetGroupId() { return GroupId; }
    /** @brief Gets the value of GroupId */
    const FGuid& GetGroupId() const { return GroupId; }
    /** @brief Sets the value of GroupId */
    void SetGroupId(FGuid NewValue) { GroupId = NewValue;  }

    FString Level_Optional{  };
    /** @brief true if Level_Optional has been set to a value */
    bool Level_IsSet{ false };
    /** @brief Gets the value of Level_Optional, regardless of it having been set */
    FString& GetLevel() { return Level_Optional; }
    /** @brief Gets the value of Level_Optional, regardless of it having been set */
    const FString& GetLevel() const { return Level_Optional; }
    /** @brief Gets the value of Level_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetLevel(const FString& DefaultValue) const { if (Level_IsSet) return Level_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Level_Optional and returns true if it has been set, otherwise returns false */
    bool GetLevel(FString& OutValue) const { if (Level_IsSet) OutValue = Level_Optional; return Level_IsSet; }
    /** @brief Returns a pointer to Level_Optional, if it has been set, otherwise returns nullptr */
    FString* GetLevelOrNull() { if (Level_IsSet) return &Level_Optional; return nullptr; }
    /** @brief Returns a pointer to Level_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetLevelOrNull() const { if (Level_IsSet) return &Level_Optional; return nullptr; }
    /** @brief Sets the value of Level_Optional and also sets Level_IsSet to true */
    void SetLevel(FString NewValue) { Level_Optional = NewValue; Level_IsSet = true; }
     /** @brief Clears the value of Level_Optional and sets Level_IsSet to false */
    void ClearLevel() { Level_IsSet = false; }

    FGuid LevelId{  };
    /** @brief Gets the value of LevelId */
    FGuid& GetLevelId() { return LevelId; }
    /** @brief Gets the value of LevelId */
    const FGuid& GetLevelId() const { return LevelId; }
    /** @brief Sets the value of LevelId */
    void SetLevelId(FGuid NewValue) { LevelId = NewValue;  }

    FString PermissionId{  };
    /** @brief Gets the value of PermissionId */
    FString& GetPermissionId() { return PermissionId; }
    /** @brief Gets the value of PermissionId */
    const FString& GetPermissionId() const { return PermissionId; }
    /** @brief Sets the value of PermissionId */
    void SetPermissionId(FString NewValue) { PermissionId = NewValue;  }
};

/** @} */
