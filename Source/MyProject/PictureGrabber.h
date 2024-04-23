// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class MYPROJECT_API PictureGrabber
{
public:
	PictureGrabber();
	~PictureGrabber();

	UFUNCTION(BlueprintCallable, Category = "File Management")
	static TArray<FString> GetPNGFilesInFolder(const FString& FolderPath);
};
