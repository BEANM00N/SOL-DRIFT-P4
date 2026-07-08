#pragma once

#include "CoreMinimal.h"
#include "EditorSubsystem.h"
#include "InventoryToolbarSubsystem.generated.h"

UCLASS()
class SOLDRIFT_API UInventoryToolbarSubsystem : public UEditorSubsystem
{
	GENERATED_BODY()

public:
	// These run automatically when the editor opens
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	// The function our button will actually trigger
	void SpawnInventoryTool();
};