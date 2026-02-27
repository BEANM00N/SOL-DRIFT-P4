#include "ModelPreviewWidget.h"
#include "AdvancedPreviewScene.h"
#include "SEditorViewport.h"
#include "Components/StaticMeshComponent.h"
#include "EditorViewportClient.h"
#include "Components/PostProcessComponent.h" // <-- Required for Post Processing

// =========================================================
// 1. The Slate Viewport Implementation
// =========================================================
class SMyCustomViewport : public SEditorViewport
{
public:
    SLATE_BEGIN_ARGS(SMyCustomViewport) {}
    SLATE_END_ARGS()

    void Construct(const FArguments& InArgs, TSharedPtr<FAdvancedPreviewScene> InPreviewScene)
    {
        PreviewScene = InPreviewScene;
        SEditorViewport::Construct(SEditorViewport::FArguments());
    }

    // We expose our Viewport Client here so the UMG wrapper can access the camera
    TSharedPtr<FEditorViewportClient> MyViewportClient;

protected:
    virtual TSharedRef<FEditorViewportClient> MakeEditorViewportClient() override
    {
        // Creates the camera and controls for the viewport
        MyViewportClient = MakeShareable(new FEditorViewportClient(nullptr, PreviewScene.Get()));
        
        // Setup default camera settings
        MyViewportClient->bSetListenerPosition = false;
        MyViewportClient->SetRealtime(true); // Ensure it ticks for live previews
        MyViewportClient->SetViewLocation(FVector(200.f, 200.f, 200.f));
        MyViewportClient->SetViewRotation(FRotator(-45.f, -45.f, 0.f));
        
        return MyViewportClient.ToSharedRef();
    }

private:
    TSharedPtr<FAdvancedPreviewScene> PreviewScene;
};

// =========================================================
// 2. The UMG Wrapper Implementation
// =========================================================
UModelPreviewWidget::UModelPreviewWidget()
{
    // Do not create the scene in the constructor to avoid editor crashes during CDO initialization
}

UModelPreviewWidget::~UModelPreviewWidget()
{
    // Clean up
    if (PreviewScene.IsValid())
    {
        PreviewScene.Reset();
    }
}

TSharedRef<SWidget> UModelPreviewWidget::RebuildWidget()
{
    if (IsDesignTime())
    {
        // Return a blank box if we are just looking at the UMG designer
        return SNew(SBox)
            .HAlign(HAlign_Center)
            .VAlign(VAlign_Center)
            [
                SNew(STextBlock).Text(FText::FromString("3D Preview Viewport"))
            ];
    }

    // Initialize the isolated 3D scene
    FPreviewScene::ConstructionValues ConstructionValues;
    ConstructionValues.bCreatePhysicsScene = false;
    PreviewScene = MakeShareable(new FAdvancedPreviewScene(ConstructionValues));

    // --- NEW: Add Post Processing for Exposure Control ---
    UPostProcessComponent* PPComp = NewObject<UPostProcessComponent>(GetTransientPackage(), NAME_None, RF_Transient);
    PPComp->bUnbound = true; // Ensure it affects the entire viewport camera
    
    // Set Min/Max Exposure Limits (Using UE5 EV100 settings)
    PPComp->Settings.bOverride_AutoExposureMinBrightness = false;
    PPComp->Settings.AutoExposureMinBrightness = 1.0;
    PPComp->Settings.bOverride_AutoExposureMaxBrightness = false;
    PPComp->Settings.AutoExposureMaxBrightness = 1.0f;
    
    PreviewScene->AddComponent(PPComp, FTransform::Identity);
    // -----------------------------------------------------

    // Add a mesh component to the isolated scene
    PreviewMeshComponent = NewObject<UStaticMeshComponent>(GetTransientPackage(), NAME_None, RF_Transient);
    PreviewScene->AddComponent(PreviewMeshComponent, FTransform::Identity);

    // Build the Slate Viewport widget and pass it our scene
    ViewportWidget = SNew(SMyCustomViewport, PreviewScene);

    return ViewportWidget.ToSharedRef();
}

void UModelPreviewWidget::ReleaseSlateResources(bool bReleaseChildren)
{
    Super::ReleaseSlateResources(bReleaseChildren);
    ViewportWidget.Reset();
    PreviewScene.Reset();
}

void UModelPreviewWidget::SetStaticMesh(UStaticMesh* NewMesh)
{
    if (PreviewMeshComponent)
    {
        PreviewMeshComponent->SetStaticMesh(NewMesh);

        // --- NEW: Auto-Focus the Camera ---
        if (NewMesh && ViewportWidget.IsValid() && ViewportWidget->MyViewportClient.IsValid())
        {
            // The 'true' argument at the end makes it instant instead of a slow camera pan
            ViewportWidget->MyViewportClient->FocusViewportOnBox(PreviewMeshComponent->Bounds.GetBox(), true);
        }
        // ----------------------------------
    }
}
void UModelPreviewWidget::SetMaterial(int32 ElementIndex, UMaterialInterface* Material)
{
    if (PreviewMeshComponent)
    {
        // Passes the material and index down to the hidden 3D mesh
        PreviewMeshComponent->SetMaterial(ElementIndex, Material);
    }
}