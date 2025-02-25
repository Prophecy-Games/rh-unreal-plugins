// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "AgreementMessage.generated.h"

/** @defgroup RHAPI_AgreementMessage RallyHere API Model AgreementMessage
 *  @{
 */

/**
 * @brief Error message for when a user has not agreed to the EULA, TOS, or Privacy Policy
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_AgreementMessage : public FRHAPI_Model
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

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool AuthSuccess_Optional{  };
    /** @brief true if AuthSuccess_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool AuthSuccess_IsSet{ false };
    /** @brief Gets the value of AuthSuccess_Optional, regardless of it having been set */
    bool& GetAuthSuccess() { return AuthSuccess_Optional; }
    /** @brief Gets the value of AuthSuccess_Optional, regardless of it having been set */
    const bool& GetAuthSuccess() const { return AuthSuccess_Optional; }
    /** @brief Gets the value of AuthSuccess_Optional, if it has been set, otherwise it returns DefaultValue */
    const bool& GetAuthSuccess(const bool& DefaultValue) const { if (AuthSuccess_IsSet) return AuthSuccess_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of AuthSuccess_Optional and returns true if it has been set, otherwise returns false */
    bool GetAuthSuccess(bool& OutValue) const { if (AuthSuccess_IsSet) OutValue = AuthSuccess_Optional; return AuthSuccess_IsSet; }
    /** @brief Returns a pointer to AuthSuccess_Optional, if it has been set, otherwise returns nullptr */
    bool* GetAuthSuccessOrNull() { if (AuthSuccess_IsSet) return &AuthSuccess_Optional; return nullptr; }
    /** @brief Returns a pointer to AuthSuccess_Optional, if it has been set, otherwise returns nullptr */
    const bool* GetAuthSuccessOrNull() const { if (AuthSuccess_IsSet) return &AuthSuccess_Optional; return nullptr; }
    /** @brief Sets the value of AuthSuccess_Optional and also sets AuthSuccess_IsSet to true */
    void SetAuthSuccess(bool NewValue) { AuthSuccess_Optional = NewValue; AuthSuccess_IsSet = true; }
     /** @brief Clears the value of AuthSuccess_Optional and sets AuthSuccess_IsSet to false */
    void ClearAuthSuccess() { AuthSuccess_Optional = true; AuthSuccess_IsSet = false; }
    /** @brief Returns true if AuthSuccess_Optional is set and matches the default value */
    bool IsAuthSuccessDefaultValue() const { return AuthSuccess_IsSet && AuthSuccess_Optional == true; }
    /** @brief Sets the value of AuthSuccess_Optional to its default and also sets AuthSuccess_IsSet to true */
    void SetAuthSuccessToDefault() { AuthSuccess_Optional = true; AuthSuccess_IsSet = true; }

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString ErrorCode{  };
    /** @brief Gets the value of ErrorCode */
    FString& GetErrorCode() { return ErrorCode; }
    /** @brief Gets the value of ErrorCode */
    const FString& GetErrorCode() const { return ErrorCode; }
    /** @brief Sets the value of ErrorCode */
    void SetErrorCode(FString NewValue) { ErrorCode = NewValue;  }

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString Desc{  };
    /** @brief Gets the value of Desc */
    FString& GetDesc() { return Desc; }
    /** @brief Gets the value of Desc */
    const FString& GetDesc() const { return Desc; }
    /** @brief Sets the value of Desc */
    void SetDesc(FString NewValue) { Desc = NewValue;  }

    /** @brief Whether the user needs to accept the End User License Agreement */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool NeedsEula_Optional{  };
    /** @brief true if NeedsEula_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool NeedsEula_IsSet{ false };
    /** @brief Gets the value of NeedsEula_Optional, regardless of it having been set */
    bool& GetNeedsEula() { return NeedsEula_Optional; }
    /** @brief Gets the value of NeedsEula_Optional, regardless of it having been set */
    const bool& GetNeedsEula() const { return NeedsEula_Optional; }
    /** @brief Gets the value of NeedsEula_Optional, if it has been set, otherwise it returns DefaultValue */
    const bool& GetNeedsEula(const bool& DefaultValue) const { if (NeedsEula_IsSet) return NeedsEula_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of NeedsEula_Optional and returns true if it has been set, otherwise returns false */
    bool GetNeedsEula(bool& OutValue) const { if (NeedsEula_IsSet) OutValue = NeedsEula_Optional; return NeedsEula_IsSet; }
    /** @brief Returns a pointer to NeedsEula_Optional, if it has been set, otherwise returns nullptr */
    bool* GetNeedsEulaOrNull() { if (NeedsEula_IsSet) return &NeedsEula_Optional; return nullptr; }
    /** @brief Returns a pointer to NeedsEula_Optional, if it has been set, otherwise returns nullptr */
    const bool* GetNeedsEulaOrNull() const { if (NeedsEula_IsSet) return &NeedsEula_Optional; return nullptr; }
    /** @brief Sets the value of NeedsEula_Optional and also sets NeedsEula_IsSet to true */
    void SetNeedsEula(bool NewValue) { NeedsEula_Optional = NewValue; NeedsEula_IsSet = true; }
     /** @brief Clears the value of NeedsEula_Optional and sets NeedsEula_IsSet to false */
    void ClearNeedsEula() { NeedsEula_Optional = false; NeedsEula_IsSet = false; }
    /** @brief Returns true if NeedsEula_Optional is set and matches the default value */
    bool IsNeedsEulaDefaultValue() const { return NeedsEula_IsSet && NeedsEula_Optional == false; }
    /** @brief Sets the value of NeedsEula_Optional to its default and also sets NeedsEula_IsSet to true */
    void SetNeedsEulaToDefault() { NeedsEula_Optional = false; NeedsEula_IsSet = true; }

    /** @brief Whether the user needs to accept the Terms of Service */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool NeedsTos_Optional{  };
    /** @brief true if NeedsTos_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool NeedsTos_IsSet{ false };
    /** @brief Gets the value of NeedsTos_Optional, regardless of it having been set */
    bool& GetNeedsTos() { return NeedsTos_Optional; }
    /** @brief Gets the value of NeedsTos_Optional, regardless of it having been set */
    const bool& GetNeedsTos() const { return NeedsTos_Optional; }
    /** @brief Gets the value of NeedsTos_Optional, if it has been set, otherwise it returns DefaultValue */
    const bool& GetNeedsTos(const bool& DefaultValue) const { if (NeedsTos_IsSet) return NeedsTos_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of NeedsTos_Optional and returns true if it has been set, otherwise returns false */
    bool GetNeedsTos(bool& OutValue) const { if (NeedsTos_IsSet) OutValue = NeedsTos_Optional; return NeedsTos_IsSet; }
    /** @brief Returns a pointer to NeedsTos_Optional, if it has been set, otherwise returns nullptr */
    bool* GetNeedsTosOrNull() { if (NeedsTos_IsSet) return &NeedsTos_Optional; return nullptr; }
    /** @brief Returns a pointer to NeedsTos_Optional, if it has been set, otherwise returns nullptr */
    const bool* GetNeedsTosOrNull() const { if (NeedsTos_IsSet) return &NeedsTos_Optional; return nullptr; }
    /** @brief Sets the value of NeedsTos_Optional and also sets NeedsTos_IsSet to true */
    void SetNeedsTos(bool NewValue) { NeedsTos_Optional = NewValue; NeedsTos_IsSet = true; }
     /** @brief Clears the value of NeedsTos_Optional and sets NeedsTos_IsSet to false */
    void ClearNeedsTos() { NeedsTos_Optional = false; NeedsTos_IsSet = false; }
    /** @brief Returns true if NeedsTos_Optional is set and matches the default value */
    bool IsNeedsTosDefaultValue() const { return NeedsTos_IsSet && NeedsTos_Optional == false; }
    /** @brief Sets the value of NeedsTos_Optional to its default and also sets NeedsTos_IsSet to true */
    void SetNeedsTosToDefault() { NeedsTos_Optional = false; NeedsTos_IsSet = true; }

    /** @brief Whether the user needs to accept the Privacy Policy */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool NeedsPrivacyPolicy_Optional{  };
    /** @brief true if NeedsPrivacyPolicy_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool NeedsPrivacyPolicy_IsSet{ false };
    /** @brief Gets the value of NeedsPrivacyPolicy_Optional, regardless of it having been set */
    bool& GetNeedsPrivacyPolicy() { return NeedsPrivacyPolicy_Optional; }
    /** @brief Gets the value of NeedsPrivacyPolicy_Optional, regardless of it having been set */
    const bool& GetNeedsPrivacyPolicy() const { return NeedsPrivacyPolicy_Optional; }
    /** @brief Gets the value of NeedsPrivacyPolicy_Optional, if it has been set, otherwise it returns DefaultValue */
    const bool& GetNeedsPrivacyPolicy(const bool& DefaultValue) const { if (NeedsPrivacyPolicy_IsSet) return NeedsPrivacyPolicy_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of NeedsPrivacyPolicy_Optional and returns true if it has been set, otherwise returns false */
    bool GetNeedsPrivacyPolicy(bool& OutValue) const { if (NeedsPrivacyPolicy_IsSet) OutValue = NeedsPrivacyPolicy_Optional; return NeedsPrivacyPolicy_IsSet; }
    /** @brief Returns a pointer to NeedsPrivacyPolicy_Optional, if it has been set, otherwise returns nullptr */
    bool* GetNeedsPrivacyPolicyOrNull() { if (NeedsPrivacyPolicy_IsSet) return &NeedsPrivacyPolicy_Optional; return nullptr; }
    /** @brief Returns a pointer to NeedsPrivacyPolicy_Optional, if it has been set, otherwise returns nullptr */
    const bool* GetNeedsPrivacyPolicyOrNull() const { if (NeedsPrivacyPolicy_IsSet) return &NeedsPrivacyPolicy_Optional; return nullptr; }
    /** @brief Sets the value of NeedsPrivacyPolicy_Optional and also sets NeedsPrivacyPolicy_IsSet to true */
    void SetNeedsPrivacyPolicy(bool NewValue) { NeedsPrivacyPolicy_Optional = NewValue; NeedsPrivacyPolicy_IsSet = true; }
     /** @brief Clears the value of NeedsPrivacyPolicy_Optional and sets NeedsPrivacyPolicy_IsSet to false */
    void ClearNeedsPrivacyPolicy() { NeedsPrivacyPolicy_Optional = false; NeedsPrivacyPolicy_IsSet = false; }
    /** @brief Returns true if NeedsPrivacyPolicy_Optional is set and matches the default value */
    bool IsNeedsPrivacyPolicyDefaultValue() const { return NeedsPrivacyPolicy_IsSet && NeedsPrivacyPolicy_Optional == false; }
    /** @brief Sets the value of NeedsPrivacyPolicy_Optional to its default and also sets NeedsPrivacyPolicy_IsSet to true */
    void SetNeedsPrivacyPolicyToDefault() { NeedsPrivacyPolicy_Optional = false; NeedsPrivacyPolicy_IsSet = true; }
};

/** @} */
