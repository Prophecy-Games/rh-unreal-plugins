// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "JoinParams.generated.h"

/** @defgroup RHAPI_JoinParams RallyHere API Model JoinParams
 *  @{
 */

/**
 * @brief Parameters provided by the allocation system or an instance on how to connect
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_JoinParams : public FRHAPI_Model
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

    /** @brief Public connection string for instance */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString PublicConnStr{  };
    /** @brief Gets the value of PublicConnStr */
    FString& GetPublicConnStr() { return PublicConnStr; }
    /** @brief Gets the value of PublicConnStr */
    const FString& GetPublicConnStr() const { return PublicConnStr; }
    /** @brief Sets the value of PublicConnStr */
    void SetPublicConnStr(FString NewValue) { PublicConnStr = NewValue;  }

    /** @brief Private connection string for instance */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString PrivateConnStr{  };
    /** @brief Gets the value of PrivateConnStr */
    FString& GetPrivateConnStr() { return PrivateConnStr; }
    /** @brief Gets the value of PrivateConnStr */
    const FString& GetPrivateConnStr() const { return PrivateConnStr; }
    /** @brief Sets the value of PrivateConnStr */
    void SetPrivateConnStr(FString NewValue) { PrivateConnStr = NewValue;  }

    /** @brief Custom data to join a instance */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    TMap<FString, FString> CustomData_Optional{  };
    /** @brief true if CustomData_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
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
};

/** @} */
