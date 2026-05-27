#include "MissileTrackingComponent.h"
#include "Kismet/KismetMathLibrary.h"

UMissileTrackingComponent::UMissileTrackingComponent()
{
    PrimaryComponentTick.bCanEverTick = true;
}

void UMissileTrackingComponent::BeginPlay()
{
    Super::BeginPlay();

    // Initialize the component using our new reset function
    StartTracking();
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
            StateTimer = 0.0f; 
        }
    }
    // ==========================================
    // PHASE 2: TRACKING (Homing)
    // ==========================================
    else if (CurrentState == EMissileState::Tracking)
    {
        if (TargetActor)
        {
            FVector CurrentLocation = Owner->GetActorLocation();
            FVector TargetLocation = TargetActor->GetActorLocation();

            if (FVector::DistSquared(CurrentLocation, TargetLocation) <= FMath::Square(TerminalRadius))
            {
                CurrentState = EMissileState::Terminal;
                StateTimer = 0.0f; 
            }
            else
            {
                FRotator DesiredRotation = UKismetMathLibrary::FindLookAtRotation(CurrentLocation, TargetLocation);
                FRotator NewRotation = FMath::RInterpTo(Owner->GetActorRotation(), DesiredRotation, DeltaTime, TurnRate);
                Owner->SetActorRotation(NewRotation);
            }
        }
        else 
        {
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
        
        CurrentVelocity = Owner->GetActorForwardVector() * TrackingSpeed; 

        // Check if our air-time has run out
        if (StateTimer >= TerminalFlightTime)
        {
            // 1. Broadcast to Blueprints that the timer is up!
            OnFlightTimeExpired.Broadcast();

            // 2. Disable ticking so we don't spam the broadcast or keep moving
            SetComponentTickEnabled(false);
            
            return; 
        }
    }

    // ==========================================
    // APPLY MOVEMENT & COLLISION
    // ==========================================
    FHitResult HitResult;
    FVector MoveDelta = CurrentVelocity * DeltaTime;

    Owner->AddActorWorldOffset(MoveDelta, true, &HitResult);
}
void UMissileTrackingComponent::StartTracking()
{
    // 1. Reset the state machine back to phase 1
    CurrentState = EMissileState::Coasting;
    StateTimer = 0.0f;

    // 2. Reset the velocity based on the owner's current direction
    if (AActor* Owner = GetOwner())
    {
        CurrentVelocity = Owner->GetActorForwardVector() * CoastSpeed;
    }

    // 3. Turn the engine back on
    SetComponentTickEnabled(true);
}

void UMissileTrackingComponent::StopTracking()
{
    // Shut off the engine
    SetComponentTickEnabled(false);
}
FVector UMissileTrackingComponent::GetCurrentVelocity() const
{
    return CurrentVelocity;
}