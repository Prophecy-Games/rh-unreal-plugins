// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevVivoxConfig.generated.h"

/** @defgroup RHAPI_DevVivoxConfig RallyHere API Model DevVivoxConfig
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREDEVELOPERAPI_API FRHAPI_DevVivoxConfig : public FRHAPI_DevModel
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

    /** @brief Whether or not to enable Vivox logins */
    bool Enable_Optional{  };
    /** @brief true if Enable_Optional has been set to a value */
    bool Enable_IsSet{ false };
    /** @brief Gets the value of Enable_Optional, regardless of it having been set */
    bool& GetEnable() { return Enable_Optional; }
    /** @brief Gets the value of Enable_Optional, regardless of it having been set */
    const bool& GetEnable() const { return Enable_Optional; }
    /** @brief Gets the value of Enable_Optional, if it has been set, otherwise it returns DefaultValue */
    const bool& GetEnable(const bool& DefaultValue) const { if (Enable_IsSet) return Enable_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Enable_Optional and returns true if it has been set, otherwise returns false */
    bool GetEnable(bool& OutValue) const { if (Enable_IsSet) OutValue = Enable_Optional; return Enable_IsSet; }
    /** @brief Returns a pointer to Enable_Optional, if it has been set, otherwise returns nullptr */
    bool* GetEnableOrNull() { if (Enable_IsSet) return &Enable_Optional; return nullptr; }
    /** @brief Returns a pointer to Enable_Optional, if it has been set, otherwise returns nullptr */
    const bool* GetEnableOrNull() const { if (Enable_IsSet) return &Enable_Optional; return nullptr; }
    /** @brief Sets the value of Enable_Optional and also sets Enable_IsSet to true */
    void SetEnable(bool NewValue) { Enable_Optional = NewValue; Enable_IsSet = true; }
     /** @brief Clears the value of Enable_Optional and sets Enable_IsSet to false */
    void ClearEnable() { Enable_Optional = true; Enable_IsSet = false; }
    /** @brief Returns true if Enable_Optional is set and matches the default value */
    bool IsEnableDefaultValue() const { return Enable_IsSet && Enable_Optional == true; }
    /** @brief Sets the value of Enable_Optional to its default and also sets Enable_IsSet to true */
    void SetEnableToDefault() { Enable_Optional = true; Enable_IsSet = true; }

    /** @brief Vivox server URL (e.g. game_name.vivox.com) */
    FString Server{  };
    /** @brief Gets the value of Server */
    FString& GetServer() { return Server; }
    /** @brief Gets the value of Server */
    const FString& GetServer() const { return Server; }
    /** @brief Sets the value of Server */
    void SetServer(FString NewValue) { Server = NewValue;  }

    /** @brief Vivox key issuer */
    FString KeyIssuer{  };
    /** @brief Gets the value of KeyIssuer */
    FString& GetKeyIssuer() { return KeyIssuer; }
    /** @brief Gets the value of KeyIssuer */
    const FString& GetKeyIssuer() const { return KeyIssuer; }
    /** @brief Sets the value of KeyIssuer */
    void SetKeyIssuer(FString NewValue) { KeyIssuer = NewValue;  }

    /** @brief Number of seconds that vivox tokens last before expiration */
    int32 KeyTime_Optional{  };
    /** @brief true if KeyTime_Optional has been set to a value */
    bool KeyTime_IsSet{ false };
    /** @brief Gets the value of KeyTime_Optional, regardless of it having been set */
    int32& GetKeyTime() { return KeyTime_Optional; }
    /** @brief Gets the value of KeyTime_Optional, regardless of it having been set */
    const int32& GetKeyTime() const { return KeyTime_Optional; }
    /** @brief Gets the value of KeyTime_Optional, if it has been set, otherwise it returns DefaultValue */
    const int32& GetKeyTime(const int32& DefaultValue) const { if (KeyTime_IsSet) return KeyTime_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of KeyTime_Optional and returns true if it has been set, otherwise returns false */
    bool GetKeyTime(int32& OutValue) const { if (KeyTime_IsSet) OutValue = KeyTime_Optional; return KeyTime_IsSet; }
    /** @brief Returns a pointer to KeyTime_Optional, if it has been set, otherwise returns nullptr */
    int32* GetKeyTimeOrNull() { if (KeyTime_IsSet) return &KeyTime_Optional; return nullptr; }
    /** @brief Returns a pointer to KeyTime_Optional, if it has been set, otherwise returns nullptr */
    const int32* GetKeyTimeOrNull() const { if (KeyTime_IsSet) return &KeyTime_Optional; return nullptr; }
    /** @brief Sets the value of KeyTime_Optional and also sets KeyTime_IsSet to true */
    void SetKeyTime(int32 NewValue) { KeyTime_Optional = NewValue; KeyTime_IsSet = true; }
     /** @brief Clears the value of KeyTime_Optional and sets KeyTime_IsSet to false */
    void ClearKeyTime() { KeyTime_Optional = 60; KeyTime_IsSet = false; }
    /** @brief Returns true if KeyTime_Optional is set and matches the default value */
    bool IsKeyTimeDefaultValue() const { return KeyTime_IsSet && KeyTime_Optional == 60; }
    /** @brief Sets the value of KeyTime_Optional to its default and also sets KeyTime_IsSet to true */
    void SetKeyTimeToDefault() { KeyTime_Optional = 60; KeyTime_IsSet = true; }
};

/** @} */
