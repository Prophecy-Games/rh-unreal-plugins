// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevSteamConfig.generated.h"

/** @defgroup RHAPI_DevSteamConfig RallyHere API Model DevSteamConfig
 *  @{
 */

/**
 * @brief Steam options
 */
USTRUCT(BlueprintType)
struct RALLYHEREDEVELOPERAPI_API FRHAPI_DevSteamConfig : public FRHAPI_DevModel
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

    /** @brief Whether or not to enable Steam */
    bool EnableLogin_Optional{  };
    /** @brief true if EnableLogin_Optional has been set to a value */
    bool EnableLogin_IsSet{ false };
    /** @brief Gets the value of EnableLogin_Optional, regardless of it having been set */
    bool& GetEnableLogin() { return EnableLogin_Optional; }
    /** @brief Gets the value of EnableLogin_Optional, regardless of it having been set */
    const bool& GetEnableLogin() const { return EnableLogin_Optional; }
    /** @brief Gets the value of EnableLogin_Optional, if it has been set, otherwise it returns DefaultValue */
    const bool& GetEnableLogin(const bool& DefaultValue) const { if (EnableLogin_IsSet) return EnableLogin_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of EnableLogin_Optional and returns true if it has been set, otherwise returns false */
    bool GetEnableLogin(bool& OutValue) const { if (EnableLogin_IsSet) OutValue = EnableLogin_Optional; return EnableLogin_IsSet; }
    /** @brief Returns a pointer to EnableLogin_Optional, if it has been set, otherwise returns nullptr */
    bool* GetEnableLoginOrNull() { if (EnableLogin_IsSet) return &EnableLogin_Optional; return nullptr; }
    /** @brief Returns a pointer to EnableLogin_Optional, if it has been set, otherwise returns nullptr */
    const bool* GetEnableLoginOrNull() const { if (EnableLogin_IsSet) return &EnableLogin_Optional; return nullptr; }
    /** @brief Sets the value of EnableLogin_Optional and also sets EnableLogin_IsSet to true */
    void SetEnableLogin(bool NewValue) { EnableLogin_Optional = NewValue; EnableLogin_IsSet = true; }
     /** @brief Clears the value of EnableLogin_Optional and sets EnableLogin_IsSet to false */
    void ClearEnableLogin() { EnableLogin_Optional = true; EnableLogin_IsSet = false; }
    /** @brief Returns true if EnableLogin_Optional is set and matches the default value */
    bool IsEnableLoginDefaultValue() const { return EnableLogin_IsSet && EnableLogin_Optional == true; }
    /** @brief Sets the value of EnableLogin_Optional to its default and also sets EnableLogin_IsSet to true */
    void SetEnableLoginToDefault() { EnableLogin_Optional = true; EnableLogin_IsSet = true; }

    /** @brief Whether or not to ban players who refund their wallet purchases */
    bool WalletRefundsTriggerBan_Optional{  };
    /** @brief true if WalletRefundsTriggerBan_Optional has been set to a value */
    bool WalletRefundsTriggerBan_IsSet{ false };
    /** @brief Gets the value of WalletRefundsTriggerBan_Optional, regardless of it having been set */
    bool& GetWalletRefundsTriggerBan() { return WalletRefundsTriggerBan_Optional; }
    /** @brief Gets the value of WalletRefundsTriggerBan_Optional, regardless of it having been set */
    const bool& GetWalletRefundsTriggerBan() const { return WalletRefundsTriggerBan_Optional; }
    /** @brief Gets the value of WalletRefundsTriggerBan_Optional, if it has been set, otherwise it returns DefaultValue */
    const bool& GetWalletRefundsTriggerBan(const bool& DefaultValue) const { if (WalletRefundsTriggerBan_IsSet) return WalletRefundsTriggerBan_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of WalletRefundsTriggerBan_Optional and returns true if it has been set, otherwise returns false */
    bool GetWalletRefundsTriggerBan(bool& OutValue) const { if (WalletRefundsTriggerBan_IsSet) OutValue = WalletRefundsTriggerBan_Optional; return WalletRefundsTriggerBan_IsSet; }
    /** @brief Returns a pointer to WalletRefundsTriggerBan_Optional, if it has been set, otherwise returns nullptr */
    bool* GetWalletRefundsTriggerBanOrNull() { if (WalletRefundsTriggerBan_IsSet) return &WalletRefundsTriggerBan_Optional; return nullptr; }
    /** @brief Returns a pointer to WalletRefundsTriggerBan_Optional, if it has been set, otherwise returns nullptr */
    const bool* GetWalletRefundsTriggerBanOrNull() const { if (WalletRefundsTriggerBan_IsSet) return &WalletRefundsTriggerBan_Optional; return nullptr; }
    /** @brief Sets the value of WalletRefundsTriggerBan_Optional and also sets WalletRefundsTriggerBan_IsSet to true */
    void SetWalletRefundsTriggerBan(bool NewValue) { WalletRefundsTriggerBan_Optional = NewValue; WalletRefundsTriggerBan_IsSet = true; }
     /** @brief Clears the value of WalletRefundsTriggerBan_Optional and sets WalletRefundsTriggerBan_IsSet to false */
    void ClearWalletRefundsTriggerBan() { WalletRefundsTriggerBan_Optional = true; WalletRefundsTriggerBan_IsSet = false; }
    /** @brief Returns true if WalletRefundsTriggerBan_Optional is set and matches the default value */
    bool IsWalletRefundsTriggerBanDefaultValue() const { return WalletRefundsTriggerBan_IsSet && WalletRefundsTriggerBan_Optional == true; }
    /** @brief Sets the value of WalletRefundsTriggerBan_Optional to its default and also sets WalletRefundsTriggerBan_IsSet to true */
    void SetWalletRefundsTriggerBanToDefault() { WalletRefundsTriggerBan_Optional = true; WalletRefundsTriggerBan_IsSet = true; }

    /** @brief Whether or not to enforce VAC bans */
    bool EnforceVacBans_Optional{  };
    /** @brief true if EnforceVacBans_Optional has been set to a value */
    bool EnforceVacBans_IsSet{ false };
    /** @brief Gets the value of EnforceVacBans_Optional, regardless of it having been set */
    bool& GetEnforceVacBans() { return EnforceVacBans_Optional; }
    /** @brief Gets the value of EnforceVacBans_Optional, regardless of it having been set */
    const bool& GetEnforceVacBans() const { return EnforceVacBans_Optional; }
    /** @brief Gets the value of EnforceVacBans_Optional, if it has been set, otherwise it returns DefaultValue */
    const bool& GetEnforceVacBans(const bool& DefaultValue) const { if (EnforceVacBans_IsSet) return EnforceVacBans_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of EnforceVacBans_Optional and returns true if it has been set, otherwise returns false */
    bool GetEnforceVacBans(bool& OutValue) const { if (EnforceVacBans_IsSet) OutValue = EnforceVacBans_Optional; return EnforceVacBans_IsSet; }
    /** @brief Returns a pointer to EnforceVacBans_Optional, if it has been set, otherwise returns nullptr */
    bool* GetEnforceVacBansOrNull() { if (EnforceVacBans_IsSet) return &EnforceVacBans_Optional; return nullptr; }
    /** @brief Returns a pointer to EnforceVacBans_Optional, if it has been set, otherwise returns nullptr */
    const bool* GetEnforceVacBansOrNull() const { if (EnforceVacBans_IsSet) return &EnforceVacBans_Optional; return nullptr; }
    /** @brief Sets the value of EnforceVacBans_Optional and also sets EnforceVacBans_IsSet to true */
    void SetEnforceVacBans(bool NewValue) { EnforceVacBans_Optional = NewValue; EnforceVacBans_IsSet = true; }
     /** @brief Clears the value of EnforceVacBans_Optional and sets EnforceVacBans_IsSet to false */
    void ClearEnforceVacBans() { EnforceVacBans_Optional = true; EnforceVacBans_IsSet = false; }
    /** @brief Returns true if EnforceVacBans_Optional is set and matches the default value */
    bool IsEnforceVacBansDefaultValue() const { return EnforceVacBans_IsSet && EnforceVacBans_Optional == true; }
    /** @brief Sets the value of EnforceVacBans_Optional to its default and also sets EnforceVacBans_IsSet to true */
    void SetEnforceVacBansToDefault() { EnforceVacBans_Optional = true; EnforceVacBans_IsSet = true; }

    /** @brief Whether or not to enforce publisher bans */
    bool EnforcePublisherBans_Optional{  };
    /** @brief true if EnforcePublisherBans_Optional has been set to a value */
    bool EnforcePublisherBans_IsSet{ false };
    /** @brief Gets the value of EnforcePublisherBans_Optional, regardless of it having been set */
    bool& GetEnforcePublisherBans() { return EnforcePublisherBans_Optional; }
    /** @brief Gets the value of EnforcePublisherBans_Optional, regardless of it having been set */
    const bool& GetEnforcePublisherBans() const { return EnforcePublisherBans_Optional; }
    /** @brief Gets the value of EnforcePublisherBans_Optional, if it has been set, otherwise it returns DefaultValue */
    const bool& GetEnforcePublisherBans(const bool& DefaultValue) const { if (EnforcePublisherBans_IsSet) return EnforcePublisherBans_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of EnforcePublisherBans_Optional and returns true if it has been set, otherwise returns false */
    bool GetEnforcePublisherBans(bool& OutValue) const { if (EnforcePublisherBans_IsSet) OutValue = EnforcePublisherBans_Optional; return EnforcePublisherBans_IsSet; }
    /** @brief Returns a pointer to EnforcePublisherBans_Optional, if it has been set, otherwise returns nullptr */
    bool* GetEnforcePublisherBansOrNull() { if (EnforcePublisherBans_IsSet) return &EnforcePublisherBans_Optional; return nullptr; }
    /** @brief Returns a pointer to EnforcePublisherBans_Optional, if it has been set, otherwise returns nullptr */
    const bool* GetEnforcePublisherBansOrNull() const { if (EnforcePublisherBans_IsSet) return &EnforcePublisherBans_Optional; return nullptr; }
    /** @brief Sets the value of EnforcePublisherBans_Optional and also sets EnforcePublisherBans_IsSet to true */
    void SetEnforcePublisherBans(bool NewValue) { EnforcePublisherBans_Optional = NewValue; EnforcePublisherBans_IsSet = true; }
     /** @brief Clears the value of EnforcePublisherBans_Optional and sets EnforcePublisherBans_IsSet to false */
    void ClearEnforcePublisherBans() { EnforcePublisherBans_Optional = true; EnforcePublisherBans_IsSet = false; }
    /** @brief Returns true if EnforcePublisherBans_Optional is set and matches the default value */
    bool IsEnforcePublisherBansDefaultValue() const { return EnforcePublisherBans_IsSet && EnforcePublisherBans_Optional == true; }
    /** @brief Sets the value of EnforcePublisherBans_Optional to its default and also sets EnforcePublisherBans_IsSet to true */
    void SetEnforcePublisherBansToDefault() { EnforcePublisherBans_Optional = true; EnforcePublisherBans_IsSet = true; }

    /** @brief Steam app ID for the game */
    int32 Appid{ 0 };
    /** @brief Gets the value of Appid */
    int32& GetAppid() { return Appid; }
    /** @brief Gets the value of Appid */
    const int32& GetAppid() const { return Appid; }
    /** @brief Sets the value of Appid */
    void SetAppid(int32 NewValue) { Appid = NewValue;  }
    /** @brief Returns true if Appid matches the default value */
    bool IsAppidDefaultValue() const { return Appid == 0; }
    /** @brief Sets the value of Appid to its default  */
    void SetAppidToDefault() { Appid = 0;  }
};

/** @} */
