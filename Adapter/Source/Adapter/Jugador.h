// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InterfaceExplosiveShot.h"
#include "Jugador.generated.h"
UCLASS()
class ADAPTER_API AJugador : public AActor,public IInterfaceExplosiveShot
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AJugador();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	//el arma adaptada deb ser del tipo 
	class IInterfaceExplosiveShot* ExplosiveShot;

private:
	float range;
public:

	void SetExplosiveCanio(AActor* Adapter);
	void explosive() override;
	void range_explosive(float _range) override;


};
