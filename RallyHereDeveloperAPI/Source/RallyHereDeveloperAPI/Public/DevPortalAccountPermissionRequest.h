// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevPortalAccountPermissionRequest.generated.h"

/** @defgroup RHAPI_DevPortalAccountPermissionRequest RallyHere API Model DevPortalAccountPermissionRequest
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREDEVELOPERAPI_API FRHAPI_DevPortalAccountPermissionRequest : public FRHAPI_DevModel
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

    FGuid AccountId{  };
    /** @brief Gets the value of AccountId */
    FGuid& GetAccountId() { return AccountId; }
    /** @brief Gets the value of AccountId */
    const FGuid& GetAccountId() const { return AccountId; }
    /** @brief Sets the value of AccountId */
    void SetAccountId(FGuid NewValue) { AccountId = NewValue;  }

    FGuid AssignedOrgId{  };
    /** @brief Gets the value of AssignedOrgId */
    FGuid& GetAssignedOrgId() { return AssignedOrgId; }
    /** @brief Gets the value of AssignedOrgId */
    const FGuid& GetAssignedOrgId() const { return AssignedOrgId; }
    /** @brief Sets the value of AssignedOrgId */
    void SetAssignedOrgId(FGuid NewValue) { AssignedOrgId = NewValue;  }

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

    bool GlobalAdmin_Optional{  };
    /** @brief true if GlobalAdmin_Optional has been set to a value */
    bool GlobalAdmin_IsSet{ false };
    /** @brief Gets the value of GlobalAdmin_Optional, regardless of it having been set */
    bool& GetGlobalAdmin() { return GlobalAdmin_Optional; }
    /** @brief Gets the value of GlobalAdmin_Optional, regardless of it having been set */
    const bool& GetGlobalAdmin() const { return GlobalAdmin_Optional; }
    /** @brief Gets the value of GlobalAdmin_Optional, if it has been set, otherwise it returns DefaultValue */
    const bool& GetGlobalAdmin(const bool& DefaultValue) const { if (GlobalAdmin_IsSet) return GlobalAdmin_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of GlobalAdmin_Optional and returns true if it has been set, otherwise returns false */
    bool GetGlobalAdmin(bool& OutValue) const { if (GlobalAdmin_IsSet) OutValue = GlobalAdmin_Optional; return GlobalAdmin_IsSet; }
    /** @brief Returns a pointer to GlobalAdmin_Optional, if it has been set, otherwise returns nullptr */
    bool* GetGlobalAdminOrNull() { if (GlobalAdmin_IsSet) return &GlobalAdmin_Optional; return nullptr; }
    /** @brief Returns a pointer to GlobalAdmin_Optional, if it has been set, otherwise returns nullptr */
    const bool* GetGlobalAdminOrNull() const { if (GlobalAdmin_IsSet) return &GlobalAdmin_Optional; return nullptr; }
    /** @brief Sets the value of GlobalAdmin_Optional and also sets GlobalAdmin_IsSet to true */
    void SetGlobalAdmin(bool NewValue) { GlobalAdmin_Optional = NewValue; GlobalAdmin_IsSet = true; }
     /** @brief Clears the value of GlobalAdmin_Optional and sets GlobalAdmin_IsSet to false */
    void ClearGlobalAdmin() { GlobalAdmin_Optional = false; GlobalAdmin_IsSet = false; }
    /** @brief Returns true if GlobalAdmin_Optional is set and matches the default value */
    bool IsGlobalAdminDefaultValue() const { return GlobalAdmin_IsSet && GlobalAdmin_Optional == false; }
    /** @brief Sets the value of GlobalAdmin_Optional to its default and also sets GlobalAdmin_IsSet to true */
    void SetGlobalAdminToDefault() { GlobalAdmin_Optional = false; GlobalAdmin_IsSet = true; }

    FGuid AccountPermissionId{  };
    /** @brief Gets the value of AccountPermissionId */
    FGuid& GetAccountPermissionId() { return AccountPermissionId; }
    /** @brief Gets the value of AccountPermissionId */
    const FGuid& GetAccountPermissionId() const { return AccountPermissionId; }
    /** @brief Sets the value of AccountPermissionId */
    void SetAccountPermissionId(FGuid NewValue) { AccountPermissionId = NewValue;  }

    FString PermissionId{  };
    /** @brief Gets the value of PermissionId */
    FString& GetPermissionId() { return PermissionId; }
    /** @brief Gets the value of PermissionId */
    const FString& GetPermissionId() const { return PermissionId; }
    /** @brief Sets the value of PermissionId */
    void SetPermissionId(FString NewValue) { PermissionId = NewValue;  }
};

/** @} */
