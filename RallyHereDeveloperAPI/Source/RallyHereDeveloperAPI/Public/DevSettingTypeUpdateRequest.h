// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevSettingTypeUpdateRequest.generated.h"

/** @defgroup RHAPI_DevSettingTypeUpdateRequest RallyHere API Model DevSettingTypeUpdateRequest
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREDEVELOPERAPI_API FRHAPI_DevSettingTypeUpdateRequest : public FRHAPI_DevModel
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

    /** @brief Version of setting type schema */
    int32 Version_Optional{  };
    /** @brief true if Version_Optional has been set to a value */
    bool Version_IsSet{ false };
    /** @brief Gets the value of Version_Optional, regardless of it having been set */
    int32& GetVersion() { return Version_Optional; }
    /** @brief Gets the value of Version_Optional, regardless of it having been set */
    const int32& GetVersion() const { return Version_Optional; }
    /** @brief Gets the value of Version_Optional, if it has been set, otherwise it returns DefaultValue */
    const int32& GetVersion(const int32& DefaultValue) const { if (Version_IsSet) return Version_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Version_Optional and returns true if it has been set, otherwise returns false */
    bool GetVersion(int32& OutValue) const { if (Version_IsSet) OutValue = Version_Optional; return Version_IsSet; }
    /** @brief Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr */
    int32* GetVersionOrNull() { if (Version_IsSet) return &Version_Optional; return nullptr; }
    /** @brief Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr */
    const int32* GetVersionOrNull() const { if (Version_IsSet) return &Version_Optional; return nullptr; }
    /** @brief Sets the value of Version_Optional and also sets Version_IsSet to true */
    void SetVersion(int32 NewValue) { Version_Optional = NewValue; Version_IsSet = true; }
     /** @brief Clears the value of Version_Optional and sets Version_IsSet to false */
    void ClearVersion() { Version_Optional = 1; Version_IsSet = false; }
    /** @brief Returns true if Version_Optional is set and matches the default value */
    bool IsVersionDefaultValue() const { return Version_IsSet && Version_Optional == 1; }
    /** @brief Sets the value of Version_Optional to its default and also sets Version_IsSet to true */
    void SetVersionToDefault() { Version_Optional = 1; Version_IsSet = true; }

    /** @brief JSONSchema defintion of the setting */
    FRHAPI_DevJsonObject ValueJsonschema_Optional{  };
    /** @brief true if ValueJsonschema_Optional has been set to a value */
    bool ValueJsonschema_IsSet{ false };
    /** @brief Gets the value of ValueJsonschema_Optional, regardless of it having been set */
    FRHAPI_DevJsonObject& GetValueJsonschema() { return ValueJsonschema_Optional; }
    /** @brief Gets the value of ValueJsonschema_Optional, regardless of it having been set */
    const FRHAPI_DevJsonObject& GetValueJsonschema() const { return ValueJsonschema_Optional; }
    /** @brief Gets the value of ValueJsonschema_Optional, if it has been set, otherwise it returns DefaultValue */
    const FRHAPI_DevJsonObject& GetValueJsonschema(const FRHAPI_DevJsonObject& DefaultValue) const { if (ValueJsonschema_IsSet) return ValueJsonschema_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of ValueJsonschema_Optional and returns true if it has been set, otherwise returns false */
    bool GetValueJsonschema(FRHAPI_DevJsonObject& OutValue) const { if (ValueJsonschema_IsSet) OutValue = ValueJsonschema_Optional; return ValueJsonschema_IsSet; }
    /** @brief Returns a pointer to ValueJsonschema_Optional, if it has been set, otherwise returns nullptr */
    FRHAPI_DevJsonObject* GetValueJsonschemaOrNull() { if (ValueJsonschema_IsSet) return &ValueJsonschema_Optional; return nullptr; }
    /** @brief Returns a pointer to ValueJsonschema_Optional, if it has been set, otherwise returns nullptr */
    const FRHAPI_DevJsonObject* GetValueJsonschemaOrNull() const { if (ValueJsonschema_IsSet) return &ValueJsonschema_Optional; return nullptr; }
    /** @brief Sets the value of ValueJsonschema_Optional and also sets ValueJsonschema_IsSet to true */
    void SetValueJsonschema(FRHAPI_DevJsonObject NewValue) { ValueJsonschema_Optional = NewValue; ValueJsonschema_IsSet = true; }
     /** @brief Clears the value of ValueJsonschema_Optional and sets ValueJsonschema_IsSet to false */
    void ClearValueJsonschema() { ValueJsonschema_IsSet = false; }

    /** @brief Whether setting type can be updated */
    bool AllowUpdate_Optional{  };
    /** @brief true if AllowUpdate_Optional has been set to a value */
    bool AllowUpdate_IsSet{ false };
    /** @brief Gets the value of AllowUpdate_Optional, regardless of it having been set */
    bool& GetAllowUpdate() { return AllowUpdate_Optional; }
    /** @brief Gets the value of AllowUpdate_Optional, regardless of it having been set */
    const bool& GetAllowUpdate() const { return AllowUpdate_Optional; }
    /** @brief Gets the value of AllowUpdate_Optional, if it has been set, otherwise it returns DefaultValue */
    const bool& GetAllowUpdate(const bool& DefaultValue) const { if (AllowUpdate_IsSet) return AllowUpdate_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of AllowUpdate_Optional and returns true if it has been set, otherwise returns false */
    bool GetAllowUpdate(bool& OutValue) const { if (AllowUpdate_IsSet) OutValue = AllowUpdate_Optional; return AllowUpdate_IsSet; }
    /** @brief Returns a pointer to AllowUpdate_Optional, if it has been set, otherwise returns nullptr */
    bool* GetAllowUpdateOrNull() { if (AllowUpdate_IsSet) return &AllowUpdate_Optional; return nullptr; }
    /** @brief Returns a pointer to AllowUpdate_Optional, if it has been set, otherwise returns nullptr */
    const bool* GetAllowUpdateOrNull() const { if (AllowUpdate_IsSet) return &AllowUpdate_Optional; return nullptr; }
    /** @brief Sets the value of AllowUpdate_Optional and also sets AllowUpdate_IsSet to true */
    void SetAllowUpdate(bool NewValue) { AllowUpdate_Optional = NewValue; AllowUpdate_IsSet = true; }
     /** @brief Clears the value of AllowUpdate_Optional and sets AllowUpdate_IsSet to false */
    void ClearAllowUpdate() { AllowUpdate_Optional = true; AllowUpdate_IsSet = false; }
    /** @brief Returns true if AllowUpdate_Optional is set and matches the default value */
    bool IsAllowUpdateDefaultValue() const { return AllowUpdate_IsSet && AllowUpdate_Optional == true; }
    /** @brief Sets the value of AllowUpdate_Optional to its default and also sets AllowUpdate_IsSet to true */
    void SetAllowUpdateToDefault() { AllowUpdate_Optional = true; AllowUpdate_IsSet = true; }
};

/** @} */
