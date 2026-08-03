#include "InventoryEditorTools.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "Modules/ModuleManager.h"
#include "Engine/Blueprint.h"

// Wrap the Editor-only includes so the packager ignores them!
#if WITH_EDITOR
#include "PropertyEditorModule.h"
#include "Toolkits/IToolkitHost.h"
#endif

// CRUCIAL: We include your new C++ parent class so we can read its variables!
#include "ItemParent.h" 

void UInventoryEditorTools::OpenInventoryMatrixByTag(FGameplayTag SearchTag)
{
// Wrap the entire logic block. 
// This ensures the function signature still exists in a packaged game to prevent Blueprint errors, but the body does nothing.
#if WITH_EDITOR
    if (!SearchTag.IsValid()) 
    {
       UE_LOG(LogTemp, Error, TEXT("InventoryTool: The Search Tag provided is Invalid or None!"));
       return;
    }

    UE_LOG(LogTemp, Warning, TEXT("InventoryTool: Initiating Search for Tag: %s"), *SearchTag.ToString());

    FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");

    // Build filter to grab the lightweight metadata ghosts of every Blueprint in the project
    FARFilter Filter;
    Filter.ClassPaths.Add(UBlueprint::StaticClass()->GetClassPathName());
    Filter.bRecursiveClasses = true; 

    TArray<FAssetData> AssetList;
    AssetRegistryModule.Get().GetAssets(Filter, AssetList);

    TArray<UObject*> ObjectsToLoadIntoMatrix;

    for (const FAssetData& Asset : AssetList)
    {
       // 1. Read the inheritance metadata from the cache (ZERO memory load!)
       FString ParentStr;
       FString NativeParentStr;
       Asset.GetTagValue(FName("ParentClass"), ParentStr);
       Asset.GetTagValue(FName("NativeParentClass"), NativeParentStr);

       // 2. Check if this Blueprint inherits from either your C++ class or your Core BP
       // Adjust "Item_Core" if the exact spelling of your Blueprint parent is different!
       bool bIsInventoryItem = ParentStr.Contains("Item_Core") || 
                         ParentStr.Contains("ItemParent") || 
                         NativeParentStr.Contains("ItemParent");

       // 3. If it's not an inventory item, skip to the next asset immediately
       if (!bIsInventoryItem)
       {
          continue; 
       }

       // 4. WE FOUND AN INVENTORY ITEM! Now it is safe to load it into memory.
       if (UBlueprint* LoadedBP = Cast<UBlueprint>(Asset.GetAsset()))
       {
          // Double-check the actual class just to be strictly safe
          if (LoadedBP->GeneratedClass && LoadedBP->GeneratedClass->IsChildOf(UItemParent::StaticClass()))
          {
             // Get the default settings for this specific piece of gear
             if (UItemParent* DefaultObject = Cast<UItemParent>(LoadedBP->GeneratedClass->GetDefaultObject()))
             {
                // Read the literal Gameplay Tag!
                if (DefaultObject->ItemTag.MatchesTag(SearchTag))
                {
                   ObjectsToLoadIntoMatrix.Add(DefaultObject);
                   UE_LOG(LogTemp, Warning, TEXT("InventoryTool: MATCHED! Added %s to the Matrix queue."), *LoadedBP->GetName());
                }
             }
          }
       }
    }

    // 5. Blast them all into the Property Matrix using the UE 5.6 API
    if (ObjectsToLoadIntoMatrix.Num() > 0)
    {
       FPropertyEditorModule& PropertyEditorModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");
       PropertyEditorModule.CreatePropertyEditorToolkit(TSharedPtr<IToolkitHost>(), ObjectsToLoadIntoMatrix);
       
       UE_LOG(LogTemp, Warning, TEXT("InventoryTool: Successfully opened Property Matrix with %d objects."), ObjectsToLoadIntoMatrix.Num());
    }
    else
    {
       UE_LOG(LogTemp, Warning, TEXT("InventoryTool: Aborted. No objects found matching tag %s."), *SearchTag.ToString());
    }
#else
    // If this gets called in a packaged game (e.g., left attached to a runtime keybind), do nothing safely.
    UE_LOG(LogTemp, Warning, TEXT("InventoryTool: OpenInventoryMatrixByTag is an Editor-only tool and cannot run in a packaged build."));
#endif
}