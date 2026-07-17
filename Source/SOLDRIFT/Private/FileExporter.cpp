// Fill out your copyright notice in the Description page of Project Settings.


#include "FileExporter.h"
#include "FileExporter.h"
#include "Misc/FileHelper.h"

bool UFileExporter::SaveStringToFile(FString SaveDirectory, FString FileName, FString TextToSave)
{
	FString AbsoluteFilePath = SaveDirectory + "/" + FileName;
	return FFileHelper::SaveStringToFile(TextToSave, *AbsoluteFilePath);
	
}

void UFileExporter::AppendItemDataToCSV(
	FString& InOutCSVString, 
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
	bool bFoundInRaid)
{
	// Convert booleans to "True" or "False" strings
	FString RevealedStr = bRevealed ? TEXT("True") : TEXT("False");
	FString FoundInRaidStr = bFoundInRaid ? TEXT("True") : TEXT("False");

	// Build the comma-separated row. 
	// %s is for Strings, %f is for Floats. Strings are wrapped in quotes.
	FString NewRow = FString::Printf(TEXT("\"%s\",\"%s\",\"%s\",%f,%f,%f,%f,%f,%f,%f,\"%s\",%f,%f,%s,%f,%f,%s\n"),
		*Name, 
		*Rarity, 
		*Description, 
		MaxQuantity, 
		DiscoveryRate, 
		Value, 
		BurnTime, 
		MaxDurability, 
		Weight, 
		SpawnWeight, 
		*ItemTag, 
		AffectorAmount, 
		Quantity, 
		*RevealedStr, 
		CurrentDurability, 
		DurabilityResistance, 
		*FoundInRaidStr
	);

	// Append the new row to the master string
	InOutCSVString += NewRow;
}

