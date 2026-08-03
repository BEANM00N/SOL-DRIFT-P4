#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PawnMovementComponent.h"
#include "VTOLMovementComponent.generated.h"

UCLASS(ClassGroup = (Movement), meta = (BlueprintSpawnableComponent))
class SOLDRIFT_API UVTOLMovementComponent : public UPawnMovementComponent
{
	GENERATED_BODY()

public:
	UVTOLMovementComponent();

	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// Your VTOL Tuning Variables
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTOL Movement")
	float MaxSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTOL Movement")
	float AccelerationRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VTOL Movement")
	int32 MaxSimulationIterations;
};