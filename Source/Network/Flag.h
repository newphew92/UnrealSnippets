// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Flag.generated.h"

UCLASS()
class NETWORK_API AFlag : public AActor
{
	GENERATED_BODY()
	
public:	


    // Sets default values for this actor's properties
    AFlag(const FObjectInitializer& ObjectInitializer);
    
    //    sphere component for colliding
    USphereComponent* CollisionComp;
    UFUNCTION()
    void OnOverlapBegin(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    // Our server function to update the score.
    UFUNCTION(Reliable, Server, WithValidation)
    void UpdateScore(int32 Amount);
    void UpdateScore_Implementation(int32 Amount);
    bool UpdateScore_Validate(int32 Amount);
	
};
