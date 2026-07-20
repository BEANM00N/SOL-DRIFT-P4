#include "QuestSubsystem.h"

void UQuestSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);
    
    // Fire the red node in your Blueprint!
    ReceiveInitialize();
}

void UQuestSubsystem::Deinitialize()
{
    // Fire the shutdown node in your Blueprint before the C++ cleans up
    ReceiveDeinitialize();

    Super::Deinitialize();
}

void UQuestSubsystem::BroadcastGameplayEvent(FGameplayTag EventTag, int32 Amount)
{
    // Broadcast the event to any systems that are listening
    if (OnGlobalGameplayEvent.IsBound())
    {
        OnGlobalGameplayEvent.Broadcast(EventTag, Amount);
    }
}