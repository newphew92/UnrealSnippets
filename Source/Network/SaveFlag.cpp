// Fill out your copyright notice in the Description page of Project Settings.

#include "Network.h"
#include "SaveFlag.h"


// Sets default values
ASaveFlag::ASaveFlag()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASaveFlag::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASaveFlag::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

