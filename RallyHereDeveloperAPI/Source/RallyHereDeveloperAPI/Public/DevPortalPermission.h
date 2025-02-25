// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevPortalPermission.generated.h"

/** @defgroup RHAPI_DevPortalPermission RallyHere API Model DevPortalPermission
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREDEVELOPERAPI_API FRHAPI_DevPortalPermission : public FRHAPI_DevModel
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

    FString PermissionId{  };
    /** @brief Gets the value of PermissionId */
    FString& GetPermissionId() { return PermissionId; }
    /** @brief Gets the value of PermissionId */
    const FString& GetPermissionId() const { return PermissionId; }
    /** @brief Sets the value of PermissionId */
    void SetPermissionId(FString NewValue) { PermissionId = NewValue;  }

    FString Type_Optional{  };
    /** @brief true if Type_Optional has been set to a value */
    bool Type_IsSet{ false };
    /** @brief Gets the value of Type_Optional, regardless of it having been set */
    FString& GetType() { return Type_Optional; }
    /** @brief Gets the value of Type_Optional, regardless of it having been set */
    const FString& GetType() const { return Type_Optional; }
    /** @brief Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetType(const FString& DefaultValue) const { if (Type_IsSet) return Type_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false */
    bool GetType(FString& OutValue) const { if (Type_IsSet) OutValue = Type_Optional; return Type_IsSet; }
    /** @brief Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr */
    FString* GetTypeOrNull() { if (Type_IsSet) return &Type_Optional; return nullptr; }
    /** @brief Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetTypeOrNull() const { if (Type_IsSet) return &Type_Optional; return nullptr; }
    /** @brief Sets the value of Type_Optional and also sets Type_IsSet to true */
    void SetType(FString NewValue) { Type_Optional = NewValue; Type_IsSet = true; }
     /** @brief Clears the value of Type_Optional and sets Type_IsSet to false */
    void ClearType() { Type_IsSet = false; }

    FString Scope_Optional{  };
    /** @brief true if Scope_Optional has been set to a value */
    bool Scope_IsSet{ false };
    /** @brief Gets the value of Scope_Optional, regardless of it having been set */
    FString& GetScope() { return Scope_Optional; }
    /** @brief Gets the value of Scope_Optional, regardless of it having been set */
    const FString& GetScope() const { return Scope_Optional; }
    /** @brief Gets the value of Scope_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetScope(const FString& DefaultValue) const { if (Scope_IsSet) return Scope_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Scope_Optional and returns true if it has been set, otherwise returns false */
    bool GetScope(FString& OutValue) const { if (Scope_IsSet) OutValue = Scope_Optional; return Scope_IsSet; }
    /** @brief Returns a pointer to Scope_Optional, if it has been set, otherwise returns nullptr */
    FString* GetScopeOrNull() { if (Scope_IsSet) return &Scope_Optional; return nullptr; }
    /** @brief Returns a pointer to Scope_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetScopeOrNull() const { if (Scope_IsSet) return &Scope_Optional; return nullptr; }
    /** @brief Sets the value of Scope_Optional and also sets Scope_IsSet to true */
    void SetScope(FString NewValue) { Scope_Optional = NewValue; Scope_IsSet = true; }
     /** @brief Clears the value of Scope_Optional and sets Scope_IsSet to false */
    void ClearScope() { Scope_IsSet = false; }

    FString Access_Optional{  };
    /** @brief true if Access_Optional has been set to a value */
    bool Access_IsSet{ false };
    /** @brief Gets the value of Access_Optional, regardless of it having been set */
    FString& GetAccess() { return Access_Optional; }
    /** @brief Gets the value of Access_Optional, regardless of it having been set */
    const FString& GetAccess() const { return Access_Optional; }
    /** @brief Gets the value of Access_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetAccess(const FString& DefaultValue) const { if (Access_IsSet) return Access_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Access_Optional and returns true if it has been set, otherwise returns false */
    bool GetAccess(FString& OutValue) const { if (Access_IsSet) OutValue = Access_Optional; return Access_IsSet; }
    /** @brief Returns a pointer to Access_Optional, if it has been set, otherwise returns nullptr */
    FString* GetAccessOrNull() { if (Access_IsSet) return &Access_Optional; return nullptr; }
    /** @brief Returns a pointer to Access_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetAccessOrNull() const { if (Access_IsSet) return &Access_Optional; return nullptr; }
    /** @brief Sets the value of Access_Optional and also sets Access_IsSet to true */
    void SetAccess(FString NewValue) { Access_Optional = NewValue; Access_IsSet = true; }
     /** @brief Clears the value of Access_Optional and sets Access_IsSet to false */
    void ClearAccess() { Access_IsSet = false; }
};

/** @} */
