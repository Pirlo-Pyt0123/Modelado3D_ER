// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "NaveAzul.h"
#include "Enemigo.h"
#include "GameFramework/GameModeBase.h"
#include "Ship_ElvisGameMode.generated.h"


UCLASS(MinimalAPI)
class AShip_ElvisGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AShip_ElvisGameMode();

	ANaveAzul* NaveAzul;

public:

	void BeginPlay() override;

	void Tick(float DeltaTime) override;


};



