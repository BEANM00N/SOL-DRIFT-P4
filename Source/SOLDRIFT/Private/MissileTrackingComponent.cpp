#include "MissileTrackingComponent.h"
#include "Kismet/KismetMathLibrary.h"

UMissileTrackingComponent::UMissileTrackingComponent()
{
    // Enable ticking so we can move the owner every frame
    PrimaryComponentTick.bCanEverTick = true;
}

void UMissileTrackingComponent::BeginPlay()
{
    Super::BeginPlay();

    CurrentState = EMissileState::Coasting;
    StateTimer = 0.0f;

    // Initialize velocity to shoot straight forward out of the barrel
    if (AActor* Owner = GetOwner())
    {
        CurrentVelocity = Owner->GetActorForwardVector() * CoastSpeed;
    }
}

void UMissileTrackingComponent::SetTarget(AActor* NewTarget)
{
    TargetActor = NewTarget;
}

void UMissileTrackingComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    AActor* Owner = GetOwner();
    if (!Owner) return;

    // ==========================================
    // PHASE 1: COASTING (Dumb-fire forward)
    // ==========================================
    if (CurrentState == EMissileState::Coasting)
    {
        StateTimer += DeltaTime;
        CurrentVelocity = Owner->GetActorForwardVector() * CoastSpeed;

        if (StateTimer >= ActivationDelay)
        {
            CurrentState = EMissileState::Tracking;
            StateTimer = 0.0f; // Reset timer in case we want to use it later
        }
    }
    // ==========================================
    // PHASE 2: TRACKING (Homing)
    // ==========================================
    else if (CurrentState == EMissileState::Tracking)
    {
        // If the target still exists, chase it
        if (TargetActor)
        {
            FVector CurrentLocation = Owner->GetActorLocation();
            FVector TargetLocation = TargetActor->GetActorLocation();

            // Check if we have entered the Terminal Radius
            if (FVector::DistSquared(CurrentLocation, TargetLocation) <= FMath::Square(TerminalRadius))
            {
                CurrentState = EMissileState::Terminal;
                StateTimer = 0.0f; // Reset the timer for the final countdown
            }
            else
            {
                // Not close enough yet, keep steering
                FRotator DesiredRotation = UKismetMathLibrary::FindLookAtRotation(CurrentLocation, TargetLocation);
                FRotator NewRotation = FMath::RInterpTo(Owner->GetActorRotation(), DesiredRotation, DeltaTime, TurnRate);
                Owner->SetActorRotation(NewRotation);
            }
        }
        else 
        {
            // Failsafe: If the target died or was destroyed while we were tracking it, go dumb!
            CurrentState = EMissileState::Terminal;
            StateTimer = 0.0f; 
        }

        CurrentVelocity = Owner->GetActorForwardVector() * TrackingSpeed;
    }
    // ==========================================
    // PHASE 3: TERMINAL (Dumb-fire past target)
    // ==========================================
    else if (CurrentState == EMissileState::Terminal)
    {
        StateTimer += DeltaTime;
        
        // Maintain our top tracking speed, but stop rotating the nose
        CurrentVelocity = Owner->GetActorForwardVector() * TrackingSpeed; 

        // Check if our air-time has run out
        if (StateTimer >= TerminalFlightTime)
        {
            // Destroy the missile actor completely
            Owner->Destroy();
            return; // Exit the tick immediately so we don't try to move a dead actor below
        }
    }

    // ==========================================
    // APPLY MOVEMENT & COLLISION
    // ==========================================
    FHitResult HitResult;
    FVector MoveDelta = CurrentVelocity * DeltaTime;

    // AddActorWorldOffset with "true" enables Sweeping. 
    // This physically pushes the collision box through the world, stopping at walls/enemies!
    Owner->AddActorWorldOffset(MoveDelta, true, &HitResult);
}