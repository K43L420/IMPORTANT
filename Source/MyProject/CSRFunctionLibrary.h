// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CSRFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API UCSRFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category = "File Management")
	static TArray<FString> GetPNGFilesInFolder(const FString& FolderPath);
};
