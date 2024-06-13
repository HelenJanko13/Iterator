// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BounceBallInterface.h"
#include "BallAdapter.generated.h"
UCLASS()
class ADAPTERNAVE_API ABallAdapter : public AActor,public IBounceBallInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABallAdapter();

	//class ABall* Ball;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, Category = "Ball Adapter");
	class ABall* Ball;
	 void Lanzar() override;

};
