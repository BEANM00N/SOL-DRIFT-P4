#pragma once

#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "ModelPreviewWidget.generated.h"

// --- Wrap Editor-Only Forward Declarations ---
#if WITH_EDITOR
class FAdvancedPreviewScene;
class SEditorViewport;
#endif

class UStaticMeshComponent;
class UStaticMesh;
class UMaterialInterface; 

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

    // Expose SetMaterial to Blueprints
    UFUNCTION(BlueprintCallable, Category = "3D Preview")
    void SetMaterial(int32 ElementIndex, UMaterialInterface* Material);

protected:
    virtual TSharedRef<SWidget> RebuildWidget() override;
    virtual void ReleaseSlateResources(bool bReleaseChildren) override;

private:
// --- Wrap Editor-Only Variables ---
#if WITH_EDITOR
    TSharedPtr<class SMyCustomViewport> ViewportWidget;
    TSharedPtr<FAdvancedPreviewScene> PreviewScene;
    UStaticMeshComponent* PreviewMeshComponent;
#endif
};