// Fill out your copyright notice in the Description page of Project Settings.

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
	// Sets default values for this actor's properties
	AProjectile();
	//Начало движения
	UFUNCTION()
	void start();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(VisibleDefaultsOnly,BlueprintReadWrite,Category = "Components")
		UStaticMeshComponent* Mesh;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Fires|Component")
		float moveSpeed = 100.0f;//скорость палёта снаряда

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Fires|Component")
		float moveRate = 0.005f;//частота обновлении позиции снаряда в секундах

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Fires|Damage")
		float damage = 1.0f;//повреждения которое будет наносить снаряд

	FTimerHandle MovementTimerHandle;//таймер передвижения снаряда
	
	UFUNCTION()
	void move();//отвечает за дижение
	UFUNCTION()
	void OnMeshOverLapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);//отвечает за столкновение
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
