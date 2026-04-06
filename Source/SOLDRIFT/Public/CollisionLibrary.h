#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "Kismet/KismetSystemLibrary.h"
#include "CollisionLibrary.generated.h"

UCLASS()
class SOLDRIFT_API UCollisionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	/**
	 * Performs a highly optimized Cone Trace by using a Sphere Overlap, Math filtering, and Line of Sight checking.
	 * @param Start The origin of the cone (e.g. Enemy's Eye Location)
	 * @param Direction The facing direction of the cone
	 * @param Range The max distance of the cone
	 * @param ConeHalfAngle The half-angle of the cone in degrees (e.g. 45 for a 90-degree FOV)
	 */
	UFUNCTION(BlueprintCallable, Category = "Collision", meta = (WorldContext = "WorldContextObject", AutoCreateRefTerm = "ActorsToIgnore", DisplayName = "Cone Trace Multi By Channel", AdvancedDisplay = "DrawDebugType, TraceColor, TraceHitColor, DrawTime"))
	static bool ConeTraceMultiByChannel(
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
	   EDrawDebugTrace::Type DrawDebugType = EDrawDebugTrace::None,
	   FLinearColor TraceColor = FLinearColor::Red,
	   FLinearColor TraceHitColor = FLinearColor::Green,
	   float DrawTime = 5.0f
	   );

	   UFUNCTION(BlueprintCallable, Category = "Collision", meta = (WorldContext = "WorldContextObject", AutoCreateRefTerm = "ActorsToIgnore", DisplayName = "Cone Trace Single By Channel", AdvancedDisplay = "DrawDebugType, TraceColor, TraceHitColor, DrawTime"))
	   static bool ConeTraceSingleByChannel(
		  const UObject* WorldContextObject,
		  const FVector Start,
		  const FRotator Direction,
		  float Range,
		  float ConeHalfAngle,
		  ETraceTypeQuery TraceChannel,
		  bool bTraceComplex,
		  const TArray<AActor*>& ActorsToIgnore,
		  bool bIgnoreSelf,
		  FHitResult& OutHit, // <--- Notice this is a single FHitResult, not a TArray!
		  EDrawDebugTrace::Type DrawDebugType = EDrawDebugTrace::None,
		  FLinearColor TraceColor = FLinearColor::Red,
		  FLinearColor TraceHitColor = FLinearColor::Green,
		  float DrawTime = 5.0f
	);
};
/**
	 * Performs a Cone Trace and returns ONLY the single closest valid hit.
	 */

