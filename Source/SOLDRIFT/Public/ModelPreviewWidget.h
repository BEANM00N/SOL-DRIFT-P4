#pragma once

#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "ModelPreviewWidget.generated.h"

class FAdvancedPreviewScene;
class SEditorViewport;
class UStaticMeshComponent;
class UStaticMesh;
class UMaterialInterface; // <-- Add this forward declaration

UCLASS()
class UModelPreviewWidget : public UWidget
{
    GENERATED_BODY()

public:
    UModelPreviewWidget();
    virtual ~UModelPreviewWidget();

    // Call this from your Editor Utility Widget blueprint
    UFUNCTION(BlueprintCallable, Category = "3D Preview")
    void SetStaticMesh(UStaticMesh* NewMesh);

    // --- NEW: Expose SetMaterial to Blueprints ---
    UFUNCTION(BlueprintCallable, Category = "3D Preview")
    void SetMaterial(int32 ElementIndex, UMaterialInterface* Material);
    // ---------------------------------------------

protected:
    virtual TSharedRef<SWidget> RebuildWidget() override;
    virtual void ReleaseSlateResources(bool bReleaseChildren) override;

private:
    TSharedPtr<class SMyCustomViewport> ViewportWidget;
    TSharedPtr<FAdvancedPreviewScene> PreviewScene;
    UStaticMeshComponent* PreviewMeshComponent;
};