// Fill out your copyright notice in the Description page of Project Settings.

#include "MSBPFunctionLibrary.h"  
#include "MassAgentComponent.h"  
#include "MassCommonFragments.h"  
#include "MassSpawnLocationProcessor.h"  
#include "MassEntitySubsystem.h"  
#include "MassEntityManager.h"  
#include "MassMovementFragments.h"  
#include "MassSpawnerSubsystem.h"  
#include "MSSubsystem.h"  
#include "MassArchetypeTypes.h"          
#include "MassMovementFragments.h"  
#include "MassSpawnLocationProcessor.h"  
#include "MassMovementTypes.h"  
#include "MassEntityTypes.h"  
#include "VectorTypes.h"  
#include "Engine/World.h"  
#include "Kismet/BlueprintFunctionLibrary.h"  
#include "CoreMinimal.h"  
#include "ProjectileSim/Fragments/MSProjectileFragments.h"  
#include "SpacedGridLocationsSpawnDataGenerator.h"  
#include "Common/Fragments/MSOctreeFragments.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(MSBPFunctionLibrary)


bool UMSBPFunctionLibrary::EntityHasFragment_OLD(FMSEntityViewBPWrapper Entity, FInstancedStruct Fragment)
{
	if (Fragment.IsValid() && Fragment.GetScriptStruct()->IsChildOf(FMassFragment::StaticStruct()))
	{
		return Entity.EntityView.GetFragmentDataStruct(Fragment.GetScriptStruct()).IsValid();
	}

	return false;
}

bool UMSBPFunctionLibrary::EntityHasTag_OLD(FMSEntityViewBPWrapper Entity, FInstancedStruct Tag, UObject* WorldContextObject)
{
	if (Tag.IsValid() && Tag.GetScriptStruct()->IsChildOf(FMassTag::StaticStruct()))
	{
		return Entity.EntityView.HasTag(*Tag.GetScriptStruct());
	}

	return false;
}

bool UMSBPFunctionLibrary::EntityHasFragment(FMSEntityViewBPWrapper Entity, UScriptStruct* Fragment, UObject* WorldContextObject)
{
	if (!Fragment)
	{
		return false;
	}

	if (Entity.EntityView.IsValid())
	{
		if (Entity.EntityView.GetFragmentDataStruct(Fragment).IsValid())
		{
			return true;
		}
	}
	
	return false;
}

bool UMSBPFunctionLibrary::EntityHasTag(FMSEntityViewBPWrapper Entity, UScriptStruct* Tag, UObject* WorldContextObject)
{
	if (!Tag)
	{
		return false;
	}

	if (Entity.EntityView.IsValid())
	{
		if (Entity.EntityView.HasTag(*Tag))
		{
			return true;
		}
	}
	
	return false;
}

