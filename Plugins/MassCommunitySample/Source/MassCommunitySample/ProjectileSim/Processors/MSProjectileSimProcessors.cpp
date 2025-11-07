// Fill out your copyright notice in the Description page of Project Settings.


#include "MSProjectileSimProcessors.h"

#include "MassCommonFragments.h"
#include "MassCommonTypes.h"
#include "MassCommonUtils.h"
#include "MassExecutionContext.h"
#include "MassMovementFragments.h"
#include "MassSignalSubsystem.h"
#include "Common/Fragments/MSFragments.h"
#include "Experimental/Physics/MSMassCollision.h"
#include "ProjectileSim/Fragments/MSProjectileFragments.h"
// Make sure you include the new Radius Fragment header

#include UE_INLINE_GENERATED_CPP_BY_NAME(MSProjectileSimProcessors)


void UMSProjectileSimProcessors::InitializeInternal(UObject& Owner, const TSharedRef<FMassEntityManager>& Manager)
{
    Super::InitializeInternal(Owner, Manager);
}


UMSProjectileSimProcessors::UMSProjectileSimProcessors()
{
    ExecutionOrder.ExecuteAfter.Add(UE::Mass::ProcessorGroupNames::Movement);

    ExecutionFlags = (int32)(EProcessorExecutionFlags::All);
}

void UMSProjectileSimProcessors::ConfigureQueries(const TSharedRef<FMassEntityManager>& EntityManager)
{
    LineTraceFromPreviousPosition.Initialize(EntityManager);
    LineTraceFromPreviousPosition.AddRequirement<FMSCollisionIgnoredActorsFragment>(EMassFragmentAccess::ReadWrite, EMassFragmentPresence::Optional);
    // --- ADD THIS NEW REQUIREMENT ---
    LineTraceFromPreviousPosition.AddRequirement<FMSProjectileRadiusFragment>(EMassFragmentAccess::ReadOnly, EMassFragmentPresence::Optional);

    LineTraceFromPreviousPosition.AddRequirement<FMassVelocityFragment>(EMassFragmentAccess::ReadOnly);
    LineTraceFromPreviousPosition.AddRequirement<FMSCollisionChannelFragment>(EMassFragmentAccess::ReadOnly);
    LineTraceFromPreviousPosition.AddRequirement<FTransformFragment>(EMassFragmentAccess::ReadOnly);
    LineTraceFromPreviousPosition.AddTagRequirement<FMSProjectileTag>(EMassFragmentPresence::All);
    LineTraceFromPreviousPosition.AddTagRequirement<FMSLineTraceTag>(EMassFragmentPresence::All);

    LineTraceFromPreviousPosition.RegisterWithProcessor(*this);

    ProcessorRequirements.AddSubsystemRequirement<UMassSignalSubsystem>(EMassFragmentAccess::ReadWrite);
}

void UMSProjectileSimProcessors::Execute(FMassEntityManager& EntityManager, FMassExecutionContext& Context)
{
    TQueue<FMassEntityHandle, EQueueMode::Mpsc> EntitiesThatHitSomething;
   std::atomic<int32> NumEntitiesThatHitSomething;    
    LineTraceFromPreviousPosition.ForEachEntityChunk( Context, [&](FMassExecutionContext& Context)
    {
       QUICK_SCOPE_CYCLE_COUNTER(STAT_MASS_LineTraceFromPreviousPosition);

       // --- GET THE NEW FRAGMENT VIEW ---
       const TConstArrayView<FMSProjectileRadiusFragment> RadiusFragments = Context.GetFragmentView<FMSProjectileRadiusFragment>();

       const TArrayView<FMSCollisionIgnoredActorsFragment> IgnoredActorsFragments = Context.GetMutableFragmentView<
          FMSCollisionIgnoredActorsFragment>();
       TConstArrayView<FMassVelocityFragment> Velocities = Context.GetFragmentView<FMassVelocityFragment>();
       TConstArrayView<FTransformFragment> Transforms = Context.GetFragmentView<FTransformFragment>();
       TConstArrayView<FMSCollisionChannelFragment> CollisionChannels = Context.GetFragmentView<FMSCollisionChannelFragment>();

       int32 NumEntities = Context.GetNumEntities();
       const float DeltaTime = Context.GetDeltaTimeSeconds();
       UWorld* World = GetWorld();

       FCollisionQueryParams QueryParams;
       for (int32 i = 0; i < NumEntities; ++i)
       {
          FHitResult HitResult;

          const FVector CurrentLocation = Transforms[i].GetTransform().GetTranslation();
          const FVector Velocity = Velocities[i].Value;
          const FVector StartLocation = CurrentLocation - (Velocity * DeltaTime); // Calculate start pos once

          const TEnumAsByte<ECollisionChannel> CollisionChannel = CollisionChannels[i].Channel;

          QueryParams.ClearIgnoredActors();

          if (IgnoredActorsFragments.Num() > 0)
          {
             for (const AActor* IgnoredActor : IgnoredActorsFragments[i].IgnoredActors) {
                QueryParams.AddIgnoredActor(IgnoredActor);
             }
          }

          // --- THIS IS THE NEW COLLISION LOGIC ---

          // Get the radius. If the optional fragment doesn't exist, this will be 0.
          const float Radius = (RadiusFragments.Num() > 0) ? RadiusFragments[i].Radius : 0.0f;
          
          bool bHit = false;

          if (Radius > KINDA_SMALL_NUMBER)
          {
             // Use Sphere Sweep
             FCollisionShape SphereShape = FCollisionShape::MakeSphere(Radius);
             bHit = World->SweepSingleByChannel(HitResult,
                                                StartLocation,
                                                CurrentLocation,
                                                FQuat::Identity, // Projectiles rarely need rotational sweep
                                                CollisionChannel,
                                                SphereShape,
                                                QueryParams);
          }
          else
          {
             // Use Line Trace (your original code)
             bHit = World->LineTraceSingleByChannel(HitResult,
                                                    StartLocation,
                                                    CurrentLocation,
                                                    CollisionChannel,
                                                    QueryParams);
          }
          
          // --- END NEW COLLISION LOGIC ---

          if (bHit)
          {
             FMassEntityHandle Entity = Context.GetEntity(i);

             EntitiesThatHitSomething.Enqueue(Entity);
             ++NumEntitiesThatHitSomething;
             Context.Defer().PushCommand<FMassCommandAddFragmentInstances>(Entity, FMSHitResultFragment(HitResult));
          }
       }
    });


    if (NumEntitiesThatHitSomething > 0)
    {
       TArray<FMassEntityHandle> Entities = UE::Mass::Utils::EntityQueueToArray(EntitiesThatHitSomething, NumEntitiesThatHitSomething);

       Context.GetMutableSubsystem<UMassSignalSubsystem>()->SignalEntities(MassSample::Signals::OnEntityHitSomething, Entities);
    }
}