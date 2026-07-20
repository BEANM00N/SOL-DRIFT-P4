#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "QuestSubsystem.generated.h"

// Global event signature
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGlobalGameplayEvent, FGameplayTag, EventTag, int32, Amount);

// 1. Added Blueprintable and BlueprintType so this can be a Blueprint parent
UCLASS(Blueprintable, BlueprintType)
class SOLDRIFT_API UQuestSubsystem : public UGameInstanceSubsystem
{
    GENERATED_BODY()

public:
    // Called once when the game boots up
    virtual void Initialize(FSubsystemCollectionBase& Collection) override;

    // Called when the game shuts down
    virtual void Deinitialize() override;

    // 2. The event that will trigger your Blueprint startup logic
    UFUNCTION(BlueprintImplementableEvent, Category = "Quests")
    void ReceiveInitialize();

    // 3. The event that will trigger your Blueprint shutdown/cleanup logic
    UFUNCTION(BlueprintImplementableEvent, Category = "Quests")
    void ReceiveDeinitialize();

    // Global dispatcher exposed to Blueprints
    UPROPERTY(BlueprintAssignable, Category = "Quests")
    FOnGlobalGameplayEvent OnGlobalGameplayEvent;

    // A helper function so Actors can send events
    UFUNCTION(BlueprintCallable, Category = "Quests")
    void BroadcastGameplayEvent(FGameplayTag EventTag, int32 Amount);

    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Quest System")
    void StartQuestStep(FGameplayTag StartingTag);
};