#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"
#include "NaveAzul.generated.h"

UCLASS()
class SHIP_ELVIS_API ANaveAzul : public AEnemigo
{
	GENERATED_BODY()

	/* The mesh component */
	UPROPERTY(Category = Mesh, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* NaveEnemigaAzul;

	// ~~ Componente de Colsion : tipo caja ~~
	UPROPERTY(EditAnywhere, Category = "Componentes")
	class UBoxComponent* NavePum;

public:
	// Sets default values for this actor's properties
	ANaveAzul();

	void BeginPlay() override;
	void Tick(float DeltaTime) override;
	void MoveNaveAzul(float DeltaTime);

	

private:
	

	/** Bandera para reiniciar la posición cuando cruce X = -1800 */
	bool bResetPosition;


	/** Velocidad de movimiento en X */
	UPROPERTY(EditAnywhere, Category = "Movement")
	float MovementSpeed = 300.0f;

	/** Amplitud de oscilación en Y */
	UPROPERTY(EditAnywhere, Category = "Movement")
	float OscillationAmplitude = 100.0f;

	/** Frecuencia de oscilación en Y */
	UPROPERTY(EditAnywhere, Category = "Movement")
	float OscillationFrequency = 2.0f;


	/** Función para detectar colisiones */
	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
		bool bFromSweep, const FHitResult& SweepResult);

};
