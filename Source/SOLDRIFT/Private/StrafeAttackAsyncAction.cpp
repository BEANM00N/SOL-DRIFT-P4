#include "StrafeAttackAsyncAction.h"
#include "Kismet/KismetMathLibrary.h"

UStrafeAttackAsyncAction* UStrafeAttackAsyncAction::StrafeTarget(UObject* WorldContextObject, FVector TurretLocation, FVector TargetLocation, float StrafeWidth, float StrafeTime, float ShotsPerSecond, float InitialDelay)
{
    UStrafeAttackAsyncAction* Action = NewObject<UStrafeAttackAsyncAction>();
    
    Action->WorldContext = WorldContextObject;
    Action->TurretLoc = TurretLocation;
    Action->TargetLoc = TargetLocation;
    Action->Width = StrafeWidth;
    Action->DelayDuration = InitialDelay; // <--- Store the delay
    
    Action->TotalTime = StrafeTime > 0.f ? StrafeTime : 0.1f;
    Action->FireInterval = ShotsPerSecond > 0.f ? 1.0f / ShotsPerSecond : 0.1f;
    
    Action->RegisterWithGameInstance(WorldContextObject);
    return Action;
}

void UStrafeAttackAsyncAction::Activate()
{
    bIsActive = true;
    ElapsedTime = 0.f;
    TimeSinceLastShot = FireInterval; 

    // Turn on the delay phase if the user requested a delay greater than 0
    bIsDelaying = DelayDuration > 0.f;
    DelayElapsedTime = 0.f;

    FVector DirectionToTarget = (TargetLoc - TurretLoc).GetSafeNormal();
    FVector RightVector = FVector::CrossProduct(FVector::UpVector, DirectionToTarget).GetSafeNormal();

    StrafeStartWorld = TargetLoc - (RightVector * (Width * 0.5f));
    StrafeEndWorld = TargetLoc + (RightVector * (Width * 0.5f));
}

void UStrafeAttackAsyncAction::Tick(float DeltaTime)
{
    if (!bIsActive) return;

    // ==========================================
    // PHASE 1: THE WARMUP DELAY
    // ==========================================
    if (bIsDelaying)
    {
        DelayElapsedTime += DeltaTime;

        // Tell the AnimBP to look at the STARTING position of the strafe
        FRotator StartAimRotation = UKismetMathLibrary::FindLookAtRotation(TurretLoc, StrafeStartWorld);
        OnTick.Broadcast(StartAimRotation);

        // Check if the warmup is over
        if (DelayElapsedTime >= DelayDuration)
        {
            bIsDelaying = false; // Turn off the delay, let the real attack begin next frame!
        }
        
        return; // <--- CRITICAL: Exit the tick early so we don't fire bullets!
    }

    // ==========================================
    // PHASE 2: THE ACTUAL ATTACK
    // ==========================================
    ElapsedTime += DeltaTime;
    TimeSinceLastShot += DeltaTime;

    float Alpha = FMath::Clamp(ElapsedTime / TotalTime, 0.f, 1.f);

    FVector CurrentAimLocation = FMath::Lerp(StrafeStartWorld, StrafeEndWorld, Alpha);
    FRotator CurrentAimRotation = UKismetMathLibrary::FindLookAtRotation(TurretLoc, CurrentAimLocation);

    OnTick.Broadcast(CurrentAimRotation);

    if (TimeSinceLastShot >= FireInterval)
    {
        TimeSinceLastShot = 0.f;
        OnFire.Broadcast(CurrentAimRotation);
    }

    if (ElapsedTime >= TotalTime)
    {
        bIsActive = false;
        OnCompleted.Broadcast();
        SetReadyToDestroy(); 
    }
}