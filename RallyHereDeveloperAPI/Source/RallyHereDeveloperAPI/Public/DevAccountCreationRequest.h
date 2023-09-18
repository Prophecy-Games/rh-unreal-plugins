// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevAccountCreationRequest.generated.h"

/** @defgroup RHAPI_DevAccountCreationRequest RallyHere API Model DevAccountCreationRequest
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREDEVELOPERAPI_API FRHAPI_DevAccountCreationRequest : public FRHAPI_DevModel
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

    /** @brief Account id */
    FGuid AccountId{  };
    /** @brief Gets the value of AccountId */
    FGuid& GetAccountId() { return AccountId; }
    /** @brief Gets the value of AccountId */
    const FGuid& GetAccountId() const { return AccountId; }
    /** @brief Sets the value of AccountId */
    void SetAccountId(FGuid NewValue) { AccountId = NewValue;  }

    /** @brief Name for this account */
    FString FirstName{  };
    /** @brief Gets the value of FirstName */
    FString& GetFirstName() { return FirstName; }
    /** @brief Gets the value of FirstName */
    const FString& GetFirstName() const { return FirstName; }
    /** @brief Sets the value of FirstName */
    void SetFirstName(FString NewValue) { FirstName = NewValue;  }

    /** @brief Last name for this account */
    FString LastName{  };
    /** @brief Gets the value of LastName */
    FString& GetLastName() { return LastName; }
    /** @brief Gets the value of LastName */
    const FString& GetLastName() const { return LastName; }
    /** @brief Sets the value of LastName */
    void SetLastName(FString NewValue) { LastName = NewValue;  }

    /** @brief Nickname for this account */
    FString Nickname{  };
    /** @brief Gets the value of Nickname */
    FString& GetNickname() { return Nickname; }
    /** @brief Gets the value of Nickname */
    const FString& GetNickname() const { return Nickname; }
    /** @brief Sets the value of Nickname */
    void SetNickname(FString NewValue) { Nickname = NewValue;  }

    /** @brief Email address for this account */
    FString AccountEmail{  };
    /** @brief Gets the value of AccountEmail */
    FString& GetAccountEmail() { return AccountEmail; }
    /** @brief Gets the value of AccountEmail */
    const FString& GetAccountEmail() const { return AccountEmail; }
    /** @brief Sets the value of AccountEmail */
    void SetAccountEmail(FString NewValue) { AccountEmail = NewValue;  }

    /** @brief Password for this account */
    FString Password{  };
    /** @brief Gets the value of Password */
    FString& GetPassword() { return Password; }
    /** @brief Gets the value of Password */
    const FString& GetPassword() const { return Password; }
    /** @brief Sets the value of Password */
    void SetPassword(FString NewValue) { Password = NewValue;  }
};

/** @} */
