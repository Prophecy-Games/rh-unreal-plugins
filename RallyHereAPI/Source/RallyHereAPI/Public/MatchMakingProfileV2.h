// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "ProfileJoinMode.h"
#include "MatchMakingProfileV2.generated.h"

/** @defgroup RHAPI_MatchMakingProfileV2 RallyHere API Model MatchMakingProfileV2
 *  @{
 */

/**
 * @brief A profile that describes what pools of players a session will be a part of when matchmaking
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_MatchMakingProfileV2 : public FRHAPI_Model
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

    /** @brief ID of the matchmaking profile to join */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString ProfileId{  };
    /** @brief Gets the value of ProfileId */
    FString& GetProfileId() { return ProfileId; }
    /** @brief Gets the value of ProfileId */
    const FString& GetProfileId() const { return ProfileId; }
    /** @brief Sets the value of ProfileId */
    void SetProfileId(FString NewValue) { ProfileId = NewValue;  }

    /** @brief What mode to set on the matchmaking profile (normal, backfill etc) */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    ERHAPI_ProfileJoinMode JoinMode_Optional{  };
    /** @brief true if JoinMode_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool JoinMode_IsSet{ false };
    /** @brief Gets the value of JoinMode_Optional, regardless of it having been set */
    ERHAPI_ProfileJoinMode& GetJoinMode() { return JoinMode_Optional; }
    /** @brief Gets the value of JoinMode_Optional, regardless of it having been set */
    const ERHAPI_ProfileJoinMode& GetJoinMode() const { return JoinMode_Optional; }
    /** @brief Gets the value of JoinMode_Optional, if it has been set, otherwise it returns DefaultValue */
    const ERHAPI_ProfileJoinMode& GetJoinMode(const ERHAPI_ProfileJoinMode& DefaultValue) const { if (JoinMode_IsSet) return JoinMode_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of JoinMode_Optional and returns true if it has been set, otherwise returns false */
    bool GetJoinMode(ERHAPI_ProfileJoinMode& OutValue) const { if (JoinMode_IsSet) OutValue = JoinMode_Optional; return JoinMode_IsSet; }
    /** @brief Returns a pointer to JoinMode_Optional, if it has been set, otherwise returns nullptr */
    ERHAPI_ProfileJoinMode* GetJoinModeOrNull() { if (JoinMode_IsSet) return &JoinMode_Optional; return nullptr; }
    /** @brief Returns a pointer to JoinMode_Optional, if it has been set, otherwise returns nullptr */
    const ERHAPI_ProfileJoinMode* GetJoinModeOrNull() const { if (JoinMode_IsSet) return &JoinMode_Optional; return nullptr; }
    /** @brief Sets the value of JoinMode_Optional and also sets JoinMode_IsSet to true */
    void SetJoinMode(ERHAPI_ProfileJoinMode NewValue) { JoinMode_Optional = NewValue; JoinMode_IsSet = true; }
     /** @brief Clears the value of JoinMode_Optional and sets JoinMode_IsSet to false */
    void ClearJoinMode() { JoinMode_IsSet = false; }

    /** @brief Which instance template to use when launching a match in this profile */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FGuid InstanceRequestTemplateId{  };
    /** @brief Gets the value of InstanceRequestTemplateId */
    FGuid& GetInstanceRequestTemplateId() { return InstanceRequestTemplateId; }
    /** @brief Gets the value of InstanceRequestTemplateId */
    const FGuid& GetInstanceRequestTemplateId() const { return InstanceRequestTemplateId; }
    /** @brief Sets the value of InstanceRequestTemplateId */
    void SetInstanceRequestTemplateId(FGuid NewValue) { InstanceRequestTemplateId = NewValue;  }

    /** @brief Which rank this profile should use MMR from to make matches from, and update at the end of match (1v1 MMR or 2v2 MMR for example) */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString RankId_Optional{  };
    /** @brief true if RankId_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool RankId_IsSet{ false };
    /** @brief Gets the value of RankId_Optional, regardless of it having been set */
    FString& GetRankId() { return RankId_Optional; }
    /** @brief Gets the value of RankId_Optional, regardless of it having been set */
    const FString& GetRankId() const { return RankId_Optional; }
    /** @brief Gets the value of RankId_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetRankId(const FString& DefaultValue) const { if (RankId_IsSet) return RankId_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of RankId_Optional and returns true if it has been set, otherwise returns false */
    bool GetRankId(FString& OutValue) const { if (RankId_IsSet) OutValue = RankId_Optional; return RankId_IsSet; }
    /** @brief Returns a pointer to RankId_Optional, if it has been set, otherwise returns nullptr */
    FString* GetRankIdOrNull() { if (RankId_IsSet) return &RankId_Optional; return nullptr; }
    /** @brief Returns a pointer to RankId_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetRankIdOrNull() const { if (RankId_IsSet) return &RankId_Optional; return nullptr; }
    /** @brief Sets the value of RankId_Optional and also sets RankId_IsSet to true */
    void SetRankId(FString NewValue) { RankId_Optional = NewValue; RankId_IsSet = true; }
     /** @brief Clears the value of RankId_Optional and sets RankId_IsSet to false */
    void ClearRankId() { RankId_IsSet = false; }

    /** @brief The number of sides a game in this profile will have (2 in a 1v1 and 3 in a 1v1v1 for example */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    int32 NumSides_Optional{  };
    /** @brief true if NumSides_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool NumSides_IsSet{ false };
    /** @brief Gets the value of NumSides_Optional, regardless of it having been set */
    int32& GetNumSides() { return NumSides_Optional; }
    /** @brief Gets the value of NumSides_Optional, regardless of it having been set */
    const int32& GetNumSides() const { return NumSides_Optional; }
    /** @brief Gets the value of NumSides_Optional, if it has been set, otherwise it returns DefaultValue */
    const int32& GetNumSides(const int32& DefaultValue) const { if (NumSides_IsSet) return NumSides_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of NumSides_Optional and returns true if it has been set, otherwise returns false */
    bool GetNumSides(int32& OutValue) const { if (NumSides_IsSet) OutValue = NumSides_Optional; return NumSides_IsSet; }
    /** @brief Returns a pointer to NumSides_Optional, if it has been set, otherwise returns nullptr */
    int32* GetNumSidesOrNull() { if (NumSides_IsSet) return &NumSides_Optional; return nullptr; }
    /** @brief Returns a pointer to NumSides_Optional, if it has been set, otherwise returns nullptr */
    const int32* GetNumSidesOrNull() const { if (NumSides_IsSet) return &NumSides_Optional; return nullptr; }
    /** @brief Sets the value of NumSides_Optional and also sets NumSides_IsSet to true */
    void SetNumSides(int32 NewValue) { NumSides_Optional = NewValue; NumSides_IsSet = true; }
     /** @brief Clears the value of NumSides_Optional and sets NumSides_IsSet to false */
    void ClearNumSides() { NumSides_Optional = 0; NumSides_IsSet = false; }
    /** @brief Returns true if NumSides_Optional is set and matches the default value */
    bool IsNumSidesDefaultValue() const { return NumSides_IsSet && NumSides_Optional == 0; }
    /** @brief Sets the value of NumSides_Optional to its default and also sets NumSides_IsSet to true */
    void SetNumSidesToDefault() { NumSides_Optional = 0; NumSides_IsSet = true; }

    /** @brief The maximum number of players that can be on each team */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    int32 MaxPlayersPerSide_Optional{  };
    /** @brief true if MaxPlayersPerSide_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool MaxPlayersPerSide_IsSet{ false };
    /** @brief Gets the value of MaxPlayersPerSide_Optional, regardless of it having been set */
    int32& GetMaxPlayersPerSide() { return MaxPlayersPerSide_Optional; }
    /** @brief Gets the value of MaxPlayersPerSide_Optional, regardless of it having been set */
    const int32& GetMaxPlayersPerSide() const { return MaxPlayersPerSide_Optional; }
    /** @brief Gets the value of MaxPlayersPerSide_Optional, if it has been set, otherwise it returns DefaultValue */
    const int32& GetMaxPlayersPerSide(const int32& DefaultValue) const { if (MaxPlayersPerSide_IsSet) return MaxPlayersPerSide_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of MaxPlayersPerSide_Optional and returns true if it has been set, otherwise returns false */
    bool GetMaxPlayersPerSide(int32& OutValue) const { if (MaxPlayersPerSide_IsSet) OutValue = MaxPlayersPerSide_Optional; return MaxPlayersPerSide_IsSet; }
    /** @brief Returns a pointer to MaxPlayersPerSide_Optional, if it has been set, otherwise returns nullptr */
    int32* GetMaxPlayersPerSideOrNull() { if (MaxPlayersPerSide_IsSet) return &MaxPlayersPerSide_Optional; return nullptr; }
    /** @brief Returns a pointer to MaxPlayersPerSide_Optional, if it has been set, otherwise returns nullptr */
    const int32* GetMaxPlayersPerSideOrNull() const { if (MaxPlayersPerSide_IsSet) return &MaxPlayersPerSide_Optional; return nullptr; }
    /** @brief Sets the value of MaxPlayersPerSide_Optional and also sets MaxPlayersPerSide_IsSet to true */
    void SetMaxPlayersPerSide(int32 NewValue) { MaxPlayersPerSide_Optional = NewValue; MaxPlayersPerSide_IsSet = true; }
     /** @brief Clears the value of MaxPlayersPerSide_Optional and sets MaxPlayersPerSide_IsSet to false */
    void ClearMaxPlayersPerSide() { MaxPlayersPerSide_Optional = 0; MaxPlayersPerSide_IsSet = false; }
    /** @brief Returns true if MaxPlayersPerSide_Optional is set and matches the default value */
    bool IsMaxPlayersPerSideDefaultValue() const { return MaxPlayersPerSide_IsSet && MaxPlayersPerSide_Optional == 0; }
    /** @brief Sets the value of MaxPlayersPerSide_Optional to its default and also sets MaxPlayersPerSide_IsSet to true */
    void SetMaxPlayersPerSideToDefault() { MaxPlayersPerSide_Optional = 0; MaxPlayersPerSide_IsSet = true; }

    /** @brief The minimum number of players that can be on each team */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    int32 MinPlayersPerSide_Optional{  };
    /** @brief true if MinPlayersPerSide_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool MinPlayersPerSide_IsSet{ false };
    /** @brief Gets the value of MinPlayersPerSide_Optional, regardless of it having been set */
    int32& GetMinPlayersPerSide() { return MinPlayersPerSide_Optional; }
    /** @brief Gets the value of MinPlayersPerSide_Optional, regardless of it having been set */
    const int32& GetMinPlayersPerSide() const { return MinPlayersPerSide_Optional; }
    /** @brief Gets the value of MinPlayersPerSide_Optional, if it has been set, otherwise it returns DefaultValue */
    const int32& GetMinPlayersPerSide(const int32& DefaultValue) const { if (MinPlayersPerSide_IsSet) return MinPlayersPerSide_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of MinPlayersPerSide_Optional and returns true if it has been set, otherwise returns false */
    bool GetMinPlayersPerSide(int32& OutValue) const { if (MinPlayersPerSide_IsSet) OutValue = MinPlayersPerSide_Optional; return MinPlayersPerSide_IsSet; }
    /** @brief Returns a pointer to MinPlayersPerSide_Optional, if it has been set, otherwise returns nullptr */
    int32* GetMinPlayersPerSideOrNull() { if (MinPlayersPerSide_IsSet) return &MinPlayersPerSide_Optional; return nullptr; }
    /** @brief Returns a pointer to MinPlayersPerSide_Optional, if it has been set, otherwise returns nullptr */
    const int32* GetMinPlayersPerSideOrNull() const { if (MinPlayersPerSide_IsSet) return &MinPlayersPerSide_Optional; return nullptr; }
    /** @brief Sets the value of MinPlayersPerSide_Optional and also sets MinPlayersPerSide_IsSet to true */
    void SetMinPlayersPerSide(int32 NewValue) { MinPlayersPerSide_Optional = NewValue; MinPlayersPerSide_IsSet = true; }
     /** @brief Clears the value of MinPlayersPerSide_Optional and sets MinPlayersPerSide_IsSet to false */
    void ClearMinPlayersPerSide() { MinPlayersPerSide_Optional = 0; MinPlayersPerSide_IsSet = false; }
    /** @brief Returns true if MinPlayersPerSide_Optional is set and matches the default value */
    bool IsMinPlayersPerSideDefaultValue() const { return MinPlayersPerSide_IsSet && MinPlayersPerSide_Optional == 0; }
    /** @brief Sets the value of MinPlayersPerSide_Optional to its default and also sets MinPlayersPerSide_IsSet to true */
    void SetMinPlayersPerSideToDefault() { MinPlayersPerSide_Optional = 0; MinPlayersPerSide_IsSet = true; }

    /** @brief Legacy config to help migrate clients */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    TMap<FString, FString> LegacyConfig_Optional{  };
    /** @brief true if LegacyConfig_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
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
