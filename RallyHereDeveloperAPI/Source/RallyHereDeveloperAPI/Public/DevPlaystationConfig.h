// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "Containers/Set.h"
#include "DevPlaystationEnvironment.h"
#include "DevPlaystationConfig.generated.h"

/** @defgroup RHAPI_DevPlaystationConfig RallyHere API Model DevPlaystationConfig
 *  @{
 */

/**
 * @brief Playstation options
 */
USTRUCT(BlueprintType)
struct RALLYHEREDEVELOPERAPI_API FRHAPI_DevPlaystationConfig : public FRHAPI_DevModel
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

    /** @brief Whether or not to enable Playstation logins */
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

    /** @brief Currently active Playstation environment to use */
    ERHAPI_DevPlaystationEnvironment Environment_Optional{  };
    /** @brief true if Environment_Optional has been set to a value */
    bool Environment_IsSet{ false };
    /** @brief Gets the value of Environment_Optional, regardless of it having been set */
    ERHAPI_DevPlaystationEnvironment& GetEnvironment() { return Environment_Optional; }
    /** @brief Gets the value of Environment_Optional, regardless of it having been set */
    const ERHAPI_DevPlaystationEnvironment& GetEnvironment() const { return Environment_Optional; }
    /** @brief Gets the value of Environment_Optional, if it has been set, otherwise it returns DefaultValue */
    const ERHAPI_DevPlaystationEnvironment& GetEnvironment(const ERHAPI_DevPlaystationEnvironment& DefaultValue) const { if (Environment_IsSet) return Environment_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Environment_Optional and returns true if it has been set, otherwise returns false */
    bool GetEnvironment(ERHAPI_DevPlaystationEnvironment& OutValue) const { if (Environment_IsSet) OutValue = Environment_Optional; return Environment_IsSet; }
    /** @brief Returns a pointer to Environment_Optional, if it has been set, otherwise returns nullptr */
    ERHAPI_DevPlaystationEnvironment* GetEnvironmentOrNull() { if (Environment_IsSet) return &Environment_Optional; return nullptr; }
    /** @brief Returns a pointer to Environment_Optional, if it has been set, otherwise returns nullptr */
    const ERHAPI_DevPlaystationEnvironment* GetEnvironmentOrNull() const { if (Environment_IsSet) return &Environment_Optional; return nullptr; }
    /** @brief Sets the value of Environment_Optional and also sets Environment_IsSet to true */
    void SetEnvironment(ERHAPI_DevPlaystationEnvironment NewValue) { Environment_Optional = NewValue; Environment_IsSet = true; }
     /** @brief Clears the value of Environment_Optional and sets Environment_IsSet to false */
    void ClearEnvironment() { Environment_IsSet = false; }

    /** @brief Whether or not to use the old entitlements API for PS4 */
    bool Ps4UseEntitlementsV1Api_Optional{  };
    /** @brief true if Ps4UseEntitlementsV1Api_Optional has been set to a value */
    bool Ps4UseEntitlementsV1Api_IsSet{ false };
    /** @brief Gets the value of Ps4UseEntitlementsV1Api_Optional, regardless of it having been set */
    bool& GetPs4UseEntitlementsV1Api() { return Ps4UseEntitlementsV1Api_Optional; }
    /** @brief Gets the value of Ps4UseEntitlementsV1Api_Optional, regardless of it having been set */
    const bool& GetPs4UseEntitlementsV1Api() const { return Ps4UseEntitlementsV1Api_Optional; }
    /** @brief Gets the value of Ps4UseEntitlementsV1Api_Optional, if it has been set, otherwise it returns DefaultValue */
    const bool& GetPs4UseEntitlementsV1Api(const bool& DefaultValue) const { if (Ps4UseEntitlementsV1Api_IsSet) return Ps4UseEntitlementsV1Api_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Ps4UseEntitlementsV1Api_Optional and returns true if it has been set, otherwise returns false */
    bool GetPs4UseEntitlementsV1Api(bool& OutValue) const { if (Ps4UseEntitlementsV1Api_IsSet) OutValue = Ps4UseEntitlementsV1Api_Optional; return Ps4UseEntitlementsV1Api_IsSet; }
    /** @brief Returns a pointer to Ps4UseEntitlementsV1Api_Optional, if it has been set, otherwise returns nullptr */
    bool* GetPs4UseEntitlementsV1ApiOrNull() { if (Ps4UseEntitlementsV1Api_IsSet) return &Ps4UseEntitlementsV1Api_Optional; return nullptr; }
    /** @brief Returns a pointer to Ps4UseEntitlementsV1Api_Optional, if it has been set, otherwise returns nullptr */
    const bool* GetPs4UseEntitlementsV1ApiOrNull() const { if (Ps4UseEntitlementsV1Api_IsSet) return &Ps4UseEntitlementsV1Api_Optional; return nullptr; }
    /** @brief Sets the value of Ps4UseEntitlementsV1Api_Optional and also sets Ps4UseEntitlementsV1Api_IsSet to true */
    void SetPs4UseEntitlementsV1Api(bool NewValue) { Ps4UseEntitlementsV1Api_Optional = NewValue; Ps4UseEntitlementsV1Api_IsSet = true; }
     /** @brief Clears the value of Ps4UseEntitlementsV1Api_Optional and sets Ps4UseEntitlementsV1Api_IsSet to false */
    void ClearPs4UseEntitlementsV1Api() { Ps4UseEntitlementsV1Api_Optional = false; Ps4UseEntitlementsV1Api_IsSet = false; }
    /** @brief Returns true if Ps4UseEntitlementsV1Api_Optional is set and matches the default value */
    bool IsPs4UseEntitlementsV1ApiDefaultValue() const { return Ps4UseEntitlementsV1Api_IsSet && Ps4UseEntitlementsV1Api_Optional == false; }
    /** @brief Sets the value of Ps4UseEntitlementsV1Api_Optional to its default and also sets Ps4UseEntitlementsV1Api_IsSet to true */
    void SetPs4UseEntitlementsV1ApiToDefault() { Ps4UseEntitlementsV1Api_Optional = false; Ps4UseEntitlementsV1Api_IsSet = true; }

    /** @brief Whether or not to use the old entitlements API for PS5 */
    bool Ps5UseEntitlementsV1Api_Optional{  };
    /** @brief true if Ps5UseEntitlementsV1Api_Optional has been set to a value */
    bool Ps5UseEntitlementsV1Api_IsSet{ false };
    /** @brief Gets the value of Ps5UseEntitlementsV1Api_Optional, regardless of it having been set */
    bool& GetPs5UseEntitlementsV1Api() { return Ps5UseEntitlementsV1Api_Optional; }
    /** @brief Gets the value of Ps5UseEntitlementsV1Api_Optional, regardless of it having been set */
    const bool& GetPs5UseEntitlementsV1Api() const { return Ps5UseEntitlementsV1Api_Optional; }
    /** @brief Gets the value of Ps5UseEntitlementsV1Api_Optional, if it has been set, otherwise it returns DefaultValue */
    const bool& GetPs5UseEntitlementsV1Api(const bool& DefaultValue) const { if (Ps5UseEntitlementsV1Api_IsSet) return Ps5UseEntitlementsV1Api_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Ps5UseEntitlementsV1Api_Optional and returns true if it has been set, otherwise returns false */
    bool GetPs5UseEntitlementsV1Api(bool& OutValue) const { if (Ps5UseEntitlementsV1Api_IsSet) OutValue = Ps5UseEntitlementsV1Api_Optional; return Ps5UseEntitlementsV1Api_IsSet; }
    /** @brief Returns a pointer to Ps5UseEntitlementsV1Api_Optional, if it has been set, otherwise returns nullptr */
    bool* GetPs5UseEntitlementsV1ApiOrNull() { if (Ps5UseEntitlementsV1Api_IsSet) return &Ps5UseEntitlementsV1Api_Optional; return nullptr; }
    /** @brief Returns a pointer to Ps5UseEntitlementsV1Api_Optional, if it has been set, otherwise returns nullptr */
    const bool* GetPs5UseEntitlementsV1ApiOrNull() const { if (Ps5UseEntitlementsV1Api_IsSet) return &Ps5UseEntitlementsV1Api_Optional; return nullptr; }
    /** @brief Sets the value of Ps5UseEntitlementsV1Api_Optional and also sets Ps5UseEntitlementsV1Api_IsSet to true */
    void SetPs5UseEntitlementsV1Api(bool NewValue) { Ps5UseEntitlementsV1Api_Optional = NewValue; Ps5UseEntitlementsV1Api_IsSet = true; }
     /** @brief Clears the value of Ps5UseEntitlementsV1Api_Optional and sets Ps5UseEntitlementsV1Api_IsSet to false */
    void ClearPs5UseEntitlementsV1Api() { Ps5UseEntitlementsV1Api_Optional = false; Ps5UseEntitlementsV1Api_IsSet = false; }
    /** @brief Returns true if Ps5UseEntitlementsV1Api_Optional is set and matches the default value */
    bool IsPs5UseEntitlementsV1ApiDefaultValue() const { return Ps5UseEntitlementsV1Api_IsSet && Ps5UseEntitlementsV1Api_Optional == false; }
    /** @brief Sets the value of Ps5UseEntitlementsV1Api_Optional to its default and also sets Ps5UseEntitlementsV1Api_IsSet to true */
    void SetPs5UseEntitlementsV1ApiToDefault() { Ps5UseEntitlementsV1Api_Optional = false; Ps5UseEntitlementsV1Api_IsSet = true; }

    /** @brief Whether or not to use the old auth API for PS4 */
    bool Ps4UseAuthV1Api_Optional{  };
    /** @brief true if Ps4UseAuthV1Api_Optional has been set to a value */
    bool Ps4UseAuthV1Api_IsSet{ false };
    /** @brief Gets the value of Ps4UseAuthV1Api_Optional, regardless of it having been set */
    bool& GetPs4UseAuthV1Api() { return Ps4UseAuthV1Api_Optional; }
    /** @brief Gets the value of Ps4UseAuthV1Api_Optional, regardless of it having been set */
    const bool& GetPs4UseAuthV1Api() const { return Ps4UseAuthV1Api_Optional; }
    /** @brief Gets the value of Ps4UseAuthV1Api_Optional, if it has been set, otherwise it returns DefaultValue */
    const bool& GetPs4UseAuthV1Api(const bool& DefaultValue) const { if (Ps4UseAuthV1Api_IsSet) return Ps4UseAuthV1Api_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Ps4UseAuthV1Api_Optional and returns true if it has been set, otherwise returns false */
    bool GetPs4UseAuthV1Api(bool& OutValue) const { if (Ps4UseAuthV1Api_IsSet) OutValue = Ps4UseAuthV1Api_Optional; return Ps4UseAuthV1Api_IsSet; }
    /** @brief Returns a pointer to Ps4UseAuthV1Api_Optional, if it has been set, otherwise returns nullptr */
    bool* GetPs4UseAuthV1ApiOrNull() { if (Ps4UseAuthV1Api_IsSet) return &Ps4UseAuthV1Api_Optional; return nullptr; }
    /** @brief Returns a pointer to Ps4UseAuthV1Api_Optional, if it has been set, otherwise returns nullptr */
    const bool* GetPs4UseAuthV1ApiOrNull() const { if (Ps4UseAuthV1Api_IsSet) return &Ps4UseAuthV1Api_Optional; return nullptr; }
    /** @brief Sets the value of Ps4UseAuthV1Api_Optional and also sets Ps4UseAuthV1Api_IsSet to true */
    void SetPs4UseAuthV1Api(bool NewValue) { Ps4UseAuthV1Api_Optional = NewValue; Ps4UseAuthV1Api_IsSet = true; }
     /** @brief Clears the value of Ps4UseAuthV1Api_Optional and sets Ps4UseAuthV1Api_IsSet to false */
    void ClearPs4UseAuthV1Api() { Ps4UseAuthV1Api_Optional = false; Ps4UseAuthV1Api_IsSet = false; }
    /** @brief Returns true if Ps4UseAuthV1Api_Optional is set and matches the default value */
    bool IsPs4UseAuthV1ApiDefaultValue() const { return Ps4UseAuthV1Api_IsSet && Ps4UseAuthV1Api_Optional == false; }
    /** @brief Sets the value of Ps4UseAuthV1Api_Optional to its default and also sets Ps4UseAuthV1Api_IsSet to true */
    void SetPs4UseAuthV1ApiToDefault() { Ps4UseAuthV1Api_Optional = false; Ps4UseAuthV1Api_IsSet = true; }

    /** @brief Whether or not to use the old auth API for PS5 */
    bool Ps5UseAuthV1Api_Optional{  };
    /** @brief true if Ps5UseAuthV1Api_Optional has been set to a value */
    bool Ps5UseAuthV1Api_IsSet{ false };
    /** @brief Gets the value of Ps5UseAuthV1Api_Optional, regardless of it having been set */
    bool& GetPs5UseAuthV1Api() { return Ps5UseAuthV1Api_Optional; }
    /** @brief Gets the value of Ps5UseAuthV1Api_Optional, regardless of it having been set */
    const bool& GetPs5UseAuthV1Api() const { return Ps5UseAuthV1Api_Optional; }
    /** @brief Gets the value of Ps5UseAuthV1Api_Optional, if it has been set, otherwise it returns DefaultValue */
    const bool& GetPs5UseAuthV1Api(const bool& DefaultValue) const { if (Ps5UseAuthV1Api_IsSet) return Ps5UseAuthV1Api_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Ps5UseAuthV1Api_Optional and returns true if it has been set, otherwise returns false */
    bool GetPs5UseAuthV1Api(bool& OutValue) const { if (Ps5UseAuthV1Api_IsSet) OutValue = Ps5UseAuthV1Api_Optional; return Ps5UseAuthV1Api_IsSet; }
    /** @brief Returns a pointer to Ps5UseAuthV1Api_Optional, if it has been set, otherwise returns nullptr */
    bool* GetPs5UseAuthV1ApiOrNull() { if (Ps5UseAuthV1Api_IsSet) return &Ps5UseAuthV1Api_Optional; return nullptr; }
    /** @brief Returns a pointer to Ps5UseAuthV1Api_Optional, if it has been set, otherwise returns nullptr */
    const bool* GetPs5UseAuthV1ApiOrNull() const { if (Ps5UseAuthV1Api_IsSet) return &Ps5UseAuthV1Api_Optional; return nullptr; }
    /** @brief Sets the value of Ps5UseAuthV1Api_Optional and also sets Ps5UseAuthV1Api_IsSet to true */
    void SetPs5UseAuthV1Api(bool NewValue) { Ps5UseAuthV1Api_Optional = NewValue; Ps5UseAuthV1Api_IsSet = true; }
     /** @brief Clears the value of Ps5UseAuthV1Api_Optional and sets Ps5UseAuthV1Api_IsSet to false */
    void ClearPs5UseAuthV1Api() { Ps5UseAuthV1Api_Optional = false; Ps5UseAuthV1Api_IsSet = false; }
    /** @brief Returns true if Ps5UseAuthV1Api_Optional is set and matches the default value */
    bool IsPs5UseAuthV1ApiDefaultValue() const { return Ps5UseAuthV1Api_IsSet && Ps5UseAuthV1Api_Optional == false; }
    /** @brief Sets the value of Ps5UseAuthV1Api_Optional to its default and also sets Ps5UseAuthV1Api_IsSet to true */
    void SetPs5UseAuthV1ApiToDefault() { Ps5UseAuthV1Api_Optional = false; Ps5UseAuthV1Api_IsSet = true; }

    /** @brief Playstation web client ID. Client tokens are validated against this ID */
    FString PsnWebClientId{  };
    /** @brief Gets the value of PsnWebClientId */
    FString& GetPsnWebClientId() { return PsnWebClientId; }
    /** @brief Gets the value of PsnWebClientId */
    const FString& GetPsnWebClientId() const { return PsnWebClientId; }
    /** @brief Sets the value of PsnWebClientId */
    void SetPsnWebClientId(FString NewValue) { PsnWebClientId = NewValue;  }

    /** @brief Playstation PS4 client ID. Client tokens are validated against this ID */
    FString Ps4ClientId{  };
    /** @brief Gets the value of Ps4ClientId */
    FString& GetPs4ClientId() { return Ps4ClientId; }
    /** @brief Gets the value of Ps4ClientId */
    const FString& GetPs4ClientId() const { return Ps4ClientId; }
    /** @brief Sets the value of Ps4ClientId */
    void SetPs4ClientId(FString NewValue) { Ps4ClientId = NewValue;  }

    /** @brief Playstation PS5 client ID. Client tokens are validated against this ID */
    FString Ps5ClientId{  };
    /** @brief Gets the value of Ps5ClientId */
    FString& GetPs5ClientId() { return Ps5ClientId; }
    /** @brief Gets the value of Ps5ClientId */
    const FString& GetPs5ClientId() const { return Ps5ClientId; }
    /** @brief Sets the value of Ps5ClientId */
    void SetPs5ClientId(FString NewValue) { Ps5ClientId = NewValue;  }

    /** @brief Whether or not to enable the PS4 V1 portal token details */
    bool Ps4V1PortalTokenDetailsEnable_Optional{  };
    /** @brief true if Ps4V1PortalTokenDetailsEnable_Optional has been set to a value */
    bool Ps4V1PortalTokenDetailsEnable_IsSet{ false };
    /** @brief Gets the value of Ps4V1PortalTokenDetailsEnable_Optional, regardless of it having been set */
    bool& GetPs4V1PortalTokenDetailsEnable() { return Ps4V1PortalTokenDetailsEnable_Optional; }
    /** @brief Gets the value of Ps4V1PortalTokenDetailsEnable_Optional, regardless of it having been set */
    const bool& GetPs4V1PortalTokenDetailsEnable() const { return Ps4V1PortalTokenDetailsEnable_Optional; }
    /** @brief Gets the value of Ps4V1PortalTokenDetailsEnable_Optional, if it has been set, otherwise it returns DefaultValue */
    const bool& GetPs4V1PortalTokenDetailsEnable(const bool& DefaultValue) const { if (Ps4V1PortalTokenDetailsEnable_IsSet) return Ps4V1PortalTokenDetailsEnable_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Ps4V1PortalTokenDetailsEnable_Optional and returns true if it has been set, otherwise returns false */
    bool GetPs4V1PortalTokenDetailsEnable(bool& OutValue) const { if (Ps4V1PortalTokenDetailsEnable_IsSet) OutValue = Ps4V1PortalTokenDetailsEnable_Optional; return Ps4V1PortalTokenDetailsEnable_IsSet; }
    /** @brief Returns a pointer to Ps4V1PortalTokenDetailsEnable_Optional, if it has been set, otherwise returns nullptr */
    bool* GetPs4V1PortalTokenDetailsEnableOrNull() { if (Ps4V1PortalTokenDetailsEnable_IsSet) return &Ps4V1PortalTokenDetailsEnable_Optional; return nullptr; }
    /** @brief Returns a pointer to Ps4V1PortalTokenDetailsEnable_Optional, if it has been set, otherwise returns nullptr */
    const bool* GetPs4V1PortalTokenDetailsEnableOrNull() const { if (Ps4V1PortalTokenDetailsEnable_IsSet) return &Ps4V1PortalTokenDetailsEnable_Optional; return nullptr; }
    /** @brief Sets the value of Ps4V1PortalTokenDetailsEnable_Optional and also sets Ps4V1PortalTokenDetailsEnable_IsSet to true */
    void SetPs4V1PortalTokenDetailsEnable(bool NewValue) { Ps4V1PortalTokenDetailsEnable_Optional = NewValue; Ps4V1PortalTokenDetailsEnable_IsSet = true; }
     /** @brief Clears the value of Ps4V1PortalTokenDetailsEnable_Optional and sets Ps4V1PortalTokenDetailsEnable_IsSet to false */
    void ClearPs4V1PortalTokenDetailsEnable() { Ps4V1PortalTokenDetailsEnable_Optional = false; Ps4V1PortalTokenDetailsEnable_IsSet = false; }
    /** @brief Returns true if Ps4V1PortalTokenDetailsEnable_Optional is set and matches the default value */
    bool IsPs4V1PortalTokenDetailsEnableDefaultValue() const { return Ps4V1PortalTokenDetailsEnable_IsSet && Ps4V1PortalTokenDetailsEnable_Optional == false; }
    /** @brief Sets the value of Ps4V1PortalTokenDetailsEnable_Optional to its default and also sets Ps4V1PortalTokenDetailsEnable_IsSet to true */
    void SetPs4V1PortalTokenDetailsEnableToDefault() { Ps4V1PortalTokenDetailsEnable_Optional = false; Ps4V1PortalTokenDetailsEnable_IsSet = true; }

    /** @brief Whether or not to enable the PS4 V3 portal token details */
    bool Ps4V3PortalTokenDetailsEnable_Optional{  };
    /** @brief true if Ps4V3PortalTokenDetailsEnable_Optional has been set to a value */
    bool Ps4V3PortalTokenDetailsEnable_IsSet{ false };
    /** @brief Gets the value of Ps4V3PortalTokenDetailsEnable_Optional, regardless of it having been set */
    bool& GetPs4V3PortalTokenDetailsEnable() { return Ps4V3PortalTokenDetailsEnable_Optional; }
    /** @brief Gets the value of Ps4V3PortalTokenDetailsEnable_Optional, regardless of it having been set */
    const bool& GetPs4V3PortalTokenDetailsEnable() const { return Ps4V3PortalTokenDetailsEnable_Optional; }
    /** @brief Gets the value of Ps4V3PortalTokenDetailsEnable_Optional, if it has been set, otherwise it returns DefaultValue */
    const bool& GetPs4V3PortalTokenDetailsEnable(const bool& DefaultValue) const { if (Ps4V3PortalTokenDetailsEnable_IsSet) return Ps4V3PortalTokenDetailsEnable_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Ps4V3PortalTokenDetailsEnable_Optional and returns true if it has been set, otherwise returns false */
    bool GetPs4V3PortalTokenDetailsEnable(bool& OutValue) const { if (Ps4V3PortalTokenDetailsEnable_IsSet) OutValue = Ps4V3PortalTokenDetailsEnable_Optional; return Ps4V3PortalTokenDetailsEnable_IsSet; }
    /** @brief Returns a pointer to Ps4V3PortalTokenDetailsEnable_Optional, if it has been set, otherwise returns nullptr */
    bool* GetPs4V3PortalTokenDetailsEnableOrNull() { if (Ps4V3PortalTokenDetailsEnable_IsSet) return &Ps4V3PortalTokenDetailsEnable_Optional; return nullptr; }
    /** @brief Returns a pointer to Ps4V3PortalTokenDetailsEnable_Optional, if it has been set, otherwise returns nullptr */
    const bool* GetPs4V3PortalTokenDetailsEnableOrNull() const { if (Ps4V3PortalTokenDetailsEnable_IsSet) return &Ps4V3PortalTokenDetailsEnable_Optional; return nullptr; }
    /** @brief Sets the value of Ps4V3PortalTokenDetailsEnable_Optional and also sets Ps4V3PortalTokenDetailsEnable_IsSet to true */
    void SetPs4V3PortalTokenDetailsEnable(bool NewValue) { Ps4V3PortalTokenDetailsEnable_Optional = NewValue; Ps4V3PortalTokenDetailsEnable_IsSet = true; }
     /** @brief Clears the value of Ps4V3PortalTokenDetailsEnable_Optional and sets Ps4V3PortalTokenDetailsEnable_IsSet to false */
    void ClearPs4V3PortalTokenDetailsEnable() { Ps4V3PortalTokenDetailsEnable_Optional = false; Ps4V3PortalTokenDetailsEnable_IsSet = false; }
    /** @brief Returns true if Ps4V3PortalTokenDetailsEnable_Optional is set and matches the default value */
    bool IsPs4V3PortalTokenDetailsEnableDefaultValue() const { return Ps4V3PortalTokenDetailsEnable_IsSet && Ps4V3PortalTokenDetailsEnable_Optional == false; }
    /** @brief Sets the value of Ps4V3PortalTokenDetailsEnable_Optional to its default and also sets Ps4V3PortalTokenDetailsEnable_IsSet to true */
    void SetPs4V3PortalTokenDetailsEnableToDefault() { Ps4V3PortalTokenDetailsEnable_Optional = false; Ps4V3PortalTokenDetailsEnable_IsSet = true; }

    /** @brief Whether or not to enable the PS5 V3 portal token details */
    bool Ps5V3PortalTokenDetailsEnable_Optional{  };
    /** @brief true if Ps5V3PortalTokenDetailsEnable_Optional has been set to a value */
    bool Ps5V3PortalTokenDetailsEnable_IsSet{ false };
    /** @brief Gets the value of Ps5V3PortalTokenDetailsEnable_Optional, regardless of it having been set */
    bool& GetPs5V3PortalTokenDetailsEnable() { return Ps5V3PortalTokenDetailsEnable_Optional; }
    /** @brief Gets the value of Ps5V3PortalTokenDetailsEnable_Optional, regardless of it having been set */
    const bool& GetPs5V3PortalTokenDetailsEnable() const { return Ps5V3PortalTokenDetailsEnable_Optional; }
    /** @brief Gets the value of Ps5V3PortalTokenDetailsEnable_Optional, if it has been set, otherwise it returns DefaultValue */
    const bool& GetPs5V3PortalTokenDetailsEnable(const bool& DefaultValue) const { if (Ps5V3PortalTokenDetailsEnable_IsSet) return Ps5V3PortalTokenDetailsEnable_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Ps5V3PortalTokenDetailsEnable_Optional and returns true if it has been set, otherwise returns false */
    bool GetPs5V3PortalTokenDetailsEnable(bool& OutValue) const { if (Ps5V3PortalTokenDetailsEnable_IsSet) OutValue = Ps5V3PortalTokenDetailsEnable_Optional; return Ps5V3PortalTokenDetailsEnable_IsSet; }
    /** @brief Returns a pointer to Ps5V3PortalTokenDetailsEnable_Optional, if it has been set, otherwise returns nullptr */
    bool* GetPs5V3PortalTokenDetailsEnableOrNull() { if (Ps5V3PortalTokenDetailsEnable_IsSet) return &Ps5V3PortalTokenDetailsEnable_Optional; return nullptr; }
    /** @brief Returns a pointer to Ps5V3PortalTokenDetailsEnable_Optional, if it has been set, otherwise returns nullptr */
    const bool* GetPs5V3PortalTokenDetailsEnableOrNull() const { if (Ps5V3PortalTokenDetailsEnable_IsSet) return &Ps5V3PortalTokenDetailsEnable_Optional; return nullptr; }
    /** @brief Sets the value of Ps5V3PortalTokenDetailsEnable_Optional and also sets Ps5V3PortalTokenDetailsEnable_IsSet to true */
    void SetPs5V3PortalTokenDetailsEnable(bool NewValue) { Ps5V3PortalTokenDetailsEnable_Optional = NewValue; Ps5V3PortalTokenDetailsEnable_IsSet = true; }
     /** @brief Clears the value of Ps5V3PortalTokenDetailsEnable_Optional and sets Ps5V3PortalTokenDetailsEnable_IsSet to false */
    void ClearPs5V3PortalTokenDetailsEnable() { Ps5V3PortalTokenDetailsEnable_Optional = false; Ps5V3PortalTokenDetailsEnable_IsSet = false; }
    /** @brief Returns true if Ps5V3PortalTokenDetailsEnable_Optional is set and matches the default value */
    bool IsPs5V3PortalTokenDetailsEnableDefaultValue() const { return Ps5V3PortalTokenDetailsEnable_IsSet && Ps5V3PortalTokenDetailsEnable_Optional == false; }
    /** @brief Sets the value of Ps5V3PortalTokenDetailsEnable_Optional to its default and also sets Ps5V3PortalTokenDetailsEnable_IsSet to true */
    void SetPs5V3PortalTokenDetailsEnableToDefault() { Ps5V3PortalTokenDetailsEnable_Optional = false; Ps5V3PortalTokenDetailsEnable_IsSet = true; }

    /** @brief EU Service Labels */
    TSet<int32> EuServiceLabels_Optional{  };
    /** @brief true if EuServiceLabels_Optional has been set to a value */
    bool EuServiceLabels_IsSet{ false };
    /** @brief Gets the value of EuServiceLabels_Optional, regardless of it having been set */
    TSet<int32>& GetEuServiceLabels() { return EuServiceLabels_Optional; }
    /** @brief Gets the value of EuServiceLabels_Optional, regardless of it having been set */
    const TSet<int32>& GetEuServiceLabels() const { return EuServiceLabels_Optional; }
    /** @brief Gets the value of EuServiceLabels_Optional, if it has been set, otherwise it returns DefaultValue */
    const TSet<int32>& GetEuServiceLabels(const TSet<int32>& DefaultValue) const { if (EuServiceLabels_IsSet) return EuServiceLabels_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of EuServiceLabels_Optional and returns true if it has been set, otherwise returns false */
    bool GetEuServiceLabels(TSet<int32>& OutValue) const { if (EuServiceLabels_IsSet) OutValue = EuServiceLabels_Optional; return EuServiceLabels_IsSet; }
    /** @brief Returns a pointer to EuServiceLabels_Optional, if it has been set, otherwise returns nullptr */
    TSet<int32>* GetEuServiceLabelsOrNull() { if (EuServiceLabels_IsSet) return &EuServiceLabels_Optional; return nullptr; }
    /** @brief Returns a pointer to EuServiceLabels_Optional, if it has been set, otherwise returns nullptr */
    const TSet<int32>* GetEuServiceLabelsOrNull() const { if (EuServiceLabels_IsSet) return &EuServiceLabels_Optional; return nullptr; }
    /** @brief Sets the value of EuServiceLabels_Optional and also sets EuServiceLabels_IsSet to true */
    void SetEuServiceLabels(TSet<int32> NewValue) { EuServiceLabels_Optional = NewValue; EuServiceLabels_IsSet = true; }
     /** @brief Clears the value of EuServiceLabels_Optional and sets EuServiceLabels_IsSet to false */
    void ClearEuServiceLabels() { EuServiceLabels_IsSet = false; }

    /** @brief NA Service Labels */
    TSet<int32> NaServiceLabels_Optional{  };
    /** @brief true if NaServiceLabels_Optional has been set to a value */
    bool NaServiceLabels_IsSet{ false };
    /** @brief Gets the value of NaServiceLabels_Optional, regardless of it having been set */
    TSet<int32>& GetNaServiceLabels() { return NaServiceLabels_Optional; }
    /** @brief Gets the value of NaServiceLabels_Optional, regardless of it having been set */
    const TSet<int32>& GetNaServiceLabels() const { return NaServiceLabels_Optional; }
    /** @brief Gets the value of NaServiceLabels_Optional, if it has been set, otherwise it returns DefaultValue */
    const TSet<int32>& GetNaServiceLabels(const TSet<int32>& DefaultValue) const { if (NaServiceLabels_IsSet) return NaServiceLabels_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of NaServiceLabels_Optional and returns true if it has been set, otherwise returns false */
    bool GetNaServiceLabels(TSet<int32>& OutValue) const { if (NaServiceLabels_IsSet) OutValue = NaServiceLabels_Optional; return NaServiceLabels_IsSet; }
    /** @brief Returns a pointer to NaServiceLabels_Optional, if it has been set, otherwise returns nullptr */
    TSet<int32>* GetNaServiceLabelsOrNull() { if (NaServiceLabels_IsSet) return &NaServiceLabels_Optional; return nullptr; }
    /** @brief Returns a pointer to NaServiceLabels_Optional, if it has been set, otherwise returns nullptr */
    const TSet<int32>* GetNaServiceLabelsOrNull() const { if (NaServiceLabels_IsSet) return &NaServiceLabels_Optional; return nullptr; }
    /** @brief Sets the value of NaServiceLabels_Optional and also sets NaServiceLabels_IsSet to true */
    void SetNaServiceLabels(TSet<int32> NewValue) { NaServiceLabels_Optional = NewValue; NaServiceLabels_IsSet = true; }
     /** @brief Clears the value of NaServiceLabels_Optional and sets NaServiceLabels_IsSet to false */
    void ClearNaServiceLabels() { NaServiceLabels_IsSet = false; }
};

/** @} */
