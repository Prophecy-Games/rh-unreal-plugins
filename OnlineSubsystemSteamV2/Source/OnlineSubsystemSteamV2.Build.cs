// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;

public class OnlineSubsystemSteamV2 : ModuleRules
{
    public OnlineSubsystemSteamV2(ReadOnlyTargetRules Target) : base(Target)
    {
        PrivateDefinitions.Add("ONLINESUBSYSTEMSTEAMV2_PACKAGE=1");
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
            new string[] {
                "OnlineSubsystemUtils",
				"OnlineSubsystemSteam"
			}
        );

        PrivateDependencyModuleNames.AddRange(
            new string[] {
                "Core",
                "CoreUObject",
                "Engine",
                "OnlineSubsystem",
				"OnlineSubsystemSteam",
				"SteamShared",
				"Json"
			}
        );

		AddEngineThirdPartyPrivateStaticDependencies(Target, "Steamworks");
	}
}
