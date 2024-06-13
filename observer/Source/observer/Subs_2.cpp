// Fill out your copyright notice in the Description page of Project Settings.


#include "Subs_2.h"
#include "Reloj.h"

// Sets default values
ASubs_2::ASubs_2()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASubs_2::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASubs_2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASubs_2::Actualizar(APublicador_observer* publicador)
{
	TransformarSubscriptores();
}

void ASubs_2::TransformarSubscriptores()
{
	Tiempo = Reloj->GetHora();
	if (Tiempo == "12:00")
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Son %s transformate en almuerzo"), *Tiempo), true, FVector2D(1.5f, 1.5f));
	}
	if (Tiempo == "18:00")
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Son %s transformate en un postre"), *Tiempo), true, FVector2D(1.5f, 1.5f));
	}
	if (Tiempo == "00:00")
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue , FString::Printf(TEXT("Son %s transformate en un auto"), *Tiempo), true, FVector2D(1.5f, 1.5f));
	}
}

void ASubs_2::Destruirsuscripcion()
{
	Reloj->Desuscribirse(this);
}

void ASubs_2::SetReloj(AReloj* reloj)
{
	if (!reloj)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("El reloj del susbcriptor no existe")));
		return;
		//this->Reloj = reloj;
	}
	Reloj = reloj;
	Reloj -> Suscribirse(reloj);
}

