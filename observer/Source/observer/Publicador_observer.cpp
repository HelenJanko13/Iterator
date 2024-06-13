// Fill out your copyright notice in the Description page of Project Settings.


#include "SuscriptorInterface.h"
#include "Publicador_observer.h"

// Sets default values
APublicador_observer::APublicador_observer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APublicador_observer::BeginPlay()
{
	Super::BeginPlay();
	suscriptores= TArray<AActor*>();
	
}

// Called every frame
void APublicador_observer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APublicador_observer::Suscribirse(AActor* suscriptor)
{
		//Aqui se añade el suscriptor a la lista de subscriptores
	suscriptores.Add(suscriptor);
}

void APublicador_observer::Desuscribirse(AActor* suscriptor)
{
	suscriptores.Remove(suscriptor);
}

void APublicador_observer::NotificadorSubscriptores()
{
	for(AActor*subs: suscriptores)
	{
		Isuscriptor= Cast<ISuscriptorInterface>(subs);
		if(Isuscriptor)
		{
			Isuscriptor->Actualizar(this );
		}
		
	}
}

