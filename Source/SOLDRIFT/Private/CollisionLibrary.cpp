#include "CollisionLibrary.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"
#include "KismetTraceUtils.h"

bool UCollisionLibrary::ConeTraceMultiByChannel(
    const UObject* WorldContextObject, 
    const FVector Start, 
    const FRotator Direction, 
    float Range, 
    float ConeHalfAngle, 
    ETraceTypeQuery TraceChannel, 
    bool bTraceComplex, 
    const TArray<AActor*>& ActorsToIgnore, 
    bool bIgnoreSelf, 
    TArray<FHitResult>& OutHits,
    EDrawDebugTrace::Type DrawDebugType,
    FLinearColor TraceColor,
    FLinearColor TraceHitColor,
    float DrawTime)
{
    OutHits.Empty();

    UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull);
    if (!World) return false;

    ECollisionChannel CollisionChannel = UEngineTypes::ConvertToCollisionChannel(TraceChannel);

    // Setup collision parameters
    FCollisionQueryParams Params(SCENE_QUERY_STAT(ConeTraceMulti), bTraceComplex);
    Params.AddIgnoredActors(ActorsToIgnore);
    if (bIgnoreSelf && WorldContextObject && WorldContextObject->IsA<AActor>())
    {
        Params.AddIgnoredActor(Cast<AActor>(WorldContextObject));
    }

    // STEP 1: The Sphere Overlap (Grab everything in range)
    TArray<FOverlapResult> SphereOverlaps;
    FCollisionShape SphereShape = FCollisionShape::MakeSphere(Range);
    
    bool bHasOverlaps = World->OverlapMultiByChannel(SphereOverlaps, Start, FQuat::Identity, CollisionChannel, SphereShape, Params);

    if (bHasOverlaps)
    {
        FVector ForwardVector = Direction.Vector();
        float ConeHalfAngleRad = FMath::DegreesToRadians(ConeHalfAngle);

        // STEP 2: The Math Filter
        for (const FOverlapResult& Overlap : SphereOverlaps)
        {
            AActor* HitActor = Overlap.GetActor();
            if (!HitActor) continue;

            // Get direction to the target
            FVector TargetLoc = HitActor->GetActorLocation();
            FVector DirToTarget = (TargetLoc - Start).GetSafeNormal();

            // Calculate Angle
            float Dot = FVector::DotProduct(ForwardVector, DirToTarget);
            float AngleRad = FMath::Acos(Dot);

            // If the target is inside the cone's angle...
            if (AngleRad <= ConeHalfAngleRad)
            {
                // STEP 3: Line of Sight Trace (To get accurate HitResult data and check for walls)
                FHitResult LineHit;
                World->LineTraceSingleByChannel(LineHit, Start, TargetLoc, CollisionChannel, Params);

                // If the trace hit the exact actor we overlapped, we have clear line of sight!
                if (LineHit.GetActor() == HitActor)
                {
                    OutHits.Add(LineHit);
                }
            }
        }
    }

#if ENABLE_DRAW_DEBUG
    if (DrawDebugType != EDrawDebugTrace::None)
    {
        bool bPersistent = DrawDebugType == EDrawDebugTrace::Persistent;
        
        // Draw the math cone
        DrawDebugCone(World, Start, Direction.Vector(), Range, FMath::DegreesToRadians(ConeHalfAngle), FMath::DegreesToRadians(ConeHalfAngle), 32, TraceColor.ToFColor(true), bPersistent, DrawTime);

        // Draw successful hits
        for (const FHitResult& Hit : OutHits)
        {
            DrawDebugLineTraceSingle(World, Hit.TraceStart, Hit.ImpactPoint, DrawDebugType, true, Hit, TraceHitColor, TraceHitColor, DrawTime);
        }
    }
#endif // ENABLE_DRAW_DEBUG

    return OutHits.Num() > 0;
}

bool UCollisionLibrary::ConeTraceSingleByChannel(
    const UObject* WorldContextObject, 
    const FVector Start, 
    const FRotator Direction, 
    float Range, 
    float ConeHalfAngle, 
    ETraceTypeQuery TraceChannel, 
    bool bTraceComplex, 
    const TArray<AActor*>& ActorsToIgnore, 
    bool bIgnoreSelf, 
    FHitResult& OutHit,
    EDrawDebugTrace::Type DrawDebugType,
    FLinearColor TraceColor,
    FLinearColor TraceHitColor,
    float DrawTime)
{
    // Clear out the hit result in case we find nothing
    OutHit = FHitResult();

    UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull);
    if (!World) return false;

    ECollisionChannel CollisionChannel = UEngineTypes::ConvertToCollisionChannel(TraceChannel);

    FCollisionQueryParams Params(SCENE_QUERY_STAT(ConeTraceSingle), bTraceComplex);
    Params.AddIgnoredActors(ActorsToIgnore);
    if (bIgnoreSelf && WorldContextObject && WorldContextObject->IsA<AActor>())
    {
        Params.AddIgnoredActor(Cast<AActor>(WorldContextObject));
    }

    TArray<FOverlapResult> SphereOverlaps;
    FCollisionShape SphereShape = FCollisionShape::MakeSphere(Range);
    
    bool bHasOverlaps = World->OverlapMultiByChannel(SphereOverlaps, Start, FQuat::Identity, CollisionChannel, SphereShape, Params);

    // Variables to track the closest target
    bool bFoundHit = false;
    float ClosestDistSq = FMath::Square(Range + 10.f); 

    if (bHasOverlaps)
    {
        FVector ForwardVector = Direction.Vector();
        float ConeHalfAngleRad = FMath::DegreesToRadians(ConeHalfAngle);

        for (const FOverlapResult& Overlap : SphereOverlaps)
        {
            AActor* HitActor = Overlap.GetActor();
            if (!HitActor) continue;

            FVector TargetLoc = HitActor->GetActorLocation();
            FVector DirToTarget = (TargetLoc - Start).GetSafeNormal();

            float Dot = FVector::DotProduct(ForwardVector, DirToTarget);
            float AngleRad = FMath::Acos(Dot);

            if (AngleRad <= ConeHalfAngleRad)
            {
                FHitResult LineHit;
                World->LineTraceSingleByChannel(LineHit, Start, TargetLoc, CollisionChannel, Params);

                if (LineHit.GetActor() == HitActor)
                {
                    // Calculate the distance squared (cheaper than regular distance)
                    float DistSq = FVector::DistSquared(Start, LineHit.ImpactPoint);
                    
                    // If this target is closer than our previous best, update our winner!
                    if (DistSq < ClosestDistSq)
                    {
                        ClosestDistSq = DistSq;
                        OutHit = LineHit;
                        bFoundHit = true;
                    }
                }
            }
        }
    }

#if ENABLE_DRAW_DEBUG
    if (DrawDebugType != EDrawDebugTrace::None)
    {
        bool bPersistent = DrawDebugType == EDrawDebugTrace::Persistent;
        DrawDebugCone(World, Start, Direction.Vector(), Range, FMath::DegreesToRadians(ConeHalfAngle), FMath::DegreesToRadians(ConeHalfAngle), 32, TraceColor.ToFColor(true), bPersistent, DrawTime);

        // Only draw the single winning trace line!
        if (bFoundHit)
        {
            DrawDebugLineTraceSingle(World, OutHit.TraceStart, OutHit.ImpactPoint, DrawDebugType, true, OutHit, TraceHitColor, TraceHitColor, DrawTime);
        }
    }
#endif // ENABLE_DRAW_DEBUG

    return bFoundHit;
}
