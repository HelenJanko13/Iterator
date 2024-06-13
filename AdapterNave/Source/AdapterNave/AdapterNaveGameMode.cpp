// Copyright Epic Games, Inc. All Rights Reserved.

#include "AdapterNaveGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "BallAdapter.h"
#include "AdapterNavePawn.h"

AAdapterNaveGameMode::AAdapterNaveGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AAdapterNavePawn::StaticClass();
	PrimaryActorTick.bCanEverTick = true;
}

void AAdapterNaveGameMode::BeginPlay()
{

	Super::BeginPlay();
	Nave = GetWorld()->SpawnActor<AAdapterNavePawn>(AAdapterNavePawn::StaticClass(), FVector(-790, 10, 150), FRotator::ZeroRotator);
	Nave = Cast<AAdapterNavePawn>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	BallAdapter = GetWorld()->SpawnActor<ABallAdapter>(ABallAdapter::StaticClass(), FVector(0, 0, 0), FRotator::ZeroRotator);
	Nave -> SetBounceBall(BallAdapter);
	Nave -> Lanzar();
}

void AAdapterNaveGameMode::Tick(float DeltaTime)
{
		Super::Tick(DeltaTime);
}

