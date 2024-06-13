// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Jugador.h"
#include "AdapterGameModeBase.generated.h"
/**
 * 
 */
UCLASS()
class ADAPTER_API AAdapterGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

	public:
		AAdapterGameModeBase();

		virtual void BeginPlay() override;
		virtual void Tick(float DeltaTime) override;

	protected:
		UPROPERTY(VisibleAnywhere, Category = "Game Mode")
		class AJugador* Jugador;
		UPROPERTY (VisibleAnywhere, Category = "Game Mode")
		class AExplosiveAdapter* ExplosiveAdapter;

		float TimerShot;
	
};
