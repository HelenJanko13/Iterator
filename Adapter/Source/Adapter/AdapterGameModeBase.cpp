// Copyright Epic Games, Inc. All Rights Reserved.


#include "AdapterGameModeBase.h"
#include "ExplosiveAdapter.h"



AAdapterGameModeBase::AAdapterGameModeBase()
{

	PrimaryActorTick.bCanEverTick = true;
	TimerShot = 0.0f;
}

void AAdapterGameModeBase::BeginPlay()
{
		Super::BeginPlay();

		ExplosiveAdapter=GetWorld()->SpawnActor<AExplosiveAdapter>(AExplosiveAdapter::StaticClass());
		//ExplosiveAdapter->SetActorLocation(FVector(0,0,0));
		Jugador=GetWorld()->SpawnActor<AJugador>(AJugador::StaticClass());
		Jugador ->SetExplosiveCanio(ExplosiveAdapter);
		
}

void AAdapterGameModeBase::Tick(float DeltaTime)
{
		Super::Tick(DeltaTime);

		TimerShot += DeltaTime;
		if (TimerShot >= 5.0f)
		{
			Jugador->explosive();
			Jugador->range_explosive(15.0f);
			
			//ExplosiveAdapter->SetActorLocation(FVector(FMath::RandRange(-1000, 1000), FMath::RandRange(-1000, 1000), 0));
			TimerShot = 0.0f;
		}
}
