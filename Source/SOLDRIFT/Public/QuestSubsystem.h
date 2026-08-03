#pragma once

#include "CoreMinimal.h"
#include "flecs.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "Engine/DataTable.h"
#include "QuestSubsystem.generated.h"

// Event Dispathcers
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQuestStepStarted, FGameplayTag, QuestTag);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGlobalQuestEvent, FGameplayTag, EventTag, int32, Amount);

USTRUCT(BlueprintType)
struct FRewardStruct
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest Reward")
	UPrimaryDataAsset* Item;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest Reward")
	int32 Amount;
};

UENUM(BlueprintType)
enum class EObjectiveType : uint8
{
	Interact UMETA(DisplayName = "Interact"),
	Kill UMETA(DisplayName = "Kill"),
	Collect UMETA(DisplayName = "Collect"),
	};

USTRUCT(BlueprintType)
struct FQuestDatabase : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest Data")
	FText StepDescription;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest Data")
	EObjectiveType ObjectiveType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest Data")
	FGameplayTag CurrentStepTag;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest Data")
	FGameplayTag TargetTag;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest Data")
	int32 RequiredAmount;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest Data")
	FGameplayTag NextStepTag;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest Data")
	FGameplayTag QuestLineTag;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest Data")
	TArray<FRewardStruct> Rewards;
	
};

USTRUCT(BlueprintType)
struct FActiveQuestTracker
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest Data")
	FGameplayTag ActiveQuestTag;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest Data")
	int32 CurrentAmount;
};

UCLASS()

class UQuestSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Quests|Active")
	TArray<FActiveQuestTracker> ActiveQuests;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Quests|Active")
	FGameplayTagContainer CompletedQuests;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Quests|Active")
	UDataTable* QuestDataTableAsset;

	UFUNCTION(BlueprintCallable, Category = "Quests")
	void StartQuestStep(FGameplayTag StartingTag);

	UFUNCTION(BlueprintCallable, Category = "Quests")
	void GlobalQuestEvent(FGameplayTag EventTag,int32 Amount);

	UFUNCTION(BlueprintCallable, Category = "Quests|Setup")
	void InitializeQuestSystem(UDataTable* InDataTable);
	
	// Event Dispatchers
	UPROPERTY(BlueprintAssignable, Category = "Quests|Events")
	FOnQuestStepStarted OnQuestStepStarted;

	UPROPERTY(BlueprintAssignable, Category = "Quests|Events")
	FOnGlobalQuestEvent OnGlobalQuestEvent;
	
};
