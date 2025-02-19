// Fill out your copyright notice in the Description page of Project Settings.

#include "NaveAzul.h"
#include "Enemigo.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/CollisionProfile.h"
#include "Engine/StaticMesh.h"
#include "Components/PrimitiveComponent.h"
#include "Components/BoxComponent.h"
#include "Ship_ElvisPawn.h"
#include "Ship_ElvisProjectile.h"



ANaveAzul::ANaveAzul()
{
    PrimaryActorTick.bCanEverTick = true;
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/Dronsito.Dronsito'"));

    NaveEnemigaAzul = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
    RootComponent = NaveEnemigaAzul;
    NaveEnemigaAzul->SetStaticMesh(ShipMesh.Object);

    // Inicializa el componente de colisión antes de configurarlo
    NavePum = CreateDefaultSubobject<UBoxComponent>(TEXT("Colision_Terra"));
    NavePum->SetupAttachment(NaveEnemigaAzul);
    NavePum->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
    NavePum->SetBoxExtent(FVector(100.0f, 100.0f, 100.0f));

    // Configuración de colisión
    NavePum->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    NavePum->SetCollisionObjectType(ECollisionChannel::ECC_WorldDynamic);
    NavePum->SetCollisionResponseToAllChannels(ECR_Ignore);
    NavePum->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);  // Detección con el jugador
    NavePum->SetCollisionResponseToChannel(ECC_GameTraceChannel1, ECR_Overlap);  // Detección con balas

    // Asigna la función de colisión
    NavePum->OnComponentBeginOverlap.AddDynamic(this, &ANaveAzul::OnOverlapBegin);
	
    
}


void ANaveAzul::BeginPlay()
{
    Super::BeginPlay();

   
}

void ANaveAzul::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

	MoveNaveAzul(DeltaTime);
   
}

void ANaveAzul::MoveNaveAzul(float DeltaTime)
{
    FVector NewLocation = GetActorLocation();

    // Movimiento hacia la izquierda en el eje X
    NewLocation.X -= 300.0f * DeltaTime; // Ajusta la velocidad a 300 unidades/s

    // Oscilación en Y para un movimiento más elegante
    NewLocation.Y += FMath::Sin(GetWorld()->GetTimeSeconds() * 2.0f) * 2.0f;

    // Reinicio de posición cuando la nave sale de la pantalla
    if (NewLocation.X < -1800.0f)
    {
        NewLocation.X = 1800.0f; // Vuelve a aparecer en el otro lado
    }

    SetActorLocation(NewLocation);
   
}

void ANaveAzul::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    // Verificar si el actor es el jugador o una bala
    if (OtherActor && (OtherActor->IsA(AShip_ElvisPawn::StaticClass()) || OtherActor->IsA(AShip_ElvisProjectile::StaticClass())))
    {
        Destroy(); // Destruir la nave azul
    }
}


