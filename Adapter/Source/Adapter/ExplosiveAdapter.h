// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InterfaceExplosiveShot.h"
#include "ExplosiveAdapter.generated.h"
UCLASS()
class ADAPTER_API AExplosiveAdapter : public AActor , public IInterfaceExplosiveShot
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AExplosiveAdapter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	//puntero a la clase que se va a adaptar
	UPROPERTY(EditAnywhere, Category = "Explosive Adapter")
	class ABalaCanion* balaCanion;

public:
	 void explosive() override;
	 void range_explosive(float _range) override;

};
