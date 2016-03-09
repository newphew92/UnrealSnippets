// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/GameMode.h"
#include "NetworkGameMode.generated.h"

UCLASS(minimalapi)
class ANetworkGameMode : public AGameMode
{
	GENERATED_BODY()

public:
//	ANetworkGameMode();
public:
    ANetworkGameMode(const FObjectInitializer& ObjectInitializer);
    //Function to add score.
    void AddMana(int32 Amount);
		// void ANetworkGameMode::AddHealth(int32 Amount, int32 Player);
		void SaveGame();
};
