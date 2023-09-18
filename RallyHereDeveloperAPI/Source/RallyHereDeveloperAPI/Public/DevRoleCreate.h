// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevRoleLoginLootBase.h"
#include "DevRoleCreate.generated.h"

/** @defgroup RHAPI_DevRoleCreate RallyHere API Model DevRoleCreate
 *  @{
 */

/**
 * @brief This mixin is meant to give a set of common properties to root config models
 */
USTRUCT(BlueprintType)
struct RALLYHEREDEVELOPERAPI_API FRHAPI_DevRoleCreate : public FRHAPI_DevModel
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

    /** @brief Name of the resource */
    FString Name_Optional{  };
    /** @brief true if Name_Optional has been set to a value */
    bool Name_IsSet{ false };
    /** @brief Gets the value of Name_Optional, regardless of it having been set */
    FString& GetName() { return Name_Optional; }
    /** @brief Gets the value of Name_Optional, regardless of it having been set */
    const FString& GetName() const { return Name_Optional; }
    /** @brief Gets the value of Name_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetName(const FString& DefaultValue) const { if (Name_IsSet) return Name_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Name_Optional and returns true if it has been set, otherwise returns false */
    bool GetName(FString& OutValue) const { if (Name_IsSet) OutValue = Name_Optional; return Name_IsSet; }
    /** @brief Returns a pointer to Name_Optional, if it has been set, otherwise returns nullptr */
    FString* GetNameOrNull() { if (Name_IsSet) return &Name_Optional; return nullptr; }
    /** @brief Returns a pointer to Name_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetNameOrNull() const { if (Name_IsSet) return &Name_Optional; return nullptr; }
    /** @brief Sets the value of Name_Optional and also sets Name_IsSet to true */
    void SetName(FString NewValue) { Name_Optional = NewValue; Name_IsSet = true; }
     /** @brief Clears the value of Name_Optional and sets Name_IsSet to false */
    void ClearName() { Name_IsSet = false; }

    /** @brief Description of the resource */
    FString Description_Optional{  };
    /** @brief true if Description_Optional has been set to a value */
    bool Description_IsSet{ false };
    /** @brief Gets the value of Description_Optional, regardless of it having been set */
    FString& GetDescription() { return Description_Optional; }
    /** @brief Gets the value of Description_Optional, regardless of it having been set */
    const FString& GetDescription() const { return Description_Optional; }
    /** @brief Gets the value of Description_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetDescription(const FString& DefaultValue) const { if (Description_IsSet) return Description_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Description_Optional and returns true if it has been set, otherwise returns false */
    bool GetDescription(FString& OutValue) const { if (Description_IsSet) OutValue = Description_Optional; return Description_IsSet; }
    /** @brief Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr */
    FString* GetDescriptionOrNull() { if (Description_IsSet) return &Description_Optional; return nullptr; }
    /** @brief Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetDescriptionOrNull() const { if (Description_IsSet) return &Description_Optional; return nullptr; }
    /** @brief Sets the value of Description_Optional and also sets Description_IsSet to true */
    void SetDescription(FString NewValue) { Description_Optional = NewValue; Description_IsSet = true; }
     /** @brief Clears the value of Description_Optional and sets Description_IsSet to false */
    void ClearDescription() { Description_IsSet = false; }

    /** @brief Custom data associated with the resource */
    TMap<FString, FString> CustomData_Optional{  };
    /** @brief true if CustomData_Optional has been set to a value */
    bool CustomData_IsSet{ false };
    /** @brief Gets the value of CustomData_Optional, regardless of it having been set */
    TMap<FString, FString>& GetCustomData() { return CustomData_Optional; }
    /** @brief Gets the value of CustomData_Optional, regardless of it having been set */
    const TMap<FString, FString>& GetCustomData() const { return CustomData_Optional; }
    /** @brief Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue */
    const TMap<FString, FString>& GetCustomData(const TMap<FString, FString>& DefaultValue) const { if (CustomData_IsSet) return CustomData_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false */
    bool GetCustomData(TMap<FString, FString>& OutValue) const { if (CustomData_IsSet) OutValue = CustomData_Optional; return CustomData_IsSet; }
    /** @brief Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr */
    TMap<FString, FString>* GetCustomDataOrNull() { if (CustomData_IsSet) return &CustomData_Optional; return nullptr; }
    /** @brief Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr */
    const TMap<FString, FString>* GetCustomDataOrNull() const { if (CustomData_IsSet) return &CustomData_Optional; return nullptr; }
    /** @brief Sets the value of CustomData_Optional and also sets CustomData_IsSet to true */
    void SetCustomData(TMap<FString, FString> NewValue) { CustomData_Optional = NewValue; CustomData_IsSet = true; }
     /** @brief Clears the value of CustomData_Optional and sets CustomData_IsSet to false */
    void ClearCustomData() { CustomData_IsSet = false; }

    /** @brief List of login loot rewards for this role */
    TArray<FRHAPI_DevRoleLoginLootBase> LoginLootRewards_Optional{  };
    /** @brief true if LoginLootRewards_Optional has been set to a value */
    bool LoginLootRewards_IsSet{ false };
    /** @brief Gets the value of LoginLootRewards_Optional, regardless of it having been set */
    TArray<FRHAPI_DevRoleLoginLootBase>& GetLoginLootRewards() { return LoginLootRewards_Optional; }
    /** @brief Gets the value of LoginLootRewards_Optional, regardless of it having been set */
    const TArray<FRHAPI_DevRoleLoginLootBase>& GetLoginLootRewards() const { return LoginLootRewards_Optional; }
    /** @brief Gets the value of LoginLootRewards_Optional, if it has been set, otherwise it returns DefaultValue */
    const TArray<FRHAPI_DevRoleLoginLootBase>& GetLoginLootRewards(const TArray<FRHAPI_DevRoleLoginLootBase>& DefaultValue) const { if (LoginLootRewards_IsSet) return LoginLootRewards_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of LoginLootRewards_Optional and returns true if it has been set, otherwise returns false */
    bool GetLoginLootRewards(TArray<FRHAPI_DevRoleLoginLootBase>& OutValue) const { if (LoginLootRewards_IsSet) OutValue = LoginLootRewards_Optional; return LoginLootRewards_IsSet; }
    /** @brief Returns a pointer to LoginLootRewards_Optional, if it has been set, otherwise returns nullptr */
    TArray<FRHAPI_DevRoleLoginLootBase>* GetLoginLootRewardsOrNull() { if (LoginLootRewards_IsSet) return &LoginLootRewards_Optional; return nullptr; }
    /** @brief Returns a pointer to LoginLootRewards_Optional, if it has been set, otherwise returns nullptr */
    const TArray<FRHAPI_DevRoleLoginLootBase>* GetLoginLootRewardsOrNull() const { if (LoginLootRewards_IsSet) return &LoginLootRewards_Optional; return nullptr; }
    /** @brief Sets the value of LoginLootRewards_Optional and also sets LoginLootRewards_IsSet to true */
    void SetLoginLootRewards(TArray<FRHAPI_DevRoleLoginLootBase> NewValue) { LoginLootRewards_Optional = NewValue; LoginLootRewards_IsSet = true; }
     /** @brief Clears the value of LoginLootRewards_Optional and sets LoginLootRewards_IsSet to false */
    void ClearLoginLootRewards() { LoginLootRewards_IsSet = false; }

    /** @brief Unique Identifier for this Role */
    FGuid RoleId_Optional{  };
    /** @brief true if RoleId_Optional has been set to a value */
    bool RoleId_IsSet{ false };
    /** @brief Gets the value of RoleId_Optional, regardless of it having been set */
    FGuid& GetRoleId() { return RoleId_Optional; }
    /** @brief Gets the value of RoleId_Optional, regardless of it having been set */
    const FGuid& GetRoleId() const { return RoleId_Optional; }
    /** @brief Gets the value of RoleId_Optional, if it has been set, otherwise it returns DefaultValue */
    const FGuid& GetRoleId(const FGuid& DefaultValue) const { if (RoleId_IsSet) return RoleId_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of RoleId_Optional and returns true if it has been set, otherwise returns false */
    bool GetRoleId(FGuid& OutValue) const { if (RoleId_IsSet) OutValue = RoleId_Optional; return RoleId_IsSet; }
    /** @brief Returns a pointer to RoleId_Optional, if it has been set, otherwise returns nullptr */
    FGuid* GetRoleIdOrNull() { if (RoleId_IsSet) return &RoleId_Optional; return nullptr; }
    /** @brief Returns a pointer to RoleId_Optional, if it has been set, otherwise returns nullptr */
    const FGuid* GetRoleIdOrNull() const { if (RoleId_IsSet) return &RoleId_Optional; return nullptr; }
    /** @brief Sets the value of RoleId_Optional and also sets RoleId_IsSet to true */
    void SetRoleId(FGuid NewValue) { RoleId_Optional = NewValue; RoleId_IsSet = true; }
     /** @brief Clears the value of RoleId_Optional and sets RoleId_IsSet to false */
    void ClearRoleId() { RoleId_Optional = FGuid(TEXT("f698515f-c38d-40bc-944f-68e0e1228cff")); RoleId_IsSet = false; }
    /** @brief Returns true if RoleId_Optional is set and matches the default value */
    bool IsRoleIdDefaultValue() const { return RoleId_IsSet && RoleId_Optional == FGuid(TEXT("f698515f-c38d-40bc-944f-68e0e1228cff")); }
    /** @brief Sets the value of RoleId_Optional to its default and also sets RoleId_IsSet to true */
    void SetRoleIdToDefault() { RoleId_Optional = FGuid(TEXT("f698515f-c38d-40bc-944f-68e0e1228cff")); RoleId_IsSet = true; }
};

/** @} */
