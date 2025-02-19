// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Ship_Elvis : ModuleRules
{
	public Ship_Elvis(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
