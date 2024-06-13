// Fill out your copyright notice in the Description page of Project Settings.


#include "Reloj.h"

AReloj::AReloj()
{
    PrimaryActorTick.bCanEverTick = true;
}

AReloj::~AReloj()
{
}

void AReloj::BeginPlay()
{
    	Super::BeginPlay();
	
}

void AReloj::Tick(float DeltaTime)
{
    	Super::Tick(DeltaTime);
}

void AReloj::CambioHora()
{
    NotificadorSubscriptores();
}

void AReloj::SetHora(FString Hora)
{
    Time = Hora;
    CambioHora();
}

void AReloj::Suscribirse(AActor* suscriptor)
{
}

FString AReloj::GetHora()
{
    return Time;
}
