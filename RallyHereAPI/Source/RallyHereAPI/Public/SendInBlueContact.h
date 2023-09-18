// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "SendInBlueContact.generated.h"

/** @defgroup RHAPI_SendInBlueContact RallyHere API Model SendInBlueContact
 *  @{
 */

/**
 * @brief SendInBlue contact
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_SendInBlueContact : public FRHAPI_Model
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

    /** @brief Email address */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString Email{  };
    /** @brief Gets the value of Email */
    FString& GetEmail() { return Email; }
    /** @brief Gets the value of Email */
    const FString& GetEmail() const { return Email; }
    /** @brief Sets the value of Email */
    void SetEmail(FString NewValue) { Email = NewValue;  }

    /** @brief Attributes */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FRHAPI_JsonObject Attributes_Optional{  };
    /** @brief true if Attributes_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool Attributes_IsSet{ false };
    /** @brief Gets the value of Attributes_Optional, regardless of it having been set */
    FRHAPI_JsonObject& GetAttributes() { return Attributes_Optional; }
    /** @brief Gets the value of Attributes_Optional, regardless of it having been set */
    const FRHAPI_JsonObject& GetAttributes() const { return Attributes_Optional; }
    /** @brief Gets the value of Attributes_Optional, if it has been set, otherwise it returns DefaultValue */
    const FRHAPI_JsonObject& GetAttributes(const FRHAPI_JsonObject& DefaultValue) const { if (Attributes_IsSet) return Attributes_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Attributes_Optional and returns true if it has been set, otherwise returns false */
    bool GetAttributes(FRHAPI_JsonObject& OutValue) const { if (Attributes_IsSet) OutValue = Attributes_Optional; return Attributes_IsSet; }
    /** @brief Returns a pointer to Attributes_Optional, if it has been set, otherwise returns nullptr */
    FRHAPI_JsonObject* GetAttributesOrNull() { if (Attributes_IsSet) return &Attributes_Optional; return nullptr; }
    /** @brief Returns a pointer to Attributes_Optional, if it has been set, otherwise returns nullptr */
    const FRHAPI_JsonObject* GetAttributesOrNull() const { if (Attributes_IsSet) return &Attributes_Optional; return nullptr; }
    /** @brief Sets the value of Attributes_Optional and also sets Attributes_IsSet to true */
    void SetAttributes(FRHAPI_JsonObject NewValue) { Attributes_Optional = NewValue; Attributes_IsSet = true; }
     /** @brief Clears the value of Attributes_Optional and sets Attributes_IsSet to false */
    void ClearAttributes() { Attributes_IsSet = false; }

    /** @brief Email blacklisted */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool EmailBlacklisted_Optional{  };
    /** @brief true if EmailBlacklisted_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool EmailBlacklisted_IsSet{ false };
    /** @brief Gets the value of EmailBlacklisted_Optional, regardless of it having been set */
    bool& GetEmailBlacklisted() { return EmailBlacklisted_Optional; }
    /** @brief Gets the value of EmailBlacklisted_Optional, regardless of it having been set */
    const bool& GetEmailBlacklisted() const { return EmailBlacklisted_Optional; }
    /** @brief Gets the value of EmailBlacklisted_Optional, if it has been set, otherwise it returns DefaultValue */
    const bool& GetEmailBlacklisted(const bool& DefaultValue) const { if (EmailBlacklisted_IsSet) return EmailBlacklisted_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of EmailBlacklisted_Optional and returns true if it has been set, otherwise returns false */
    bool GetEmailBlacklisted(bool& OutValue) const { if (EmailBlacklisted_IsSet) OutValue = EmailBlacklisted_Optional; return EmailBlacklisted_IsSet; }
    /** @brief Returns a pointer to EmailBlacklisted_Optional, if it has been set, otherwise returns nullptr */
    bool* GetEmailBlacklistedOrNull() { if (EmailBlacklisted_IsSet) return &EmailBlacklisted_Optional; return nullptr; }
    /** @brief Returns a pointer to EmailBlacklisted_Optional, if it has been set, otherwise returns nullptr */
    const bool* GetEmailBlacklistedOrNull() const { if (EmailBlacklisted_IsSet) return &EmailBlacklisted_Optional; return nullptr; }
    /** @brief Sets the value of EmailBlacklisted_Optional and also sets EmailBlacklisted_IsSet to true */
    void SetEmailBlacklisted(bool NewValue) { EmailBlacklisted_Optional = NewValue; EmailBlacklisted_IsSet = true; }
     /** @brief Clears the value of EmailBlacklisted_Optional and sets EmailBlacklisted_IsSet to false */
    void ClearEmailBlacklisted() { EmailBlacklisted_Optional = false; EmailBlacklisted_IsSet = false; }
    /** @brief Returns true if EmailBlacklisted_Optional is set and matches the default value */
    bool IsEmailBlacklistedDefaultValue() const { return EmailBlacklisted_IsSet && EmailBlacklisted_Optional == false; }
    /** @brief Sets the value of EmailBlacklisted_Optional to its default and also sets EmailBlacklisted_IsSet to true */
    void SetEmailBlacklistedToDefault() { EmailBlacklisted_Optional = false; EmailBlacklisted_IsSet = true; }

    /** @brief List IDs */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    TArray<int32> ListIds_Optional{  };
    /** @brief true if ListIds_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool ListIds_IsSet{ false };
    /** @brief Gets the value of ListIds_Optional, regardless of it having been set */
    TArray<int32>& GetListIds() { return ListIds_Optional; }
    /** @brief Gets the value of ListIds_Optional, regardless of it having been set */
    const TArray<int32>& GetListIds() const { return ListIds_Optional; }
    /** @brief Gets the value of ListIds_Optional, if it has been set, otherwise it returns DefaultValue */
    const TArray<int32>& GetListIds(const TArray<int32>& DefaultValue) const { if (ListIds_IsSet) return ListIds_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of ListIds_Optional and returns true if it has been set, otherwise returns false */
    bool GetListIds(TArray<int32>& OutValue) const { if (ListIds_IsSet) OutValue = ListIds_Optional; return ListIds_IsSet; }
    /** @brief Returns a pointer to ListIds_Optional, if it has been set, otherwise returns nullptr */
    TArray<int32>* GetListIdsOrNull() { if (ListIds_IsSet) return &ListIds_Optional; return nullptr; }
    /** @brief Returns a pointer to ListIds_Optional, if it has been set, otherwise returns nullptr */
    const TArray<int32>* GetListIdsOrNull() const { if (ListIds_IsSet) return &ListIds_Optional; return nullptr; }
    /** @brief Sets the value of ListIds_Optional and also sets ListIds_IsSet to true */
    void SetListIds(TArray<int32> NewValue) { ListIds_Optional = NewValue; ListIds_IsSet = true; }
     /** @brief Clears the value of ListIds_Optional and sets ListIds_IsSet to false */
    void ClearListIds() { ListIds_IsSet = false; }

    /** @brief Unlink list IDs */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    TArray<int32> UnlinkListIds_Optional{  };
    /** @brief true if UnlinkListIds_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool UnlinkListIds_IsSet{ false };
    /** @brief Gets the value of UnlinkListIds_Optional, regardless of it having been set */
    TArray<int32>& GetUnlinkListIds() { return UnlinkListIds_Optional; }
    /** @brief Gets the value of UnlinkListIds_Optional, regardless of it having been set */
    const TArray<int32>& GetUnlinkListIds() const { return UnlinkListIds_Optional; }
    /** @brief Gets the value of UnlinkListIds_Optional, if it has been set, otherwise it returns DefaultValue */
    const TArray<int32>& GetUnlinkListIds(const TArray<int32>& DefaultValue) const { if (UnlinkListIds_IsSet) return UnlinkListIds_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of UnlinkListIds_Optional and returns true if it has been set, otherwise returns false */
    bool GetUnlinkListIds(TArray<int32>& OutValue) const { if (UnlinkListIds_IsSet) OutValue = UnlinkListIds_Optional; return UnlinkListIds_IsSet; }
    /** @brief Returns a pointer to UnlinkListIds_Optional, if it has been set, otherwise returns nullptr */
    TArray<int32>* GetUnlinkListIdsOrNull() { if (UnlinkListIds_IsSet) return &UnlinkListIds_Optional; return nullptr; }
    /** @brief Returns a pointer to UnlinkListIds_Optional, if it has been set, otherwise returns nullptr */
    const TArray<int32>* GetUnlinkListIdsOrNull() const { if (UnlinkListIds_IsSet) return &UnlinkListIds_Optional; return nullptr; }
    /** @brief Sets the value of UnlinkListIds_Optional and also sets UnlinkListIds_IsSet to true */
    void SetUnlinkListIds(TArray<int32> NewValue) { UnlinkListIds_Optional = NewValue; UnlinkListIds_IsSet = true; }
     /** @brief Clears the value of UnlinkListIds_Optional and sets UnlinkListIds_IsSet to false */
    void ClearUnlinkListIds() { UnlinkListIds_IsSet = false; }

    /** @brief Update enabled */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool UpdateEnabled_Optional{  };
    /** @brief true if UpdateEnabled_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool UpdateEnabled_IsSet{ false };
    /** @brief Gets the value of UpdateEnabled_Optional, regardless of it having been set */
    bool& GetUpdateEnabled() { return UpdateEnabled_Optional; }
    /** @brief Gets the value of UpdateEnabled_Optional, regardless of it having been set */
    const bool& GetUpdateEnabled() const { return UpdateEnabled_Optional; }
    /** @brief Gets the value of UpdateEnabled_Optional, if it has been set, otherwise it returns DefaultValue */
    const bool& GetUpdateEnabled(const bool& DefaultValue) const { if (UpdateEnabled_IsSet) return UpdateEnabled_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of UpdateEnabled_Optional and returns true if it has been set, otherwise returns false */
    bool GetUpdateEnabled(bool& OutValue) const { if (UpdateEnabled_IsSet) OutValue = UpdateEnabled_Optional; return UpdateEnabled_IsSet; }
    /** @brief Returns a pointer to UpdateEnabled_Optional, if it has been set, otherwise returns nullptr */
    bool* GetUpdateEnabledOrNull() { if (UpdateEnabled_IsSet) return &UpdateEnabled_Optional; return nullptr; }
    /** @brief Returns a pointer to UpdateEnabled_Optional, if it has been set, otherwise returns nullptr */
    const bool* GetUpdateEnabledOrNull() const { if (UpdateEnabled_IsSet) return &UpdateEnabled_Optional; return nullptr; }
    /** @brief Sets the value of UpdateEnabled_Optional and also sets UpdateEnabled_IsSet to true */
    void SetUpdateEnabled(bool NewValue) { UpdateEnabled_Optional = NewValue; UpdateEnabled_IsSet = true; }
     /** @brief Clears the value of UpdateEnabled_Optional and sets UpdateEnabled_IsSet to false */
    void ClearUpdateEnabled() { UpdateEnabled_Optional = false; UpdateEnabled_IsSet = false; }
    /** @brief Returns true if UpdateEnabled_Optional is set and matches the default value */
    bool IsUpdateEnabledDefaultValue() const { return UpdateEnabled_IsSet && UpdateEnabled_Optional == false; }
    /** @brief Sets the value of UpdateEnabled_Optional to its default and also sets UpdateEnabled_IsSet to true */
    void SetUpdateEnabledToDefault() { UpdateEnabled_Optional = false; UpdateEnabled_IsSet = true; }
};

/** @} */
