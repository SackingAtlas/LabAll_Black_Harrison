// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Lab1_Black_Harrison : ModuleRules
{
	public Lab1_Black_Harrison(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
