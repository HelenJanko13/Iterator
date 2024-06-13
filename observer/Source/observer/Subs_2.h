// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SuscriptorInterface.h"
#include "TransformadorInterface.h"
#include "Subs_2.generated.h"

UCLASS()
class OBSERVER_API ASubs_2 : public AActor,public ISuscriptorInterface,public ITransformadorInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASubs_2();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void Actualizar(APublicador_observer* publicador) override;
	void TransformarSubscriptores() override;
	void Destruirsuscripcion();
	void SetReloj(class AReloj* reloj);
	UPROPERTY(VisibleAnywhere, Category = "Suscriptor")
	class AReloj* Reloj;
	FString Tiempo;




};
