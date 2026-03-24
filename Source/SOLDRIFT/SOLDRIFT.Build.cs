using UnrealBuildTool;
using System.IO; // Add this

public class SOLDRIFT : ModuleRules
{
    public SOLDRIFT(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
    
        // Standard game modules go here
        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "UMG", "Slate", "SlateCore","CPathfinding", "Niagara" });

        PrivateDependencyModuleNames.AddRange(new string[] {  });

		// Add Flecs Include Path
		PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Flecs"));

		// Only include Editor modules if we are actually building the Editor
		if (Target.bBuildEditor)
        {
            PublicDependencyModuleNames.AddRange(new string[] { "UnrealEd", "AdvancedPreviewScene" });
        }
    }
}