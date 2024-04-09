// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Tower_Ascend : ModuleRules
{
	public Tower_Ascend(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
