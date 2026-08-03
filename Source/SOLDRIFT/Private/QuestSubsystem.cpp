#include "QuestSubsystem.h"

void UQuestSubsystem::StartQuestStep(FGameplayTag StartingTag)
{
    // NEW TRIPWIRE
    UE_LOG(LogTemp, Warning, TEXT("--- ATTEMPTING TO START NEXT QUEST STEP: %s ---"), *StartingTag.ToString());

    FActiveQuestTracker NewQuest;
    NewQuest.ActiveQuestTag = StartingTag;
    NewQuest.CurrentAmount = 0;

    ActiveQuests.Add(NewQuest);

    // Broadcast to any listeners!
    OnQuestStepStarted.Broadcast(StartingTag);
}

void UQuestSubsystem::InitializeQuestSystem(UDataTable* InDataTable)
{
    // Save the provided table to our subsystem's internal pointer
    if (InDataTable != nullptr)
    {
        QuestDataTableAsset = InDataTable;
        UE_LOG(LogTemp, Warning, TEXT("Quest System Initialised!"));
    }
}

void UQuestSubsystem::GlobalQuestEvent(FGameplayTag EventTag, int32 Amount)
{
    // TRIPWIRE 1: Is the function even being called?
    UE_LOG(LogTemp, Warning, TEXT("--- GLOBAL QUEST EVENT FIRED! EventTag: %s | Amount: %d ---"), *EventTag.ToString(), Amount);

    // Broadcast immediately so the UI knows an event happened
    OnGlobalQuestEvent.Broadcast(EventTag, Amount);

    if (QuestDataTableAsset == nullptr)
    {
        UE_LOG(LogTemp, Error, TEXT("QuestSubsystem: Data Table Asset is missing!"));
        return; 
    }

    // --- NEW DEBUG STATE LOGGING ---
    UE_LOG(LogTemp, Warning, TEXT("--- CURRENT STATE DUMP ---"));
    UE_LOG(LogTemp, Warning, TEXT("Active Quests Count: %d"), ActiveQuests.Num());
    
    // Print every active quest and its current progress
    for (const FActiveQuestTracker& Tracker : ActiveQuests)
    {
        UE_LOG(LogTemp, Warning, TEXT("   -> Active: %s (Progress: %d)"), *Tracker.ActiveQuestTag.ToString(), Tracker.CurrentAmount);
    }
    
    // Print all completed quest tags
    UE_LOG(LogTemp, Warning, TEXT("Completed Quests: [%s]"), *CompletedQuests.ToStringSimple());
    UE_LOG(LogTemp, Warning, TEXT("--------------------------"));


    // THE REVERSE LOOP: Counting backwards safely allows us to use Array_Remove
    for (int32 i = ActiveQuests.Num() - 1; i >= 0; --i)
    {
        // Get our reference using the current index (i)
        FActiveQuestTracker& ActiveQuest = ActiveQuests[i];
        
        FName RowName = ActiveQuest.ActiveQuestTag.GetTagName();
        
        UE_LOG(LogTemp, Warning, TEXT("Checking Active Quest: %s"), *RowName.ToString());

        FQuestDatabase* QuestRow = QuestDataTableAsset->FindRow<FQuestDatabase>(RowName, TEXT("QuestEvent Lookup"));

        if (QuestRow != nullptr)
        {
            // TRIPWIRE 3: Do the tags match?
            UE_LOG(LogTemp, Warning, TEXT("Data Table Row Found! Comparing TargetTag [%s] vs EventTag [%s]"), *QuestRow->TargetTag.ToString(), *EventTag.ToString());

            if (QuestRow->TargetTag == EventTag)
            {
                ActiveQuest.CurrentAmount += Amount;
                UE_LOG(LogTemp, Warning, TEXT("Match! New Amount: %d / %d"), ActiveQuest.CurrentAmount, QuestRow->RequiredAmount);

                // Did we reach the required amount?
                if (ActiveQuest.CurrentAmount >= QuestRow->RequiredAmount)
                {
                    // 1. Grant Rewards
                    if (QuestRow->Rewards.Num() > 0)
                    {
                        UE_LOG(LogTemp, Warning, TEXT("GRANT REWARDS"));
                    }

                    // 2 & 3. Add to Completed Quests (SMART CHECK) and Start Next Step
                    if (QuestRow->NextStepTag.IsValid())
                    {
                        // There is a next step! Only mark this specific part as complete.
                        CompletedQuests.AddTag(ActiveQuest.ActiveQuestTag);
                        
                        // Start the Next Step
                        StartQuestStep(QuestRow->NextStepTag);
                    }
                    else
                    {
                        // There is NO next step. The entire questline is finished!
                        CompletedQuests.AddTag(QuestRow->QuestLineTag);
                    }

                    // 4. Print the removal message
                    UE_LOG(LogTemp, Warning, TEXT("Removing: %s"), *ActiveQuest.ActiveQuestTag.ToString());

                    // 5. Remove from Active Quests array
                    ActiveQuests.RemoveAt(i);
                }
            }
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("Could not find row in Data Table for RowName: %s"), *RowName.ToString());
        }
    }
}