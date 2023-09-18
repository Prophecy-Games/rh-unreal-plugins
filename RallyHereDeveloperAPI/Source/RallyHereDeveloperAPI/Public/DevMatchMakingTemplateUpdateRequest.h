// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereDeveloperAPIBaseModel.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevMatchMakingTemplateUpdateRequest.generated.h"

/** @defgroup RHAPI_DevMatchMakingTemplateUpdateRequest RallyHere API Model DevMatchMakingTemplateUpdateRequest
 *  @{
 */

/**
 * @brief 
 */
USTRUCT(BlueprintType)
struct RALLYHEREDEVELOPERAPI_API FRHAPI_DevMatchMakingTemplateUpdateRequest : public FRHAPI_DevModel
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
    FGuid GroupId_Optional{  };
    /** @brief true if GroupId_Optional has been set to a value */
    bool GroupId_IsSet{ false };
    /** @brief Gets the value of GroupId_Optional, regardless of it having been set */
    FGuid& GetGroupId() { return GroupId_Optional; }
    /** @brief Gets the value of GroupId_Optional, regardless of it having been set */
    const FGuid& GetGroupId() const { return GroupId_Optional; }
    /** @brief Gets the value of GroupId_Optional, if it has been set, otherwise it returns DefaultValue */
    const FGuid& GetGroupId(const FGuid& DefaultValue) const { if (GroupId_IsSet) return GroupId_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of GroupId_Optional and returns true if it has been set, otherwise returns false */
    bool GetGroupId(FGuid& OutValue) const { if (GroupId_IsSet) OutValue = GroupId_Optional; return GroupId_IsSet; }
    /** @brief Returns a pointer to GroupId_Optional, if it has been set, otherwise returns nullptr */
    FGuid* GetGroupIdOrNull() { if (GroupId_IsSet) return &GroupId_Optional; return nullptr; }
    /** @brief Returns a pointer to GroupId_Optional, if it has been set, otherwise returns nullptr */
    const FGuid* GetGroupIdOrNull() const { if (GroupId_IsSet) return &GroupId_Optional; return nullptr; }
    /** @brief Sets the value of GroupId_Optional and also sets GroupId_IsSet to true */
    void SetGroupId(FGuid NewValue) { GroupId_Optional = NewValue; GroupId_IsSet = true; }
     /** @brief Clears the value of GroupId_Optional and sets GroupId_IsSet to false */
    void ClearGroupId() { GroupId_IsSet = false; }

    /** @brief What method should be used to calculate a group's MMR based on the individual player's ranks */
    FString MmrGroupingMethod_Optional{  };
    /** @brief true if MmrGroupingMethod_Optional has been set to a value */
    bool MmrGroupingMethod_IsSet{ false };
    /** @brief Gets the value of MmrGroupingMethod_Optional, regardless of it having been set */
    FString& GetMmrGroupingMethod() { return MmrGroupingMethod_Optional; }
    /** @brief Gets the value of MmrGroupingMethod_Optional, regardless of it having been set */
    const FString& GetMmrGroupingMethod() const { return MmrGroupingMethod_Optional; }
    /** @brief Gets the value of MmrGroupingMethod_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetMmrGroupingMethod(const FString& DefaultValue) const { if (MmrGroupingMethod_IsSet) return MmrGroupingMethod_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of MmrGroupingMethod_Optional and returns true if it has been set, otherwise returns false */
    bool GetMmrGroupingMethod(FString& OutValue) const { if (MmrGroupingMethod_IsSet) OutValue = MmrGroupingMethod_Optional; return MmrGroupingMethod_IsSet; }
    /** @brief Returns a pointer to MmrGroupingMethod_Optional, if it has been set, otherwise returns nullptr */
    FString* GetMmrGroupingMethodOrNull() { if (MmrGroupingMethod_IsSet) return &MmrGroupingMethod_Optional; return nullptr; }
    /** @brief Returns a pointer to MmrGroupingMethod_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetMmrGroupingMethodOrNull() const { if (MmrGroupingMethod_IsSet) return &MmrGroupingMethod_Optional; return nullptr; }
    /** @brief Sets the value of MmrGroupingMethod_Optional and also sets MmrGroupingMethod_IsSet to true */
    void SetMmrGroupingMethod(FString NewValue) { MmrGroupingMethod_Optional = NewValue; MmrGroupingMethod_IsSet = true; }
     /** @brief Clears the value of MmrGroupingMethod_Optional and sets MmrGroupingMethod_IsSet to false */
    void ClearMmrGroupingMethod() { MmrGroupingMethod_IsSet = false; }

    /** @brief Which ruleset needs to be satisfied to use this template */
    FGuid MatchMakingRulesetId_Optional{  };
    /** @brief true if MatchMakingRulesetId_Optional has been set to a value */
    bool MatchMakingRulesetId_IsSet{ false };
    /** @brief Gets the value of MatchMakingRulesetId_Optional, regardless of it having been set */
    FGuid& GetMatchMakingRulesetId() { return MatchMakingRulesetId_Optional; }
    /** @brief Gets the value of MatchMakingRulesetId_Optional, regardless of it having been set */
    const FGuid& GetMatchMakingRulesetId() const { return MatchMakingRulesetId_Optional; }
    /** @brief Gets the value of MatchMakingRulesetId_Optional, if it has been set, otherwise it returns DefaultValue */
    const FGuid& GetMatchMakingRulesetId(const FGuid& DefaultValue) const { if (MatchMakingRulesetId_IsSet) return MatchMakingRulesetId_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of MatchMakingRulesetId_Optional and returns true if it has been set, otherwise returns false */
    bool GetMatchMakingRulesetId(FGuid& OutValue) const { if (MatchMakingRulesetId_IsSet) OutValue = MatchMakingRulesetId_Optional; return MatchMakingRulesetId_IsSet; }
    /** @brief Returns a pointer to MatchMakingRulesetId_Optional, if it has been set, otherwise returns nullptr */
    FGuid* GetMatchMakingRulesetIdOrNull() { if (MatchMakingRulesetId_IsSet) return &MatchMakingRulesetId_Optional; return nullptr; }
    /** @brief Returns a pointer to MatchMakingRulesetId_Optional, if it has been set, otherwise returns nullptr */
    const FGuid* GetMatchMakingRulesetIdOrNull() const { if (MatchMakingRulesetId_IsSet) return &MatchMakingRulesetId_Optional; return nullptr; }
    /** @brief Sets the value of MatchMakingRulesetId_Optional and also sets MatchMakingRulesetId_IsSet to true */
    void SetMatchMakingRulesetId(FGuid NewValue) { MatchMakingRulesetId_Optional = NewValue; MatchMakingRulesetId_IsSet = true; }
     /** @brief Clears the value of MatchMakingRulesetId_Optional and sets MatchMakingRulesetId_IsSet to false */
    void ClearMatchMakingRulesetId() { MatchMakingRulesetId_IsSet = false; }

    /** @brief Which list of MatchMakingProfiles should be used with this template */
    FGuid ProfileListId_Optional{  };
    /** @brief true if ProfileListId_Optional has been set to a value */
    bool ProfileListId_IsSet{ false };
    /** @brief Gets the value of ProfileListId_Optional, regardless of it having been set */
    FGuid& GetProfileListId() { return ProfileListId_Optional; }
    /** @brief Gets the value of ProfileListId_Optional, regardless of it having been set */
    const FGuid& GetProfileListId() const { return ProfileListId_Optional; }
    /** @brief Gets the value of ProfileListId_Optional, if it has been set, otherwise it returns DefaultValue */
    const FGuid& GetProfileListId(const FGuid& DefaultValue) const { if (ProfileListId_IsSet) return ProfileListId_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of ProfileListId_Optional and returns true if it has been set, otherwise returns false */
    bool GetProfileListId(FGuid& OutValue) const { if (ProfileListId_IsSet) OutValue = ProfileListId_Optional; return ProfileListId_IsSet; }
    /** @brief Returns a pointer to ProfileListId_Optional, if it has been set, otherwise returns nullptr */
    FGuid* GetProfileListIdOrNull() { if (ProfileListId_IsSet) return &ProfileListId_Optional; return nullptr; }
    /** @brief Returns a pointer to ProfileListId_Optional, if it has been set, otherwise returns nullptr */
    const FGuid* GetProfileListIdOrNull() const { if (ProfileListId_IsSet) return &ProfileListId_Optional; return nullptr; }
    /** @brief Sets the value of ProfileListId_Optional and also sets ProfileListId_IsSet to true */
    void SetProfileListId(FGuid NewValue) { ProfileListId_Optional = NewValue; ProfileListId_IsSet = true; }
     /** @brief Clears the value of ProfileListId_Optional and sets ProfileListId_IsSet to false */
    void ClearProfileListId() { ProfileListId_IsSet = false; }

    /** @brief How many of the rules in the ruleset must be satisfied (any, all, one of etc. */
    FString RulesetDeterminer_Optional{  };
    /** @brief true if RulesetDeterminer_Optional has been set to a value */
    bool RulesetDeterminer_IsSet{ false };
    /** @brief Gets the value of RulesetDeterminer_Optional, regardless of it having been set */
    FString& GetRulesetDeterminer() { return RulesetDeterminer_Optional; }
    /** @brief Gets the value of RulesetDeterminer_Optional, regardless of it having been set */
    const FString& GetRulesetDeterminer() const { return RulesetDeterminer_Optional; }
    /** @brief Gets the value of RulesetDeterminer_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetRulesetDeterminer(const FString& DefaultValue) const { if (RulesetDeterminer_IsSet) return RulesetDeterminer_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of RulesetDeterminer_Optional and returns true if it has been set, otherwise returns false */
    bool GetRulesetDeterminer(FString& OutValue) const { if (RulesetDeterminer_IsSet) OutValue = RulesetDeterminer_Optional; return RulesetDeterminer_IsSet; }
    /** @brief Returns a pointer to RulesetDeterminer_Optional, if it has been set, otherwise returns nullptr */
    FString* GetRulesetDeterminerOrNull() { if (RulesetDeterminer_IsSet) return &RulesetDeterminer_Optional; return nullptr; }
    /** @brief Returns a pointer to RulesetDeterminer_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetRulesetDeterminerOrNull() const { if (RulesetDeterminer_IsSet) return &RulesetDeterminer_Optional; return nullptr; }
    /** @brief Sets the value of RulesetDeterminer_Optional and also sets RulesetDeterminer_IsSet to true */
    void SetRulesetDeterminer(FString NewValue) { RulesetDeterminer_Optional = NewValue; RulesetDeterminer_IsSet = true; }
     /** @brief Clears the value of RulesetDeterminer_Optional and sets RulesetDeterminer_IsSet to false */
    void ClearRulesetDeterminer() { RulesetDeterminer_IsSet = false; }

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
};

/** @} */
