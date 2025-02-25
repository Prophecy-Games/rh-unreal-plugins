// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevRuleType.h"
#include "DevMatchMakingRuleRequest.generated.h"

/** @defgroup RHAPI_DevMatchMakingRuleRequest RallyHere API Model DevMatchMakingRuleRequest
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREDEVELOPERAPI_API FRHAPI_DevMatchMakingRuleRequest : public FRHAPI_DevModel
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

    /** @brief Which ruleset this MatchMakingRule belongs to */
    FGuid MatchMakingRulesetId{  };
    /** @brief Gets the value of MatchMakingRulesetId */
    FGuid& GetMatchMakingRulesetId() { return MatchMakingRulesetId; }
    /** @brief Gets the value of MatchMakingRulesetId */
    const FGuid& GetMatchMakingRulesetId() const { return MatchMakingRulesetId; }
    /** @brief Sets the value of MatchMakingRulesetId */
    void SetMatchMakingRulesetId(FGuid NewValue) { MatchMakingRulesetId = NewValue;  }

    /** @brief Which comparison operator is used when evaluating the rule */
    FString ComparisonOperation{  };
    /** @brief Gets the value of ComparisonOperation */
    FString& GetComparisonOperation() { return ComparisonOperation; }
    /** @brief Gets the value of ComparisonOperation */
    const FString& GetComparisonOperation() const { return ComparisonOperation; }
    /** @brief Sets the value of ComparisonOperation */
    void SetComparisonOperation(FString NewValue) { ComparisonOperation = NewValue;  }

    /** @brief What type of rule this is (determines what types of values are being compared */
    ERHAPI_DevRuleType RuleType{  };
    /** @brief Gets the value of RuleType */
    ERHAPI_DevRuleType& GetRuleType() { return RuleType; }
    /** @brief Gets the value of RuleType */
    const ERHAPI_DevRuleType& GetRuleType() const { return RuleType; }
    /** @brief Sets the value of RuleType */
    void SetRuleType(ERHAPI_DevRuleType NewValue) { RuleType = NewValue;  }

    /** @brief What item is being compared if this is an Inventory rule */
    FGuid ItemId_Optional{  };
    /** @brief true if ItemId_Optional has been set to a value */
    bool ItemId_IsSet{ false };
    /** @brief Gets the value of ItemId_Optional, regardless of it having been set */
    FGuid& GetItemId() { return ItemId_Optional; }
    /** @brief Gets the value of ItemId_Optional, regardless of it having been set */
    const FGuid& GetItemId() const { return ItemId_Optional; }
    /** @brief Gets the value of ItemId_Optional, if it has been set, otherwise it returns DefaultValue */
    const FGuid& GetItemId(const FGuid& DefaultValue) const { if (ItemId_IsSet) return ItemId_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of ItemId_Optional and returns true if it has been set, otherwise returns false */
    bool GetItemId(FGuid& OutValue) const { if (ItemId_IsSet) OutValue = ItemId_Optional; return ItemId_IsSet; }
    /** @brief Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr */
    FGuid* GetItemIdOrNull() { if (ItemId_IsSet) return &ItemId_Optional; return nullptr; }
    /** @brief Returns a pointer to ItemId_Optional, if it has been set, otherwise returns nullptr */
    const FGuid* GetItemIdOrNull() const { if (ItemId_IsSet) return &ItemId_Optional; return nullptr; }
    /** @brief Sets the value of ItemId_Optional and also sets ItemId_IsSet to true */
    void SetItemId(FGuid NewValue) { ItemId_Optional = NewValue; ItemId_IsSet = true; }
     /** @brief Clears the value of ItemId_Optional and sets ItemId_IsSet to false */
    void ClearItemId() { ItemId_IsSet = false; }

    /** @brief What value is to be compared to */
    int32 ComparisonValue{ 0 };
    /** @brief Gets the value of ComparisonValue */
    int32& GetComparisonValue() { return ComparisonValue; }
    /** @brief Gets the value of ComparisonValue */
    const int32& GetComparisonValue() const { return ComparisonValue; }
    /** @brief Sets the value of ComparisonValue */
    void SetComparisonValue(int32 NewValue) { ComparisonValue = NewValue;  }
    /** @brief Returns true if ComparisonValue matches the default value */
    bool IsComparisonValueDefaultValue() const { return ComparisonValue == 0; }
    /** @brief Sets the value of ComparisonValue to its default  */
    void SetComparisonValueToDefault() { ComparisonValue = 0;  }
};

/** @} */
