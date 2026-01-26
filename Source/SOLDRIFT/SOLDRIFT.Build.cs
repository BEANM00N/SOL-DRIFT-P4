// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class SOLDRIFT : ModuleRules
{
	public SOLDRIFT(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });

		PrivateDependencyModuleNames.AddRange(new string[] {  });
		
		// --- ADD THIS SECTION ---
		// 1. Point to the directory where we put flecs.h
		PublicIncludePaths.Add(System.IO.Path.Combine(ModuleDirectory, "Flecs"));

		// 2. FLECS is a standard C library, Unreal is strict. We suppress specific warnings for it.
		// (Optional: If you get build errors, you might need to enable specific C++ standards, 
		// but UE5 defaults to C++17/20 which is fine for FLECS).
		// ------------------------

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
		
		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
