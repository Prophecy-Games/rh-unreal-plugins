// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "Platform.h"
#include "PlatformSessionPlayer.h"
#include "PlatformSession.generated.h"

/** @defgroup RHAPI_PlatformSession RallyHere API Model PlatformSession
 *  @{
 */

/**
 * @brief A platform session resource in a RallyHere session
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_PlatformSession : public FRHAPI_Model
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

    /** @brief Platform that this session is for */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    ERHAPI_Platform Platform{  };
    /** @brief Gets the value of Platform */
    ERHAPI_Platform& GetPlatform() { return Platform; }
    /** @brief Gets the value of Platform */
    const ERHAPI_Platform& GetPlatform() const { return Platform; }
    /** @brief Sets the value of Platform */
    void SetPlatform(ERHAPI_Platform NewValue) { Platform = NewValue;  }

    /** @brief Platform-Specific Identifier for the Platform's template */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString PlatformSessionType{  };
    /** @brief Gets the value of PlatformSessionType */
    FString& GetPlatformSessionType() { return PlatformSessionType; }
    /** @brief Gets the value of PlatformSessionType */
    const FString& GetPlatformSessionType() const { return PlatformSessionType; }
    /** @brief Sets the value of PlatformSessionType */
    void SetPlatformSessionType(FString NewValue) { PlatformSessionType = NewValue;  }

    /** @brief Platform session's unique identifier */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString PlatformSessionIdBase64{  };
    /** @brief Gets the value of PlatformSessionIdBase64 */
    FString& GetPlatformSessionIdBase64() { return PlatformSessionIdBase64; }
    /** @brief Gets the value of PlatformSessionIdBase64 */
    const FString& GetPlatformSessionIdBase64() const { return PlatformSessionIdBase64; }
    /** @brief Sets the value of PlatformSessionIdBase64 */
    void SetPlatformSessionIdBase64(FString NewValue) { PlatformSessionIdBase64 = NewValue;  }

    /** @brief DEPRECATED. PlatformSessions no longer keep tracking of players. Players in the platform session */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    TArray<FRHAPI_PlatformSessionPlayer> Players{  };
    /** @brief Gets the value of Players */
    TArray<FRHAPI_PlatformSessionPlayer>& GetPlayers() { return Players; }
    /** @brief Gets the value of Players */
    const TArray<FRHAPI_PlatformSessionPlayer>& GetPlayers() const { return Players; }
    /** @brief Sets the value of Players */
    void SetPlayers(TArray<FRHAPI_PlatformSessionPlayer> NewValue) { Players = NewValue;  }

    /** @brief Product defined custom data fields about the platform session */
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
