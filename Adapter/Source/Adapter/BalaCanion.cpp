// Fill out your copyright notice in the Description page of Project Settings.


#include "BalaCanion.h"

// Sets default values
ABalaCanion::ABalaCanion()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABalaCanion::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABalaCanion::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABalaCanion::shot()
{
	GEngine ->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("El arma BalaCanion se disparo")));
}

void ABalaCanion::range(float _rangeExplosive)
{
	GEngine ->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Con un rango de %f"),_rangeExplosive));
}

