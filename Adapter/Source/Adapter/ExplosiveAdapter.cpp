// Fill out your copyright notice in the Description page of Project Settings.

#include "ExplosiveAdapter.h"
#include "BalaCanion.h"

// Sets default values
AExplosiveAdapter::AExplosiveAdapter()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AExplosiveAdapter::BeginPlay()
{
    Super::BeginPlay();
    balaCanion = GetWorld()->SpawnActor<ABalaCanion>(ABalaCanion::StaticClass());
}

// Called every frame
void AExplosiveAdapter::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void AExplosiveAdapter::explosive()
{
    if (!balaCanion)
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("La clase extranjera es null"));
        return;
    }
    balaCanion->shot(); // Corrected method name
}

void AExplosiveAdapter::range_explosive(float _range)
{
    if (!balaCanion)
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("La clase extranjera es null"));
        return;
    }
    balaCanion->range(_range); // Corrected method name
}