bool UMSBPFunctionLibrary::IsEntityValid(FMSEntityViewBPWrapper Entity, UObject* WorldContextObject)
{
	if (UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
	{
		if (UMassEntitySubsystem* MassSubsystem = World->GetSubsystem<UMassEntitySubsystem>())
		{
			const FMassEntityManager& EntityManager = MassSubsystem->GetEntityManager();
			return EntityManager.IsEntityValid(Entity.EntityView.GetEntity()) && Entity.EntityView.IsValid();
		}
	}
	
	return false;
}

FMSEntityViewBPWrapper UMSBPFunctionLibrary::SpawnEntityFromEntityConfig(UMassEntityConfigAsset* MassEntityConfig, const UObject* WorldContextObject,
                                                                         EReturnSuccess& ReturnBranch)
{
	if (!MassEntityConfig)
	{
		ReturnBranch = EReturnSuccess::Failure;
		return FMSEntityViewBPWrapper();
	}
	
	const FMassEntityTemplate& EntityTemplate = MassEntityConfig->GetConfig().GetOrCreateEntityTemplate(*WorldContextObject->GetWorld());

	FMassEntityManager& EntityManager = WorldContextObject->GetWorld()->GetSubsystem<UMassEntitySubsystem>()->GetMutableEntityManager();
	auto SpawnerSubsystem = WorldContextObject->GetWorld()->GetSubsystem<UMassSpawnerSubsystem>();

	TArray<FMassEntityHandle> Entities;
	SpawnerSubsystem->SpawnEntities(EntityTemplate.GetTemplateID(), 1, FStructView(), TSubclassOf<UMassProcessor>(), Entities);

	FMSEntityViewBPWrapper NewEntityWrapper;
	NewEntityWrapper.EntityView = FMassEntityView(EntityManager, Entities[0]);

	ReturnBranch = EReturnSuccess::Success;

	return NewEntityWrapper;
}


void UMSBPFunctionLibrary::SetEntityTransform(const FMSEntityViewBPWrapper EntityHandle, const FTransform Transform)
{
	if (!EntityHandle.EntityView.IsValid())
	{
		UE_LOG(LogTemp, Error, TEXT("Passed in an invalid Entity to SetEntityTransform"));
		return;
	}


	if (FTransformFragment* TransformFragment = EntityHandle.EntityView.GetFragmentDataPtr<FTransformFragment>())
	{
		TransformFragment->SetTransform(Transform);
	}
}


FTransform UMSBPFunctionLibrary::GetEntityTransform(const FMSEntityViewBPWrapper EntityHandle, const UObject* WorldContextObject)
{
	const FMassEntityManager& EntityManager = WorldContextObject->GetWorld()->GetSubsystem<UMassEntitySubsystem>()->GetEntityManager();


	if (!EntityHandle.EntityView.IsValid())
	{
		UE_LOG(LogTemp, Error, TEXT("Passed in an invalid Entity to GetEntityTransform"));
		return FTransform::Identity;
	}

	if (const FTransformFragment* TransformFragmentPtr = EntityManager.GetFragmentDataPtr<FTransformFragment>(EntityHandle.EntityView.GetEntity()))
	{
		return TransformFragmentPtr->GetTransform();
	}

	return FTransform();
}

void UMSBPFunctionLibrary::SetEntityVelocity(const FMSEntityViewBPWrapper EntityHandle, const FVector Velocity)
{
	if (!EntityHandle.EntityView.IsValid())
	{
		return;
	};

	if (auto MassFragmentPtr = EntityHandle.EntityView.GetFragmentDataPtr<FMassVelocityFragment>())
	{
		MassFragmentPtr->Value = Velocity;
	}
}

FVector UMSBPFunctionLibrary::GetEntityVelocity(const FMSEntityViewBPWrapper EntityHandle, const UObject* WorldContextObject)
{
	const FMassEntityManager& EntityManager = WorldContextObject->GetWorld()->GetSubsystem<UMassEntitySubsystem>()->GetEntityManager();

	if (!EntityHandle.EntityView.IsValid())
	{
		return FVector::ZeroVector;
	}

	if (const auto VelocityFragmentPtr = EntityManager.GetFragmentDataPtr<FMassVelocityFragment>(EntityHandle.EntityView.GetEntity()))
	{
		return VelocityFragmentPtr->Value;
	}

	return FVector::ZeroVector;
}

void UMSBPFunctionLibrary::SetEntityForce(const FMSEntityViewBPWrapper EntityHandle, const FVector Force)
{
	if (!EntityHandle.EntityView.IsValid())
	{
		return;
	};

	if (auto MassFragmentPtr = EntityHandle.EntityView.GetFragmentDataPtr<FMassForceFragment>())
	{
		MassFragmentPtr->Value = Force;
	}
}


///-----------------------------
void UMSBPFunctionLibrary::DestroyEntity(const FMSEntityViewBPWrapper EntityHandle, const UObject* WorldContextObject)
{
	UWorld* World = WorldContextObject ? WorldContextObject->GetWorld() : nullptr;
	if (!World)
	{
		UE_LOG(LogTemp, Warning, TEXT("UMSBPFunctionLibrary::DestroyEntity: World is NULL."));
		return;
	}

	UMassEntitySubsystem* EntitySubsystem = World->GetSubsystem<UMassEntitySubsystem>();
	if (!EntitySubsystem)
	{
		UE_LOG(LogTemp, Warning, TEXT("UMSBPFunctionLibrary::DestroyEntity: UMassEntitySubsystem is NULL."));
		return;
	}

	FMassEntityManager& EntityManager = EntitySubsystem->GetMutableEntityManager();
    
	// Get Struct Handle
	const FMassEntityHandle Entity = EntityHandle.EntityView.GetEntity();

	// Check if valid
	if (EntityHandle.EntityView.IsValid())
	{
		EntityManager.Defer().DestroyEntity(Entity);
	}
	else
	{
		EntityManager.ReleaseReservedEntity(Entity);
	}
}
////-------------------------------------

void UMSBPFunctionLibrary::SpawnMassEntityBatchWithTransformsAndVelocity(  
    const UObject* WorldContextObject,  
    UMassEntityConfigAsset* MassEntityConfig,  
    const TArray<FTransform>& SpawnTransforms,  
    float VelocityMultiplier,  
    EReturnSuccess& ReturnBranch  
)  
{  
    UWorld* World = WorldContextObject ? WorldContextObject->GetWorld() : nullptr;  
    const int32 Count = SpawnTransforms.Num();  
  
    if (!World || !MassEntityConfig || Count == 0)  
    {       ReturnBranch = EReturnSuccess::Failure;  
       return;  
    }  
    // Get both subsystems  
    UMassSpawnerSubsystem* SpawnerSubsystem = World->GetSubsystem<UMassSpawnerSubsystem>();  
    UMassEntitySubsystem* EntitySubsystem = World->GetSubsystem<UMassEntitySubsystem>();  
  
    if (!SpawnerSubsystem || !EntitySubsystem)  
    {       ReturnBranch = EReturnSuccess::Failure;  
       return;  
    }  
    FMassEntityManager& EntityManager = EntitySubsystem->GetMutableEntityManager();  
    const FMassEntityTemplate& EntityTemplate = MassEntityConfig->GetConfig().GetOrCreateEntityTemplate(*World);  
	
	FMassTransformsSpawnData TransformsData;  
    TransformsData.Transforms = SpawnTransforms;  
    FInstancedStruct SpawnDataStruct;  
    SpawnDataStruct.InitializeAs<FMassTransformsSpawnData>(TransformsData);  
  
    // This array will be filled by the spawner with the new entity handles  
    TArray<FMassEntityHandle> OutEntities;   
    
    SpawnerSubsystem->SpawnEntities(  
       EntityTemplate.GetTemplateID(),  
       Count,       FConstStructView(SpawnDataStruct),  
       UMassSpawnLocationProcessor::StaticClass(),  
       OutEntities    );  

    const FMassArchetypeCompositionDescriptor& CompositionDesc = EntityTemplate.GetCompositionDescriptor();  
  
    // Check if the composition contains the FMassVelocityFragment 
    if (!CompositionDesc.Contains<FMassVelocityFragment>())  
    {       UE_LOG(LogTemp, Warning, TEXT("SpawnMassEntityBatchWithTransformsAndVelocity: The EntityConfig '%s' does not have FMassVelocityFragment. Cannot set velocity."), *MassEntityConfig->GetName());  
       ReturnBranch = EReturnSuccess::Success;
       return;  
    }    
  
    for (int32 i = 0; i < OutEntities.Num(); ++i)  
    {       const FMassEntityHandle& Entity = OutEntities[i];  
       if (EntityManager.IsEntityValid(Entity))  
       {          // Calculate the velocity  
          const FVector Velocity = SpawnTransforms[i].GetRotation().GetForwardVector() * VelocityMultiplier;  
          // Create the fragment instance  
          FMassVelocityFragment NewVelocityFragment;  
          NewVelocityFragment.Value = Velocity;  
  
          // Push the command to set/overwrite the velocity fragment  
          EntityManager.Defer().PushCommand<FMassCommandAddFragmentInstances>(Entity, NewVelocityFragment);  
       }    }  
    ReturnBranch = EReturnSuccess::Success;  
}

TArray<FTransform> UMSBPFunctionLibrary::GenerateFibonacciSphereTransforms(const FVector& Origin, int32 NumPoints, float Radius)
{
	TArray<FTransform> OutTransforms;
	if (NumPoints <= 0)
	{
		return OutTransforms;
	}

	// Pre-allocate the array for performance
	OutTransforms.Reserve(NumPoints);

	// GOLDEN RATIO BABY
	const float GoldenAngle = 2.399963f; // PI * (3.0 - sqrt(5.0))

	// Handle the (NumPoints - 1) denominator, prevents divide-by-zero if NumPoints is 1
	const float Denominator = (float)FMath::Max(1, NumPoints - 1);

	for (int32 i = 0; i < NumPoints; ++i)
	{
		const float i_float = (float)i;

		// Calculate Y
		// Clamp to prevent floating point errors from causing Sqrt(negative number)
		const float y = FMath::Clamp(1.0f - (i_float / Denominator) * 2.0f, -1.0f, 1.0f);

		// Calculate the radius at this height
		const float radius_at_y = FMath::Sqrt(1.0f - (y * y));

		// Calculate the angle
		const float theta = i_float * GoldenAngle;

		// Calculate X and Z
		const float x = FMath::Cos(theta) * radius_at_y;
		const float z = FMath::Sin(theta) * radius_at_y;

		// Create the final transform
		const FVector Direction = FVector(x, y, z); // This is a unit vector
		const FVector Location = Origin + (Direction * Radius);
		const FRotator Rotation = Direction.ToOrientationRotator();

		// Add to array
		OutTransforms.Emplace(FTransform(Rotation, Location));
	}

	return OutTransforms;
}

TArray<FTransform> UMSBPFunctionLibrary::GenerateRingTransforms(const FVector& Origin, int32 NumPoints, float Radius)  
{  
	TArray<FTransform> OutTransforms;  
	if (NumPoints <= 0)  
	{       return OutTransforms;  
	}  
	OutTransforms.Reserve(NumPoints);  
  
	// The angle between each point in radians  
	const float AngleStep = UE_TWO_PI / (float)NumPoints;  
  
	for (int32 i = 0; i < NumPoints; ++i)  
	{       // Calculate the angle for this point  
		const float Theta = (float)i * AngleStep;  
  
		// Calculate X and Y on a unit circle  
		const float x = FMath::Cos(Theta);  
		const float y = FMath::Sin(Theta);  
  
		// Create the direction vector (Flat on Z)  
		const FVector Direction = FVector(x, y, 0.0f);  
		// Calculate final location  
		const FVector Location = Origin + (Direction * Radius);  
		// Face away from the center  
		const FRotator Rotation = Direction.ToOrientationRotator();  
  
		OutTransforms.Emplace(FTransform(Rotation, Location));  
	}  
	return OutTransforms;  
}

bool UMSBPFunctionLibrary::GetMassAgentEntity(FMSEntityViewBPWrapper& OutEntity, UMassAgentComponent* Agent, const UObject* WorldContextObject)
{
	const FMassEntityManager& EntityManager = WorldContextObject->GetWorld()->GetSubsystem<UMassEntitySubsystem>()->GetEntityManager();

	if (!Agent->IsEntityPendingCreation())
	{
		FMassEntityHandle EntityHandle = Agent->GetEntityHandle();
		OutEntity = FMSEntityViewBPWrapper(EntityManager, EntityHandle);
		return true;
	}
	return false;
}

int32 UMSBPFunctionLibrary::GetMassEntityCount(const UObject* WorldContextObject)
{
	UWorld* World = WorldContextObject ? WorldContextObject->GetWorld() : nullptr;
	if (World)
	{
		if (const UMassEntitySubsystem* EntitySubsystem = World->GetSubsystem<UMassEntitySubsystem>())
		{
			// This is the correct function
			return EntitySubsystem->GetEntityManager().DebugGetEntityCount();
		}
	}
	return 0;
}

void UMSBPFunctionLibrary::FindOctreeEntitiesInBox(const FVector Center, const FVector Extents, TArray<FMSEntityViewBPWrapper>& Entities,
                                                   const UObject* WorldContextObject)
{
	QUICK_SCOPE_CYCLE_COUNTER(FindHashGridEntitiesInSphere);

	if (UMSSubsystem* MassSampleSystem = WorldContextObject->GetWorld()->GetSubsystem<UMSSubsystem>())
	{
		const FMassEntityManager& EntityManager = WorldContextObject->GetWorld()->GetSubsystem<UMassEntitySubsystem>()->GetEntityManager();
		TArray<FMassEntityHandle> EntitiesFound;


		MassSampleSystem->MassSampleOctree2.FindElementsWithBoundsTest(FBoxCenterAndExtent(Center, Extents), [&](const FMSEntityOctreeElement& OctreeElement)
		{
			EntitiesFound.Add(OctreeElement.EntityHandle);
		});

		for (auto EntityFound : EntitiesFound)
		{
			if (EntityManager.IsEntityValid(EntityFound))
			{
				Entities.Add(FMSEntityViewBPWrapper(EntityManager, EntityFound));
			}
		}
	}
}

void UMSBPFunctionLibrary::FindClosestHashGridEntityInBox(const FVector Center, const FVector Extents, FMSEntityViewBPWrapper& Entity,
                                                          const UObject* WorldContextObject, EReturnSuccess& ReturnBranch)
{
	QUICK_SCOPE_CYCLE_COUNTER(FindCloestHashGridEntityInSphere);

	if (auto MassSampleSystem = WorldContextObject->GetWorld()->GetSubsystem<UMSSubsystem>())
	{
		double ShortestDistance = MAX_dbl;
		FMassEntityHandle EntityHandle;
		MassSampleSystem->MassSampleOctree2.FindElementsWithBoundsTest(FBoxCenterAndExtent(Center, Extents), [&](const FMSEntityOctreeElement& OctreeElement)
		{
			double Distance = UE::Geometry::DistanceSquared(FVector(OctreeElement.Bounds.Center), Center);

			if (Distance < ShortestDistance)
			{
				EntityHandle = OctreeElement.EntityHandle;
				ShortestDistance = Distance;
			}
		});
		const FMassEntityManager& EntityManager = WorldContextObject->GetWorld()->GetSubsystem<UMassEntitySubsystem>()->GetEntityManager();

		if (EntityHandle.IsValid() && ShortestDistance != MAX_dbl)
		{
			Entity = FMSEntityViewBPWrapper(EntityManager, EntityHandle);

			ReturnBranch = EReturnSuccess::Success;
		}
		else
		{
			ReturnBranch = EReturnSuccess::Failure;
		}
	}
}


void UMSBPFunctionLibrary::SetEntityFragment(FMSEntityViewBPWrapper Entity, FInstancedStruct Fragment, const UObject* WorldContextObject)
{
	auto& EntityManager = WorldContextObject->GetWorld()->GetSubsystem<UMassEntitySubsystem>()->GetMutableEntityManager();

	if (!Entity.EntityView.GetEntity().IsValid())
	{
		UE_LOG(LogBlueprintUserMessages, Error, TEXT("Passed in an invalid Entity"));
		return;
	}
	if (!Fragment.IsValid())
	{
		UE_LOG(LogBlueprintUserMessages, Error, TEXT("Passed in an invalid FInstancedStuct"));
		return;
	}

	if (!Fragment.GetScriptStruct()->IsChildOf(FMassFragment::StaticStruct()))
	{
		UE_LOG(LogBlueprintUserMessages, Error, TEXT("Passed in a non fragment type to GetEntityFragmentByType: '%s'."),
		       *Fragment.GetScriptStruct()->GetName());
		return;
	}

	FStructView StructView = EntityManager.GetFragmentDataStruct(Entity.EntityView.GetEntity(), Fragment.GetScriptStruct());

	// If it's not present just add it through the manager
	if (!StructView.IsValid())
	{
		EntityManager.AddFragmentInstanceListToEntity(Entity.EntityView.GetEntity(), {Fragment});
	}
	else
	{
#if ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION < 3
		auto Memory = StructView.GetMutableMemory();
		FMemory::Memcpy(Memory,Fragment.GetMutableMemory(),Fragment.GetScriptStruct()->GetStructureSize());
#else
		uint8* Memory = StructView.GetMemory();
		FMemory::Memcpy(Memory, Fragment.GetMutableMemory(), Fragment.GetScriptStruct()->GetStructureSize());
#endif
	}
}

FInstancedStruct UMSBPFunctionLibrary::GetEntityFragmentByType(FMSEntityViewBPWrapper Entity, FInstancedStruct Fragment,
                                                               const UObject* WorldContextObject, EReturnSuccess& ReturnBranch)
{
	ReturnBranch = EReturnSuccess::Failure;

	const FMassEntityManager& EntityManager = WorldContextObject->GetWorld()->GetSubsystem<UMassEntitySubsystem>()->GetEntityManager();

	if (!Entity.EntityView.GetEntity().IsValid())
	{
		UE_LOG(LogBlueprintUserMessages, Error, TEXT("Passed in an invalid Entity"));
		return FInstancedStruct();
	}
	if (!Fragment.IsValid())
	{
		UE_LOG(LogBlueprintUserMessages, Error, TEXT("Passed in an invalid FInstancedStuct"));
		return FInstancedStruct();
	}

	if (!Fragment.GetScriptStruct()->IsChildOf(FMassFragment::StaticStruct()))
	{
		UE_LOG(LogBlueprintUserMessages, Error, TEXT("Passed in a non fragment type to GetEntityFragmentByType: '%s'."),
		       *Fragment.GetScriptStruct()->GetName());
		return FInstancedStruct();
	}

	FStructView structview = EntityManager.GetFragmentDataStruct(Entity.EntityView.GetEntity(), Fragment.GetScriptStruct());

	if (structview.IsValid())
	{
		ReturnBranch = EReturnSuccess::Success;
		return FInstancedStruct(structview);
	}

	return FInstancedStruct();
}
