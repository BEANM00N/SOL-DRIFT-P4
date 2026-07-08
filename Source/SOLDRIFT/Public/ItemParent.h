// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "ItemParent.generated.h"


UCLASS(Blueprintable)
class SOLDRIFT_API UItemParent : public UObject
{
	GENERATED_BODY()

public:

// exposing the searchable gameplay tag - I think...
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data", meta = (AssetRegistrySearchable))
	FGameplayTag ItemTag;
};