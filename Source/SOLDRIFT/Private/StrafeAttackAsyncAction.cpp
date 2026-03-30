#include "StrafeAttackAsyncAction.h"
#include "Kismet/KismetMathLibrary.h"

UStrafeAttackAsyncAction* UStrafeAttackAsyncAction::StrafeTarget(UObject* WorldContextObject, FVector TurretLocation, FVector TargetLocation, float StrafeWidth, float StrafeTime, float ShotsPerSecond)
{
    // 1. Create the actual object in memory
    UStrafeAttackAsyncAction* Action = NewObject<UStrafeAttackAsyncAction>();
    
    // 2. Pass the input data into the object's internal memory
    Action->WorldContext = WorldContextObject;
    Action->TurretLoc = TurretLocation;
    Action->TargetLoc = TargetLocation;
    Action->Width = StrafeWidth;
    
    // 3. Safety checks to prevent divide-by-zero crashes later
    Action->TotalTime = StrafeTime > 0.f ? StrafeTime : 0.1f;
    Action->FireInterval = ShotsPerSecond > 0.f ? 1.0f / ShotsPerSecond : 0.1f;
    
    // 4. Tell the engine not to delete this object while it's running
    Action->RegisterWithGameInstance(WorldContextObject);
    
    // 5. Hand the object back to the Blueprint
    return Action;
} // <--- THIS WAS THE MISSING BRACE!

void UStrafeAttackAsyncAction::Activate()
{
    bIsActive = true;
    ElapsedTime = 0.f;

    // Start this exactly at the FireInterval so it immediately takes the first shot on frame 1
    TimeSinceLastShot = FireInterval; 

    // 1. Find the forward direction from the turret to the player
    FVector DirectionToTarget = (TargetLoc - TurretLoc).GetSafeNormal();

    // 2. Use a Cross Product to find the perpendicular "Right" vector
    FVector RightVector = FVector::CrossProduct(FVector::UpVector, DirectionToTarget).GetSafeNormal();

    // 3. Define the far-left and far-right points of the strafe line in the 3D world
    StrafeStartWorld = TargetLoc - (RightVector * (Width * 0.5f));
    StrafeEndWorld = TargetLoc + (RightVector * (Width * 0.5f));
}

void UStrafeAttackAsyncAction::Tick(float DeltaTime)
{
    if (!bIsActive) return;

    ElapsedTime += DeltaTime;
    TimeSinceLastShot += DeltaTime;

    // 1. Calculate how far along the strafe we are (0.0 to 1.0)
    float Alpha = FMath::Clamp(ElapsedTime / TotalTime, 0.f, 1.f);

    // 2. Find the exact point in the world the turret should be looking at right now
    FVector CurrentAimLocation = FMath::Lerp(StrafeStartWorld, StrafeEndWorld, Alpha);
    FRotator CurrentAimRotation = UKismetMathLibrary::FindLookAtRotation(TurretLoc, CurrentAimLocation);

    // 3. Fire the green "On Tick" Blueprint execution pin
    OnTick.Broadcast(CurrentAimRotation);

    // 4. Check if enough time has passed to fire a shot
    if (TimeSinceLastShot >= FireInterval)
    {
        TimeSinceLastShot = 0.f;
        // Fire the green "On Fire" Blueprint execution pin
        OnFire.Broadcast(CurrentAimRotation);
    }

    // 5. Check if the strafe is totally finished
    if (ElapsedTime >= TotalTime)
    {
        bIsActive = false;
        // Fire the final green "On Completed" Blueprint execution pin
        OnCompleted.Broadcast();
    
        // Tell the engine it is safe to delete us from RAM
        SetReadyToDestroy(); 
    }
}