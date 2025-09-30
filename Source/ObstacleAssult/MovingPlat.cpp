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

	
}

// Called every frame
void AMovingPlat::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	FVector CurrentLocation = GetActorLocation();

	CurrentLocation.X = CurrentLocation.X + 1;

	SetActorLocation(CurrentLocation);
}

void CHECKMYASS() 
{

}

