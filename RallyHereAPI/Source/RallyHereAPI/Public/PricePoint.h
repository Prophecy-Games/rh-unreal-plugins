/**
 * NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
 * Do not edit the file manually.
 *
 * Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
 * Copyright 2022 HiRez Studios
 * SPDX-License-Identifier: Apache-2.0
 *
 * Rally Here APIs
 * version: 0.1.0
 * Rally Here APIs
 */

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "CacheInfo.h"
#include "PriceBreakpoint.h"
#include "PricePoint.generated.h"

/*
* FRHAPI_PricePoint
*
* 
*/
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_PricePoint : public FRHAPI_Model
{
    GENERATED_BODY()

    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override final;
    void WriteJson(TSharedRef<TJsonWriter<>>& Writer) const override final;

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString Name_Optional{  };
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool Name_IsSet{ false };
    FString& GetName() { return Name_Optional; }
    const FString& GetName() const { return Name_Optional; }
    const FString& GetName(const FString& DefaultValue) const { if (Name_IsSet) return Name_Optional; return DefaultValue; }
    bool GetName(FString& OutValue) const { if (Name_IsSet) OutValue = Name_Optional; return Name_IsSet; }
    FString* GetNameOrNull() { if (Name_IsSet) return &Name_Optional; return nullptr; }
    const FString* GetNameOrNull() const { if (Name_IsSet) return &Name_Optional; return nullptr; }
    void SetName(FString NewValue) { Name_Optional = NewValue; Name_IsSet = true; }
    void ClearName() { Name_IsSet = false; }

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool StrictFlag_Optional{  };
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool StrictFlag_IsSet{ false };
    bool& GetStrictFlag() { return StrictFlag_Optional; }
    const bool& GetStrictFlag() const { return StrictFlag_Optional; }
    const bool& GetStrictFlag(const bool& DefaultValue) const { if (StrictFlag_IsSet) return StrictFlag_Optional; return DefaultValue; }
    bool GetStrictFlag(bool& OutValue) const { if (StrictFlag_IsSet) OutValue = StrictFlag_Optional; return StrictFlag_IsSet; }
    bool* GetStrictFlagOrNull() { if (StrictFlag_IsSet) return &StrictFlag_Optional; return nullptr; }
    const bool* GetStrictFlagOrNull() const { if (StrictFlag_IsSet) return &StrictFlag_Optional; return nullptr; }
    void SetStrictFlag(bool NewValue) { StrictFlag_Optional = NewValue; StrictFlag_IsSet = true; }
    void ClearStrictFlag() { StrictFlag_Optional = false; StrictFlag_IsSet = false; }
    bool IsStrictFlagDefaultValue() const { return StrictFlag_IsSet && StrictFlag_Optional == false; }
    void SetStrictFlagToDefault() { StrictFlag_Optional = false; StrictFlag_IsSet = true; }

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool CapFlag_Optional{  };
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool CapFlag_IsSet{ false };
    bool& GetCapFlag() { return CapFlag_Optional; }
    const bool& GetCapFlag() const { return CapFlag_Optional; }
    const bool& GetCapFlag(const bool& DefaultValue) const { if (CapFlag_IsSet) return CapFlag_Optional; return DefaultValue; }
    bool GetCapFlag(bool& OutValue) const { if (CapFlag_IsSet) OutValue = CapFlag_Optional; return CapFlag_IsSet; }
    bool* GetCapFlagOrNull() { if (CapFlag_IsSet) return &CapFlag_Optional; return nullptr; }
    const bool* GetCapFlagOrNull() const { if (CapFlag_IsSet) return &CapFlag_Optional; return nullptr; }
    void SetCapFlag(bool NewValue) { CapFlag_Optional = NewValue; CapFlag_IsSet = true; }
    void ClearCapFlag() { CapFlag_Optional = false; CapFlag_IsSet = false; }
    bool IsCapFlagDefaultValue() const { return CapFlag_IsSet && CapFlag_Optional == false; }
    void SetCapFlagToDefault() { CapFlag_Optional = false; CapFlag_IsSet = true; }

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    TArray<FRHAPI_PriceBreakpoint> CurrentBreakpoints_Optional{  };
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool CurrentBreakpoints_IsSet{ false };
    TArray<FRHAPI_PriceBreakpoint>& GetCurrentBreakpoints() { return CurrentBreakpoints_Optional; }
    const TArray<FRHAPI_PriceBreakpoint>& GetCurrentBreakpoints() const { return CurrentBreakpoints_Optional; }
    const TArray<FRHAPI_PriceBreakpoint>& GetCurrentBreakpoints(const TArray<FRHAPI_PriceBreakpoint>& DefaultValue) const { if (CurrentBreakpoints_IsSet) return CurrentBreakpoints_Optional; return DefaultValue; }
    bool GetCurrentBreakpoints(TArray<FRHAPI_PriceBreakpoint>& OutValue) const { if (CurrentBreakpoints_IsSet) OutValue = CurrentBreakpoints_Optional; return CurrentBreakpoints_IsSet; }
    TArray<FRHAPI_PriceBreakpoint>* GetCurrentBreakpointsOrNull() { if (CurrentBreakpoints_IsSet) return &CurrentBreakpoints_Optional; return nullptr; }
    const TArray<FRHAPI_PriceBreakpoint>* GetCurrentBreakpointsOrNull() const { if (CurrentBreakpoints_IsSet) return &CurrentBreakpoints_Optional; return nullptr; }
    void SetCurrentBreakpoints(TArray<FRHAPI_PriceBreakpoint> NewValue) { CurrentBreakpoints_Optional = NewValue; CurrentBreakpoints_IsSet = true; }
    void ClearCurrentBreakpoints() { CurrentBreakpoints_IsSet = false; }

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    TArray<FRHAPI_PriceBreakpoint> PreSaleBreakpoints_Optional{  };
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool PreSaleBreakpoints_IsSet{ false };
    TArray<FRHAPI_PriceBreakpoint>& GetPreSaleBreakpoints() { return PreSaleBreakpoints_Optional; }
    const TArray<FRHAPI_PriceBreakpoint>& GetPreSaleBreakpoints() const { return PreSaleBreakpoints_Optional; }
    const TArray<FRHAPI_PriceBreakpoint>& GetPreSaleBreakpoints(const TArray<FRHAPI_PriceBreakpoint>& DefaultValue) const { if (PreSaleBreakpoints_IsSet) return PreSaleBreakpoints_Optional; return DefaultValue; }
    bool GetPreSaleBreakpoints(TArray<FRHAPI_PriceBreakpoint>& OutValue) const { if (PreSaleBreakpoints_IsSet) OutValue = PreSaleBreakpoints_Optional; return PreSaleBreakpoints_IsSet; }
    TArray<FRHAPI_PriceBreakpoint>* GetPreSaleBreakpointsOrNull() { if (PreSaleBreakpoints_IsSet) return &PreSaleBreakpoints_Optional; return nullptr; }
    const TArray<FRHAPI_PriceBreakpoint>* GetPreSaleBreakpointsOrNull() const { if (PreSaleBreakpoints_IsSet) return &PreSaleBreakpoints_Optional; return nullptr; }
    void SetPreSaleBreakpoints(TArray<FRHAPI_PriceBreakpoint> NewValue) { PreSaleBreakpoints_Optional = NewValue; PreSaleBreakpoints_IsSet = true; }
    void ClearPreSaleBreakpoints() { PreSaleBreakpoints_IsSet = false; }

    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FRHAPI_CacheInfo CacheInfo_Optional{  };
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool CacheInfo_IsSet{ false };
    FRHAPI_CacheInfo& GetCacheInfo() { return CacheInfo_Optional; }
    const FRHAPI_CacheInfo& GetCacheInfo() const { return CacheInfo_Optional; }
    const FRHAPI_CacheInfo& GetCacheInfo(const FRHAPI_CacheInfo& DefaultValue) const { if (CacheInfo_IsSet) return CacheInfo_Optional; return DefaultValue; }
    bool GetCacheInfo(FRHAPI_CacheInfo& OutValue) const { if (CacheInfo_IsSet) OutValue = CacheInfo_Optional; return CacheInfo_IsSet; }
    FRHAPI_CacheInfo* GetCacheInfoOrNull() { if (CacheInfo_IsSet) return &CacheInfo_Optional; return nullptr; }
    const FRHAPI_CacheInfo* GetCacheInfoOrNull() const { if (CacheInfo_IsSet) return &CacheInfo_Optional; return nullptr; }
    void SetCacheInfo(FRHAPI_CacheInfo NewValue) { CacheInfo_Optional = NewValue; CacheInfo_IsSet = true; }
    void ClearCacheInfo() { CacheInfo_IsSet = false; }
};
