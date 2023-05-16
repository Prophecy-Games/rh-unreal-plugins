// Copyright 2016-2022 Hi-Rez Studios, Inc. All Rights Reserved.
#pragma once

#include "RH_DebugToolWindow.h"
#include "RH_ConfigSubsystem.h"
#include "ConfigAPI.h"

struct FRHDTW_Config : public FRH_DebugToolWindow
{
	typedef FRH_DebugToolWindow Super;

	FRHDTW_Config();
	virtual ~FRHDTW_Config();

	virtual void Do() override;
	void DoRhConfigTab(URH_ConfigSubsystem* pRH_ConfigSubsystem);
	void DoRhSiteTab(URH_ConfigSubsystem* pRH_ConfigSubsystem);

	using FFResponse_GetAppSettingsClient = RallyHereAPI::FResponse_GetAppSettingsClient;
	void HandleFetchAppSettings(bool bSuccess);
	void HandleFetchSiteSettings(bool bSuccess);

	FString AppSettingsActionResult;
	FString SiteSettingsActionResult;

};
