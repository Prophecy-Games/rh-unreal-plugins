// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevMatchMakingRuleSet.h"
#include "DevMatchMakingTemplate.generated.h"

/** @defgroup RHAPI_DevMatchMakingTemplate RallyHere API Model DevMatchMakingTemplate
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREDEVELOPERAPI_API FRHAPI_DevMatchMakingTemplate : public FRHAPI_DevModel
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

    /** @brief Which group of MatchMakingTemplates this template belongs to */
    FGuid GroupId{  };
    /** @brief Gets the value of GroupId */
    FGuid& GetGroupId() { return GroupId; }
    /** @brief Gets the value of GroupId */
    const FGuid& GetGroupId() const { return GroupId; }
    /** @brief Sets the value of GroupId */
    void SetGroupId(FGuid NewValue) { GroupId = NewValue;  }

    /** @brief What method should be used to calculate a group's MMR based on the individual player's ranks */
    FString MmrGroupingMethod{  };
    /** @brief Gets the value of MmrGroupingMethod */
    FString& GetMmrGroupingMethod() { return MmrGroupingMethod; }
    /** @brief Gets the value of MmrGroupingMethod */
    const FString& GetMmrGroupingMethod() const { return MmrGroupingMethod; }
    /** @brief Sets the value of MmrGroupingMethod */
    void SetMmrGroupingMethod(FString NewValue) { MmrGroupingMethod = NewValue;  }

    /** @brief Which ruleset needs to be satisfied to use this template */
    FGuid MatchMakingRulesetId{  };
    /** @brief Gets the value of MatchMakingRulesetId */
    FGuid& GetMatchMakingRulesetId() { return MatchMakingRulesetId; }
    /** @brief Gets the value of MatchMakingRulesetId */
    const FGuid& GetMatchMakingRulesetId() const { return MatchMakingRulesetId; }
    /** @brief Sets the value of MatchMakingRulesetId */
    void SetMatchMakingRulesetId(FGuid NewValue) { MatchMakingRulesetId = NewValue;  }

    /** @brief Which list of MatchMakingProfiles should be used with this template */
    FGuid ProfileListId{  };
    /** @brief Gets the value of ProfileListId */
    FGuid& GetProfileListId() { return ProfileListId; }
    /** @brief Gets the value of ProfileListId */
    const FGuid& GetProfileListId() const { return ProfileListId; }
    /** @brief Sets the value of ProfileListId */
    void SetProfileListId(FGuid NewValue) { ProfileListId = NewValue;  }

    /** @brief How many of the rules in the ruleset must be satisfied (any, all, one of etc. */
    FString RulesetDeterminer{  };
    /** @brief Gets the value of RulesetDeterminer */
    FString& GetRulesetDeterminer() { return RulesetDeterminer; }
    /** @brief Gets the value of RulesetDeterminer */
    const FString& GetRulesetDeterminer() const { return RulesetDeterminer; }
    /** @brief Sets the value of RulesetDeterminer */
    void SetRulesetDeterminer(FString NewValue) { RulesetDeterminer = NewValue;  }

    /** @brief Dictionary of config required for legacy games */
    TMap<FString, FString> LegacyConfig_Optional{  };
    /** @brief true if LegacyConfig_Optional has been set to a value */
    bool LegacyConfig_IsSet{ false };
    /** @brief Gets the value of LegacyConfig_Optional, regardless of it having been set */
    TMap<FString, FString>& GetLegacyConfig() { return LegacyConfig_Optional; }
    /** @brief Gets the value of LegacyConfig_Optional, regardless of it having been set */
    const TMap<FString, FString>& GetLegacyConfig() const { return LegacyConfig_Optional; }
    /** @brief Gets the value of LegacyConfig_Optional, if it has been set, otherwise it returns DefaultValue */
    const TMap<FString, FString>& GetLegacyConfig(const TMap<FString, FString>& DefaultValue) const { if (LegacyConfig_IsSet) return LegacyConfig_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of LegacyConfig_Optional and returns true if it has been set, otherwise returns false */
    bool GetLegacyConfig(TMap<FString, FString>& OutValue) const { if (LegacyConfig_IsSet) OutValue = LegacyConfig_Optional; return LegacyConfig_IsSet; }
    /** @brief Returns a pointer to LegacyConfig_Optional, if it has been set, otherwise returns nullptr */
    TMap<FString, FString>* GetLegacyConfigOrNull() { if (LegacyConfig_IsSet) return &LegacyConfig_Optional; return nullptr; }
    /** @brief Returns a pointer to LegacyConfig_Optional, if it has been set, otherwise returns nullptr */
    const TMap<FString, FString>* GetLegacyConfigOrNull() const { if (LegacyConfig_IsSet) return &LegacyConfig_Optional; return nullptr; }
    /** @brief Sets the value of LegacyConfig_Optional and also sets LegacyConfig_IsSet to true */
    void SetLegacyConfig(TMap<FString, FString> NewValue) { LegacyConfig_Optional = NewValue; LegacyConfig_IsSet = true; }
     /** @brief Clears the value of LegacyConfig_Optional and sets LegacyConfig_IsSet to false */
    void ClearLegacyConfig() { LegacyConfig_IsSet = false; }

    /** @brief ID of the Sandbox */
    FGuid SandboxId_Optional{  };
    /** @brief true if SandboxId_Optional has been set to a value */
    bool SandboxId_IsSet{ false };
    /** @brief Gets the value of SandboxId_Optional, regardless of it having been set */
    FGuid& GetSandboxId() { return SandboxId_Optional; }
    /** @brief Gets the value of SandboxId_Optional, regardless of it having been set */
    const FGuid& GetSandboxId() const { return SandboxId_Optional; }
    /** @brief Gets the value of SandboxId_Optional, if it has been set, otherwise it returns DefaultValue */
    const FGuid& GetSandboxId(const FGuid& DefaultValue) const { if (SandboxId_IsSet) return SandboxId_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of SandboxId_Optional and returns true if it has been set, otherwise returns false */
    bool GetSandboxId(FGuid& OutValue) const { if (SandboxId_IsSet) OutValue = SandboxId_Optional; return SandboxId_IsSet; }
    /** @brief Returns a pointer to SandboxId_Optional, if it has been set, otherwise returns nullptr */
    FGuid* GetSandboxIdOrNull() { if (SandboxId_IsSet) return &SandboxId_Optional; return nullptr; }
    /** @brief Returns a pointer to SandboxId_Optional, if it has been set, otherwise returns nullptr */
    const FGuid* GetSandboxIdOrNull() const { if (SandboxId_IsSet) return &SandboxId_Optional; return nullptr; }
    /** @brief Sets the value of SandboxId_Optional and also sets SandboxId_IsSet to true */
    void SetSandboxId(FGuid NewValue) { SandboxId_Optional = NewValue; SandboxId_IsSet = true; }
     /** @brief Clears the value of SandboxId_Optional and sets SandboxId_IsSet to false */
    void ClearSandboxId() { SandboxId_IsSet = false; }

    /** @brief ID to uniquely identify this MatchMakingTemplate */
    FGuid MatchMakingTemplateId{  };
    /** @brief Gets the value of MatchMakingTemplateId */
    FGuid& GetMatchMakingTemplateId() { return MatchMakingTemplateId; }
    /** @brief Gets the value of MatchMakingTemplateId */
    const FGuid& GetMatchMakingTemplateId() const { return MatchMakingTemplateId; }
    /** @brief Sets the value of MatchMakingTemplateId */
    void SetMatchMakingTemplateId(FGuid NewValue) { MatchMakingTemplateId = NewValue;  }

    /** @brief Account ID of the user who last modified the resource */
    FGuid LastModifiedAccountId_Optional{  };
    /** @brief true if LastModifiedAccountId_Optional has been set to a value */
    bool LastModifiedAccountId_IsSet{ false };
    /** @brief Gets the value of LastModifiedAccountId_Optional, regardless of it having been set */
    FGuid& GetLastModifiedAccountId() { return LastModifiedAccountId_Optional; }
    /** @brief Gets the value of LastModifiedAccountId_Optional, regardless of it having been set */
    const FGuid& GetLastModifiedAccountId() const { return LastModifiedAccountId_Optional; }
    /** @brief Gets the value of LastModifiedAccountId_Optional, if it has been set, otherwise it returns DefaultValue */
    const FGuid& GetLastModifiedAccountId(const FGuid& DefaultValue) const { if (LastModifiedAccountId_IsSet) return LastModifiedAccountId_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of LastModifiedAccountId_Optional and returns true if it has been set, otherwise returns false */
    bool GetLastModifiedAccountId(FGuid& OutValue) const { if (LastModifiedAccountId_IsSet) OutValue = LastModifiedAccountId_Optional; return LastModifiedAccountId_IsSet; }
    /** @brief Returns a pointer to LastModifiedAccountId_Optional, if it has been set, otherwise returns nullptr */
    FGuid* GetLastModifiedAccountIdOrNull() { if (LastModifiedAccountId_IsSet) return &LastModifiedAccountId_Optional; return nullptr; }
    /** @brief Returns a pointer to LastModifiedAccountId_Optional, if it has been set, otherwise returns nullptr */
    const FGuid* GetLastModifiedAccountIdOrNull() const { if (LastModifiedAccountId_IsSet) return &LastModifiedAccountId_Optional; return nullptr; }
    /** @brief Sets the value of LastModifiedAccountId_Optional and also sets LastModifiedAccountId_IsSet to true */
    void SetLastModifiedAccountId(FGuid NewValue) { LastModifiedAccountId_Optional = NewValue; LastModifiedAccountId_IsSet = true; }
     /** @brief Clears the value of LastModifiedAccountId_Optional and sets LastModifiedAccountId_IsSet to false */
    void ClearLastModifiedAccountId() { LastModifiedAccountId_IsSet = false; }

    /** @brief Timestamp of when the resource was last modified */
    FDateTime LastModifiedTimestamp_Optional{  };
    /** @brief true if LastModifiedTimestamp_Optional has been set to a value */
    bool LastModifiedTimestamp_IsSet{ false };
    /** @brief Gets the value of LastModifiedTimestamp_Optional, regardless of it having been set */
    FDateTime& GetLastModifiedTimestamp() { return LastModifiedTimestamp_Optional; }
    /** @brief Gets the value of LastModifiedTimestamp_Optional, regardless of it having been set */
    const FDateTime& GetLastModifiedTimestamp() const { return LastModifiedTimestamp_Optional; }
    /** @brief Gets the value of LastModifiedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue */
    const FDateTime& GetLastModifiedTimestamp(const FDateTime& DefaultValue) const { if (LastModifiedTimestamp_IsSet) return LastModifiedTimestamp_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of LastModifiedTimestamp_Optional and returns true if it has been set, otherwise returns false */
    bool GetLastModifiedTimestamp(FDateTime& OutValue) const { if (LastModifiedTimestamp_IsSet) OutValue = LastModifiedTimestamp_Optional; return LastModifiedTimestamp_IsSet; }
    /** @brief Returns a pointer to LastModifiedTimestamp_Optional, if it has been set, otherwise returns nullptr */
    FDateTime* GetLastModifiedTimestampOrNull() { if (LastModifiedTimestamp_IsSet) return &LastModifiedTimestamp_Optional; return nullptr; }
    /** @brief Returns a pointer to LastModifiedTimestamp_Optional, if it has been set, otherwise returns nullptr */
    const FDateTime* GetLastModifiedTimestampOrNull() const { if (LastModifiedTimestamp_IsSet) return &LastModifiedTimestamp_Optional; return nullptr; }
    /** @brief Sets the value of LastModifiedTimestamp_Optional and also sets LastModifiedTimestamp_IsSet to true */
    void SetLastModifiedTimestamp(FDateTime NewValue) { LastModifiedTimestamp_Optional = NewValue; LastModifiedTimestamp_IsSet = true; }
     /** @brief Clears the value of LastModifiedTimestamp_Optional and sets LastModifiedTimestamp_IsSet to false */
    void ClearLastModifiedTimestamp() { LastModifiedTimestamp_IsSet = false; }

    FRHAPI_DevMatchMakingRuleSet Ruleset_Optional{  };
    /** @brief true if Ruleset_Optional has been set to a value */
    bool Ruleset_IsSet{ false };
    /** @brief Gets the value of Ruleset_Optional, regardless of it having been set */
    FRHAPI_DevMatchMakingRuleSet& GetRuleset() { return Ruleset_Optional; }
    /** @brief Gets the value of Ruleset_Optional, regardless of it having been set */
    const FRHAPI_DevMatchMakingRuleSet& GetRuleset() const { return Ruleset_Optional; }
    /** @brief Gets the value of Ruleset_Optional, if it has been set, otherwise it returns DefaultValue */
    const FRHAPI_DevMatchMakingRuleSet& GetRuleset(const FRHAPI_DevMatchMakingRuleSet& DefaultValue) const { if (Ruleset_IsSet) return Ruleset_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Ruleset_Optional and returns true if it has been set, otherwise returns false */
    bool GetRuleset(FRHAPI_DevMatchMakingRuleSet& OutValue) const { if (Ruleset_IsSet) OutValue = Ruleset_Optional; return Ruleset_IsSet; }
    /** @brief Returns a pointer to Ruleset_Optional, if it has been set, otherwise returns nullptr */
    FRHAPI_DevMatchMakingRuleSet* GetRulesetOrNull() { if (Ruleset_IsSet) return &Ruleset_Optional; return nullptr; }
    /** @brief Returns a pointer to Ruleset_Optional, if it has been set, otherwise returns nullptr */
    const FRHAPI_DevMatchMakingRuleSet* GetRulesetOrNull() const { if (Ruleset_IsSet) return &Ruleset_Optional; return nullptr; }
    /** @brief Sets the value of Ruleset_Optional and also sets Ruleset_IsSet to true */
    void SetRuleset(FRHAPI_DevMatchMakingRuleSet NewValue) { Ruleset_Optional = NewValue; Ruleset_IsSet = true; }
     /** @brief Clears the value of Ruleset_Optional and sets Ruleset_IsSet to false */
    void ClearRuleset() { Ruleset_IsSet = false; }
};

/** @} */
