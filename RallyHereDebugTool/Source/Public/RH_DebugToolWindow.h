// Copyright 2016-2022 Hi-Rez Studios, Inc. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/WeakObjectPtr.h"
#include "Templates/SharedPointer.h"
#include "Engine/LocalPlayer.h"
#include "RH_Common.h"
#include "RH_LocalPlayerSubsystem.h"

class URallyHereDebugTool;

DECLARE_DELEGATE_OneParam(FRHDT_LPAction, class ULocalPlayer*);
DECLARE_DELEGATE_OneParam(FRHDT_RHLPAction, class URH_LocalPlayerSubsystem*);

struct RALLYHEREDEBUGTOOL_API FRH_DebugToolWindow : public TSharedFromThis<FRH_DebugToolWindow>
{
	FRH_DebugToolWindow();
	virtual ~FRH_DebugToolWindow();

	virtual void Init(URallyHereDebugTool* InOwner, const FString& InName, bool bInShow = false);
	virtual void Uninit();

	void RenderCheckbox();
	virtual void RenderWindow(); // If you need to override how we normally render windows
	virtual void Do() {}; // Normal windows should only implement this, as it follows the standard window rendering paradigm

	void ForEachSelectedPlayer(FRHDT_LPAction Action);
	void ForEachSelectedRHPlayer(FRHDT_RHLPAction Action);

	TWeakObjectPtr<URallyHereDebugTool> Owner;
	bool bShow;
	bool bShowMenuBar;
	int32 AdditionalWindowFlags;
	FString Name;
	FVector2D DefaultPos;
	FVector2D DefaultSize;
	bool bNeedsWindowPosSizeReset;

	FORCEINLINE URallyHereDebugTool* GetOwner() const { return Owner.Get(); }
	class UWorld* GetWorld() const;
	class UGameInstance* GetGameInstance() const;
	class ULocalPlayer* GetFirstSelectedLocalPlayer() const;
	TArray<class ULocalPlayer*> GetAllSelectedLocalPlayers() const;
	class URH_LocalPlayerSubsystem* GetSelectedRH_LocalPlayerSubsystem() const;
	void ResetSizeAndPos(bool bInNeedsReset = true);

	static TArray<ANSICHAR> ConvertedString;
};