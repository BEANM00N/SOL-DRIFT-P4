#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CPathNode.h"
#include "EnemyPathingLibrary.generated.h"

class APawn;

UCLASS()
class SOLDRIFT_API UEnemyPathingLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintCallable, Category = "Pathfinding Optimization")
	static int32 GetNextOptimalNode(APawn* PathingPawn, const TArray<FCPathNode>& PathBuffer, int32 StartIndex, int32 SmoothingPasses);
};