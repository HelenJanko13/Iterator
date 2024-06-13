// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "observerGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class OBSERVER_API AobserverGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:
	AobserverGameModeBase();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(VisibleAnywhere, Category = "Game Mode")
	class AReloj * _reloj;

	UPROPERTY(VisibleAnywhere, Category = "Game Mode")
	class ASubs_1* _sub1;

	UPROPERTY(VisibleAnywhere, Category = "Game Mode")
	class ASubs_2* _sub2;
	public:
		float TimeDay;

	
	
};
