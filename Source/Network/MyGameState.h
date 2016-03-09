// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/GameState.h"
#include "MyGameState.generated.h"

/**
 *
 */
UCLASS()
class NETWORK_API AMyGameState : public AGameState
{
	GENERATED_BODY()

public:
    //Score replicated var.
    UPROPERTY(Replicated)
    int32 Mana;
		// UPROPERTY(Replicated)
		// int32 PlayerOneHealth;
		// UPROPERTY(Replicated)
		// int32 PlayerTwoHealth;


};
