#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "InventoryEditorTools.generated.h"

UCLASS()
class SOLDRIFT_API UInventoryEditorTools : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	// The node we will call from our Editor UI
	UFUNCTION(BlueprintCallable, Category = "Editor Tools|Inventory")
	static void OpenInventoryMatrixByTag(FGameplayTag SearchTag);
};