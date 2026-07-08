#include "InventoryToolbarSubsystem.h"
#include "ToolMenus.h"
#include "EditorUtilitySubsystem.h"
#include "EditorUtilityWidgetBlueprint.h"

void UInventoryToolbarSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	// 1. Find the main top toolbar in UE5
	UToolMenu* ToolbarMenu = UToolMenus::Get()->ExtendMenu("LevelEditor.LevelEditorToolBar.PlayToolBar");
	
	if (ToolbarMenu)
	{
		// 2. Add a new section to it for your custom tools
		FToolMenuSection& Section = ToolbarMenu->FindOrAddSection("Inventory");
		
		// 3. Inject the wee button!
		Section.AddEntry(FToolMenuEntry::InitToolBarButton(
			"OpenInventoryTool",
			FToolUIActionChoice(FExecuteAction::CreateUObject(this, &UInventoryToolbarSubsystem::SpawnInventoryTool)),
			FText::FromString("Inventory Tool"), // The text on the button
			FText::FromString("Opens the Bulk Inventory Editor"), // The hover tooltip
			FSlateIcon() // You can add a custom icon path here later!
		));
	}
}

void UInventoryToolbarSubsystem::Deinitialize()
{
	Super::Deinitialize();
}

void UInventoryToolbarSubsystem::SpawnInventoryTool()
{
	// 4. Load your specific EUW asset from the hard drive (using the path from your log)
	UObject* BlueprintObj = LoadObject<UObject>(nullptr, TEXT("/Game/Utilities/BulkSelector/EUW_InventoryManager.EUW_InventoryManager"));
	
	if (UEditorUtilityWidgetBlueprint* EUW_BP = Cast<UEditorUtilityWidgetBlueprint>(BlueprintObj))
	{
		// 5. Ask the engine to spawn it as a real, dockable Editor Tab
		if (UEditorUtilitySubsystem* EditorUtilitySubsystem = GEditor->GetEditorSubsystem<UEditorUtilitySubsystem>())
		{
			EditorUtilitySubsystem->SpawnAndRegisterTab(EUW_BP);
		}
	}
}