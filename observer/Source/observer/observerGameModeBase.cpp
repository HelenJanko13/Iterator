// Copyright Epic Games, Inc. All Rights Reserved.


#include "observerGameModeBase.h"
#include "Reloj.h"
#include "Subs_1.h"
#include "Subs_2.h"


AobserverGameModeBase::AobserverGameModeBase()
{
		PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;
	TimeDay = 0.0;
}

void AobserverGameModeBase::BeginPlay()
{
		Super::BeginPlay();
		
		_reloj= GetWorld()->SpawnActor<AReloj>(AReloj::StaticClass());
		_sub1= GetWorld()->SpawnActor<ASubs_1>(ASubs_1::StaticClass());
		_sub1-> SetReloj(_reloj);
		_sub2= GetWorld()->SpawnActor<ASubs_2>(ASubs_2::StaticClass());
		_sub2-> SetReloj(_reloj);
}

void AobserverGameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	TimeDay += DeltaTime;
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("TimeDay: %f"), TimeDay));
	if (TimeDay >= 12.0f)
	{
		_reloj->SetHora("12:00");
	}
	else if (TimeDay >= 18.0f)
	{
		_reloj->SetHora("18:00");

	}
	else if (TimeDay >= 22.0f)
	{
		_reloj->SetHora("22:00");

	}
	else if (TimeDay >= 24.0f)
	{
		_sub2->Destruirsuscripcion();
		TimeDay = 0.0f;
	}
}