// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "MassEntityView.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MSBPFunctionLibrary.generated.h"

USTRUCT(BlueprintType)
struct FMSEntityViewBPWrapper
{
	GENERATED_BODY()

	FMSEntityViewBPWrapper() = default;

	FMSEntityViewBPWrapper(const FMassArchetypeHandle& Archetype, FMassEntityHandle EntityHandle)
	{
		EntityView = FMassEntityView(Archetype, EntityHandle);
	}
	
	FMSEntityViewBPWrapper(const FMassEntityManager& Manager, FMassEntityHandle EntityHandle)
	{
		EntityView = FMassEntityView(Manager,EntityHandle);
	}

	
	FMassEntityView EntityView;

};


// An entity handle only BP wrapper.
USTRUCT(BlueprintType)
struct FMSEntityHandleBPWrapper
{
	GENERATED_BODY()
	FMassEntityHandle EntityHandle;
};

UENUM()
enum class EReturnSuccess : uint8
{
	Success,
	Failure
};



UCLASS()
class MASSCOMMUNITYSAMPLE_API UMSBPFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	// Check if a given entity view has a fragment
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mass", meta=(WorldContext = "WorldContextObject"))
	static bool EntityHasFragment(FMSEntityViewBPWrapper Entity, UPARAM(meta=(MetaStruct="/Script/MassEntity.MassFragment")) UScriptStruct* Fragment, UObject* WorldContextObject);

	// Check if a given entity view has a tag
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mass", meta=(WorldContext = "WorldContextObject"))
	static bool EntityHasTag(FMSEntityViewBPWrapper Entity, UPARAM(meta=(MetaStruct="/Script/MassEntity.MassTag")) UScriptStruct* Tag, UObject* WorldContextObject);
	
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mass", meta=(WorldContext = "WorldContextObject", ExpandBoolAsExecs = "ReturnValue"))
	static bool IsEntityValid(FMSEntityViewBPWrapper Entity, UObject* WorldContextObject);
	
	UFUNCTION(BlueprintCallable, Category = "Mass", meta = (WorldContext = "WorldContextObject",ExpandEnumAsExecs = "ReturnBranch"))
	static FMSEntityViewBPWrapper SpawnEntityFromEntityConfig(UMassEntityConfigAsset* MassEntityConfig,
															 const UObject* WorldContextObject,EReturnSuccess& ReturnBranch);

	UFUNCTION(BlueprintCallable, Category = "Mass", meta = (WorldContext = "WorldContextObject", ExpandEnumAsExecs = "ReturnBranch"))
	static void SpawnMassEntityBatchWithTransformsAndVelocity(
		const UObject* WorldContextObject,
		UMassEntityConfigAsset* MassEntityConfig,
		const TArray<FTransform>& SpawnTransforms,
		float VelocityMultiplier,
		EReturnSuccess& ReturnBranch
	);

	UFUNCTION(BlueprintPure, Category = "Mass|Spawning", meta = (DisplayName = "Generate Fibonacci Sphere Transforms"))
	static TArray<FTransform> GenerateFibonacciSphereTransforms(const FVector& Origin, int32 NumPoints, float Radius);

	UFUNCTION(BlueprintCallable, Category = "Mass")
	static void SetEntityTransform(const FMSEntityViewBPWrapper EntityHandle,const FTransform Transform);

	UFUNCTION(BlueprintCallable, Category = "Mass", meta = (WorldContext = "WorldContextObject"))
	static FTransform GetEntityTransform(FMSEntityViewBPWrapper EntityHandle, const UObject* WorldContextObject);


	UFUNCTION(BlueprintCallable, Category = "Mass")
	static void SetEntityVelocity(FMSEntityViewBPWrapper EntityHandle, FVector Velocity);

	UFUNCTION(BlueprintCallable, Category = "Mass", meta = (WorldContext = "WorldContextObject"))
	static FVector GetEntityVelocity(FMSEntityViewBPWrapper EntityHandle, const UObject* WorldContextObject);

	UFUNCTION(BlueprintCallable, Category = "Mass")
	static void SetEntityForce(const FMSEntityViewBPWrapper EntityHandle, const FVector Force);
	
	UFUNCTION(BlueprintCallable, Category = "Mass", meta = (WorldContext = "WorldContextObject"))
	static void DestroyEntity(const FMSEntityViewBPWrapper EntityHandle, const UObject* WorldContextObject);


	UFUNCTION(BlueprintCallable, Category = "Mass", meta = (WorldContext = "WorldContextObject",ExpandBoolAsExecs = "ReturnValue"))
	static bool GetMassAgentEntity(FMSEntityViewBPWrapper& OutEntity, UMassAgentComponent* Agent, const UObject* WorldContextObject);

	
	UFUNCTION(BlueprintCallable, Category = "Mass", meta = (WorldContext = "WorldContextObject"))
	static void FindOctreeEntitiesInBox(const FVector Center,const FVector Extents, TArray<FMSEntityViewBPWrapper>& Entities ,const UObject* WorldContextObject);

	UFUNCTION(BlueprintCallable, Category = "Mass", meta = (WorldContext = "WorldContextObject",ExpandEnumAsExecs = "ReturnBranch"))
	static void FindClosestHashGridEntityInBox(const FVector Center,const FVector Extents, FMSEntityViewBPWrapper& Entity, const UObject* WorldContextObject,EReturnSuccess& ReturnBranch);
	
	UFUNCTION(BlueprintCallable, Category = "Mass", meta=(WorldContext = "WorldContextObject"))
	static void SetEntityFragment(FMSEntityViewBPWrapper Entity, FInstancedStruct Fragment,const UObject* WorldContextObject);
	
	UFUNCTION(BlueprintCallable, Category = "Mass", meta=(WorldContext = "WorldContextObject",ExpandEnumAsExecs = "ReturnBranch"))
	static FInstancedStruct GetEntityFragmentByType(FMSEntityViewBPWrapper Entity, FInstancedStruct Fragment,const UObject* WorldContextObject, EReturnSuccess& ReturnBranch);

	UFUNCTION(BlueprintPure)
	static void BreakIndexToInt(const FMSEntityViewBPWrapper& InValue, int32& Index)
	{
		Index = InValue.EntityView.GetEntity().Index;
	};

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mass" , meta=(CustomStructureParam, DeprecatedFunction))
	static bool EntityHasFragment_OLD(FMSEntityViewBPWrapper Entity, FInstancedStruct Fragment);
	
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mass",meta=(WorldContext = "WorldContextObject", DeprecatedFunction))
	static bool EntityHasTag_OLD(FMSEntityViewBPWrapper Entity, FInstancedStruct Fragment, UObject* WorldContextObject);

	UFUNCTION(BlueprintPure, Category = "Mass|Utils", meta = (WorldContext = "WorldContextObject"))
	static int32 GetMassEntityCount(const UObject* WorldContextObject);
	};
