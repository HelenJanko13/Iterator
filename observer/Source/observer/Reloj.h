// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Publicador_observer.h"
#include "Reloj.generated.h"

/**
 * 
 */
UCLASS()
class OBSERVER_API AReloj : public APublicador_observer
{
	GENERATED_BODY()

	public:
		AReloj();
		~AReloj();
protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
private:
	FString Time;
	
public:
	void CambioHora();
	void SetHora(FString Hora);
	void Suscribirse(AActor* suscriptor) override;
	FORCEINLINE FString GetHora();
		

		
	
};
