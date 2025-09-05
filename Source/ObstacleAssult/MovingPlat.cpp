// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlat.h"

// Sets default values
AMovingPlat::AMovingPlat()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMovingPlat::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Display, TEXT("Moving Platform Begins Play 1"));

	UE_LOG(LogTemp, Display, TEXT("Moving Platform Begins Play 2"));

	UE_LOG(LogTemp, Display, TEXT("Moving Platform Begins Play 3"));

	UE_LOG(LogTemp, Display, TEXT("Moving Platform Begins Play 4"));

	int AnInt = 100;
}

// Called every frame
void AMovingPlat::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

