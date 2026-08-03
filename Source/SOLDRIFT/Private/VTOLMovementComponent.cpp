#include "VTOLMovementComponent.h"

UVTOLMovementComponent::UVTOLMovementComponent()
{
    PrimaryComponentTick.bCanEverTick = true;
    
    // Default values
    MaxSpeed = 250.f;
    AccelerationRate = 3.f; // The rate at which the VTOL reaches MaxSpeed
    MaxSimulationIterations = 4; 
}

void UVTOLMovementComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    if (!PawnOwner || !UpdatedComponent || ShouldSkipUpdate(DeltaTime))
    {
        return;
    }

    // 1. Get raw input from the player (-1 to 1) via Blueprint's AddMovementInput
    FVector InputVector = ConsumeInputVector().GetClampedToMaxSize(1.0f);

    // 2. Calculate the Target Velocity (Input * MaxSpeed)
    FVector TargetVelocity = InputVector * MaxSpeed;

    // 3. The Momentum Engine: Interpolate current Velocity towards Target Velocity at a constant rate
    // This perfectly perfectly replicates your FInterpTo_Constant setup
    Velocity = FMath::VInterpConstantTo(Velocity, TargetVelocity, DeltaTime, AccelerationRate);

    // 4. Calculate how far we actually move THIS frame
    FVector DesiredMovementThisFrame = Velocity * DeltaTime;

    // 5. Execute the physics sweep and slide
    if (!DesiredMovementThisFrame.IsNearlyZero())
    {
        FHitResult Hit;
        FVector RemainingMovement = DesiredMovementThisFrame;
        int32 Iterations = 0;

        while (Iterations < MaxSimulationIterations && !RemainingMovement.IsNearlyZero())
        {
            SafeMoveUpdatedComponent(RemainingMovement, UpdatedComponent->GetComponentQuat(), true, Hit);

            if (Hit.bBlockingHit)
            {
                if (Hit.Normal.IsNearlyZero())
                {
                    break;
                }

                // Natively calculate the correct slide plane and adjust the vector
                SlideAlongSurface(RemainingMovement, (1.f - Hit.Time), Hit.Normal, Hit, true);
            }
            else
            {
                break;
            }

            Iterations++;
        }

        // Optional but recommended: Update the component's internal velocity to match the slide.
        // This prevents the momentum from building up into a wall while you are sliding against it.
        UpdateComponentVelocity();
    }
}