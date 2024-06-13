// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "AdapterNaveGameMode.generated.h"

UCLASS(MinimalAPI)
class AAdapterNaveGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AAdapterNaveGameMode();

protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere,Category="Game Mode")
	class AAdapterNavePawn* Nave;

	UPROPERTY(VisibleAnywhere, Category = "Game Mode")
	class ABallAdapter* BallAdapter;
};



