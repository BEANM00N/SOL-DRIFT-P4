// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FileExporter.generated.h"

/**
 * 
 */
UCLASS()
class SOLDRIFT_API UFileExporter : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, Category = "File I/O")
	static bool SaveStringToFile(FString SaveDirectory, FString FileName, FString TextToSave);

	UFUNCTION(BlueprintCallable, Category = "File I/O")
	static void AppendItemDataToCSV(
		UPARAM(ref) FString& InOutCSVString, 
		FString Name, 
		FString Rarity, 
		FString Description, 
		float MaxQuantity, 
		float DiscoveryRate, 
		float Value, 
		float BurnTime, 
		float MaxDurability, 
		float Weight, 
		float SpawnWeight, 
		FString ItemTag, 
		float AffectorAmount, 
		float Quantity, 
		bool bRevealed, 
		float CurrentDurability, 
		float DurabilityResistance, 
		bool bFoundInRaid);
	
};
