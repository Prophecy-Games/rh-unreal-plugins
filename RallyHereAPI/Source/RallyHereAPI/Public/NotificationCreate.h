// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "NotificationCreate.generated.h"

/** @defgroup RHAPI_NotificationCreate RallyHere API Model NotificationCreate
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_NotificationCreate : public FRHAPI_Model
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

    /** @brief Base Message for the notification */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString Message{  };
    /** @brief Gets the value of Message */
    FString& GetMessage() { return Message; }
    /** @brief Gets the value of Message */
    const FString& GetMessage() const { return Message; }
    /** @brief Sets the value of Message */
    void SetMessage(FString NewValue) { Message = NewValue;  }

    /** @brief Path to get additional data about this notification */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString RhUrl_Optional{  };
    /** @brief true if RhUrl_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool RhUrl_IsSet{ false };
    /** @brief Gets the value of RhUrl_Optional, regardless of it having been set */
    FString& GetRhUrl() { return RhUrl_Optional; }
    /** @brief Gets the value of RhUrl_Optional, regardless of it having been set */
    const FString& GetRhUrl() const { return RhUrl_Optional; }
    /** @brief Gets the value of RhUrl_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetRhUrl(const FString& DefaultValue) const { if (RhUrl_IsSet) return RhUrl_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of RhUrl_Optional and returns true if it has been set, otherwise returns false */
    bool GetRhUrl(FString& OutValue) const { if (RhUrl_IsSet) OutValue = RhUrl_Optional; return RhUrl_IsSet; }
    /** @brief Returns a pointer to RhUrl_Optional, if it has been set, otherwise returns nullptr */
    FString* GetRhUrlOrNull() { if (RhUrl_IsSet) return &RhUrl_Optional; return nullptr; }
    /** @brief Returns a pointer to RhUrl_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetRhUrlOrNull() const { if (RhUrl_IsSet) return &RhUrl_Optional; return nullptr; }
    /** @brief Sets the value of RhUrl_Optional and also sets RhUrl_IsSet to true */
    void SetRhUrl(FString NewValue) { RhUrl_Optional = NewValue; RhUrl_IsSet = true; }
     /** @brief Clears the value of RhUrl_Optional and sets RhUrl_IsSet to false */
    void ClearRhUrl() { RhUrl_IsSet = false; }

    /** @brief Custom values for the notification */
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

    /** @brief ETag for the resource at rh_url at the time of this notification */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString Etag_Optional{  };
    /** @brief true if Etag_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool Etag_IsSet{ false };
    /** @brief Gets the value of Etag_Optional, regardless of it having been set */
    FString& GetEtag() { return Etag_Optional; }
    /** @brief Gets the value of Etag_Optional, regardless of it having been set */
    const FString& GetEtag() const { return Etag_Optional; }
    /** @brief Gets the value of Etag_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetEtag(const FString& DefaultValue) const { if (Etag_IsSet) return Etag_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Etag_Optional and returns true if it has been set, otherwise returns false */
    bool GetEtag(FString& OutValue) const { if (Etag_IsSet) OutValue = Etag_Optional; return Etag_IsSet; }
    /** @brief Returns a pointer to Etag_Optional, if it has been set, otherwise returns nullptr */
    FString* GetEtagOrNull() { if (Etag_IsSet) return &Etag_Optional; return nullptr; }
    /** @brief Returns a pointer to Etag_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetEtagOrNull() const { if (Etag_IsSet) return &Etag_Optional; return nullptr; }
    /** @brief Sets the value of Etag_Optional and also sets Etag_IsSet to true */
    void SetEtag(FString NewValue) { Etag_Optional = NewValue; Etag_IsSet = true; }
     /** @brief Clears the value of Etag_Optional and sets Etag_IsSet to false */
    void ClearEtag() { Etag_IsSet = false; }
};

/** @} */
