// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ObstacleAssult : ModuleRules
{
	public ObstacleAssult(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"ObstacleAssult",
			"ObstacleAssult/Variant_Platforming",
			"ObstacleAssult/Variant_Platforming/Animation",
			"ObstacleAssult/Variant_Combat",
			"ObstacleAssult/Variant_Combat/AI",
			"ObstacleAssult/Variant_Combat/Animation",
			"ObstacleAssult/Variant_Combat/Gameplay",
			"ObstacleAssult/Variant_Combat/Interfaces",
			"ObstacleAssult/Variant_Combat/UI",
			"ObstacleAssult/Variant_SideScrolling",
			"ObstacleAssult/Variant_SideScrolling/AI",
			"ObstacleAssult/Variant_SideScrolling/Gameplay",
			"ObstacleAssult/Variant_SideScrolling/Interfaces",
			"ObstacleAssult/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
