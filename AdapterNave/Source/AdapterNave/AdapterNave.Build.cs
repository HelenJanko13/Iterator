// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class AdapterNave : ModuleRules
{
	public AdapterNave(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
