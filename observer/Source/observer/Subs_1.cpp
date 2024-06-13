// Fill out your copyright notice in the Description page of Project Settings.


#include "Subs_1.h"
#include "Reloj.h"

// Sets default values
ASubs_1::ASubs_1()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASubs_1::BeginPlay()
{
	Super::BeginPlay();
	Tiempo = FString();
}

// Called every frame
void ASubs_1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASubs_1::Actualizar(APublicador_observer* publicador)
{
	TransformarSubscriptores();
}

void ASubs_1::TransformarSubscriptores()
{
	Tiempo= Reloj->GetHora();
	if (Tiempo == "12:00")
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, FString::Printf(TEXT("Son %s transformate en nave enemiga"),*Tiempo));
	}
	if (Tiempo == "18:00")
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, FString::Printf(TEXT("Son %s transformate en una capsula"), *Tiempo));
	}
	if (Tiempo == "00:00")
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, FString::Printf(TEXT("Son %s transformate en un jugador auxiliar"), *Tiempo));
	}
	
}

void ASubs_1::DestruirSubscripcion()
{
}

void ASubs_1::SetReloj(AReloj* reloj)
{
	if (!reloj)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("El reloj del susbcriptor no existe")));
		return;
		this->Reloj = reloj;
	}
		Reloj = reloj;
		Reloj-> Suscribirse(reloj);

}

