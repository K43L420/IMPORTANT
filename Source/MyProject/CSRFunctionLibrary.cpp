// Fill out your copyright notice in the Description page of Project Settings.


#include "CSRFunctionLibrary.h"

TArray<FString> UCSRFunctionLibrary::GetPNGFilesInFolder(const FString& FolderPath)
{
	TArray<FString> PNGFiles;

	// Get the full path of the specified folder
	FString FullPath = FPaths::Combine(FolderPath);

	// Get all files in the folder
	IFileManager& FileManager = IFileManager::Get();
	if (FileManager.DirectoryExists(*FullPath))
	{
		TArray<FString> AllFiles;
		FileManager.FindFiles(AllFiles, *FullPath, TEXT("*.png"));

		// Filter out only .png files
		for (const FString& FilePath : AllFiles)
		{
			FString FullFilePath = FPaths::Combine(FullPath, FilePath);
			PNGFiles.Add(FullFilePath);
		}
	}

	return PNGFiles;
}
