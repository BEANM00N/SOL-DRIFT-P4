using UnrealBuildTool;

public class SOLDRIFT : ModuleRules
{
    public SOLDRIFT(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
    
        // Standard game modules go here
        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "UMG", "Slate", "SlateCore" });

        PrivateDependencyModuleNames.AddRange(new string[] {  });

        // Only include Editor modules if we are actually building the Editor
        if (Target.bBuildEditor)
        {
            PublicDependencyModuleNames.AddRange(new string[] { "UnrealEd", "AdvancedPreviewScene" });
        }
    }
}