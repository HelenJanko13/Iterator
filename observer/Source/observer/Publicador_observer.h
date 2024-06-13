// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Publicador_observer.generated.h"

UCLASS()
class OBSERVER_API APublicador_observer : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APublicador_observer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	UPROPERTY(VisibleAnywhere,Category = "Publicador Observer")
	TArray <AActor*> suscriptores;

	virtual void Suscribirse(AActor* suscriptor);
	virtual void Desuscribirse(AActor* suscriptor);
	virtual void NotificadorSubscriptores();
private:
	class ISuscriptorInterface* Isuscriptor;
};
