#include "EnemyPathingLibrary.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "Engine/World.h"
#include "CollisionQueryParams.h"

int32 UEnemyPathingLibrary::GetNextOptimalNode(APawn* PathingPawn, const TArray<FCPathNode>& PathBuffer, int32 StartIndex, int32 SmoothingPasses)
{
    // 1. Safety Checks
    if (!PathingPawn || PathBuffer.IsEmpty() || StartIndex < 0 || StartIndex >= PathBuffer.Num())
    {
        return StartIndex;
    }

    UWorld* World = PathingPawn->GetWorld();
    if (!World) return StartIndex;

    // 2. Fetch Velocity from the pawn's movement component
    FVector VelocityNorm = FVector::ZeroVector;
    if (UFloatingPawnMovement* MoveComp = PathingPawn->FindComponentByClass<UFloatingPawnMovement>())
    {
        VelocityNorm = MoveComp->Velocity.GetSafeNormal(0.0001f);
    }

    FVector PawnLocation = PathingPawn->GetActorLocation();

    // 3. Inline Lambda Function for Dot Product (Replaces GetDotToNode)
    auto CalculateDot = [&](const FCPathNode& Node) -> double
    {
        if (VelocityNorm.IsNearlyZero()) return 0.0;
        FVector DirToNode = (Node.WorldLocation - PawnLocation).GetSafeNormal(0.0001f);
        return FVector::DotProduct(VelocityNorm, DirToNode);
    };

    int32 BestIndex = StartIndex;
    double BestDot = CalculateDot(PathBuffer[StartIndex]);

    // 4. Trace Setup (Done ONCE outside the loop for massive performance gains)
    FCollisionQueryParams TraceParams(SCENE_QUERY_STAT(PathSmoothing), false, PathingPawn);

    // Calculate how far ahead in the array we are allowed to look
    int32 MaxSearchIndex = FMath::Min(StartIndex + SmoothingPasses + 1, PathBuffer.Num());
    int32 LoopIndex = StartIndex;
    bool bWasHit = false;

    // 5. The Optimized While Loop
    while (!bWasHit && LoopIndex < MaxSearchIndex)
    {
        double CurrDot = CalculateDot(PathBuffer[LoopIndex]);

        // If this node is better aligned with our velocity, check visibility
        if (CurrDot >= BestDot)
        {
            FHitResult HitResult;
            
            // Note: Change ECC_Visibility to your specific pathfinding channel if you use a custom one
            bWasHit = World->LineTraceSingleByChannel(
                HitResult,
                PawnLocation,
                PathBuffer[LoopIndex].WorldLocation,
                ECC_Visibility, 
                TraceParams
            );

            // If we have line of sight, this is our new target
            if (!bWasHit)
            {
                BestDot = CurrDot;
                BestIndex = LoopIndex;
            }
        }
        LoopIndex++;
    }

    return BestIndex;
}