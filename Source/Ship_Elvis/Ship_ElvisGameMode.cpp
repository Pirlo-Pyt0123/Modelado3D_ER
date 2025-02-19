// Copyright Epic Games, Inc. All Rights Reserved.

#include "Ship_ElvisGameMode.h"
#include "Ship_ElvisPawn.h"
#include "NaveAzul.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"

AShip_ElvisGameMode::AShip_ElvisGameMode()
{
    // set default pawn class to our character class
    DefaultPawnClass = AShip_ElvisPawn::StaticClass();
}

void AShip_ElvisGameMode::BeginPlay()
{
    Super::BeginPlay();

    FVector StartPosition = FVector(0, 0, 200);
    float Separation = 500.0f; // Ajusta la separación entre naves

    for (int i = 0; i < 5; i++)
    {
        FVector SpawnPosition = StartPosition + FVector(0, Separation * i, 0);
        GetWorld()->SpawnActor<ANaveAzul>(ANaveAzul::StaticClass(), SpawnPosition, FRotator(0, 90, 0));
    }
}
  

void AShip_ElvisGameMode::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

}


