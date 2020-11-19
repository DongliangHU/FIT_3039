// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class EuroWar1800 : ModuleRules
{
	public EuroWar1800(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "NavigationSystem", "AIModule" });
    }
}
