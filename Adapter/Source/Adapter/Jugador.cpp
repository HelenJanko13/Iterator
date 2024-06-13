// Fill out your copyright notice in the Description page of Project Settings.


#include "Jugador.h"
#include "InterfaceExplosiveShot.h"

// Sets default values
AJugador::AJugador()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	range = 0.0f;

}

// Called when the game starts or when spawned
void AJugador::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AJugador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AJugador::SetExplosiveCanio(AActor* Adapter)
{
	ExplosiveShot = Cast<IInterfaceExplosiveShot>(Adapter);
	if (!ExplosiveShot)
	{
		GEngine -> AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("No se pudo hacer el Cast del InterfaceExplosiveShot"));
		return;
		
	}
}

void AJugador::explosive()
{
		ExplosiveShot->explosive();
}


void AJugador::range_explosive(float _range)
{
      range= _range;
		ExplosiveShot->range_explosive(range);
}

