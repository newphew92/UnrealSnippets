// Fill out your copyright notice in the Description page of Project Settings.
#include "Json.h"
#pragma once

/**
 *
 */
class NETWORK_API jsonHelper
{
public:
	static TSharedPtr<FJsonObject> loadJsonObject(const FString& FilePath);



	static bool setJsonObject(const FString& fileName);
};
