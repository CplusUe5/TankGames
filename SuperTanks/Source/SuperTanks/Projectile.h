#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Projectile.generated.h"

class UStaticMeshComponent;

UCLASS()
class SUPERTANKS_API AProjectile : public AActor
{
	GENERATED_BODY()
public:	
	
	AProjectile();
	
	UFUNCTION()
		void Start();

protected:
	
	virtual void BeginPlay() override;
	
	UPROPERTY(VisibleDefaultsOnly,BlueprintReadWrite,Category = "Components")
		UStaticMeshComponent* Mesh;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement|Speed")
		float moveSpeed = 100.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement|Speed")
		float moveRate = 0.005f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Damage")
		float damage = 1.0f;

	FTimerHandle MovementTimerHandle;
	

	UFUNCTION()
		void move();
	UFUNCTION()
		void OnMeshOverLapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);//отвечает за столкновение

};
