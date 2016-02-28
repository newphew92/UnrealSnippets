// Fill out your copyright notice in the Description page of Project Settings.

#include "Network.h"
#include "Flag.h"
#include "Engine.h"
// Include our game mode for casting.
#include "NetworkGameMode.h"

AFlag::AFlag(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{
    //ObjectInitializer
    bReplicates = true;
    CollisionComp = ObjectInitializer.CreateDefaultSubobject<USphereComponent>(this, TEXT("SphereComp"));
    CollisionComp->InitSphereRadius(60.0f);
    RootComponent = CollisionComp;
    CollisionComp->OnComponentBeginOverlap.AddDynamic(this, &AFlag::OnOverlapBegin);
}


void AFlag::OnOverlapBegin(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    
    if (Role == ROLE_Authority)
    {
        UpdateScore(5);
        Destroy();
        
    }
}

void AFlag::UpdateScore_Implementation(int32 Amount)
{
    // Get the game mode and cast it to our game mode.
    ANetworkGameMode* TheGameMode = Cast<ANetworkGameMode>(GetWorld()->GetAuthGameMode());
    //Add Score!
    TheGameMode->AddScore(Amount);
}

bool AFlag::UpdateScore_Validate(int32 Amount)
{
    return true;
}