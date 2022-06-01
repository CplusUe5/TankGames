// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameStructs.h"
#include "GameFramework/Actor.h"
#include "Cannon.generated.h"

class UArrowComponent;

UCLASS()
class SUPERTANKS_API ACannon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACannon();

	void Fire();
	void FireSpecial();
	bool IsReadyToFire();
	bool IsReadyToFireSpecial();
	/*int IsSeriesShots(int x);*/
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void Reload();
	

	UPROPERTY(VisibleAnywhere,BlueprintReadWrite, Category = "Components")
	UStaticMeshComponent* Mesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
		UArrowComponent* ProjectileSpawnPoint;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Fire params")
		float FireRate = 1;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Fire params")
		float FireRange = 1000;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Fire params")
		float FireDamage = 1;
	
	//количество выстрелов
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Fire params")
		int numberFired = 12;
	//серия выстрелов//обойма
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Fire params")
		int seriesShots = 4;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Fire params")
		ECannonType Type = ECannonType::FireProjectile;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Fire params")
		ECannonType rType = ECannonType::FireTrace;

	FTimerHandle ReloadTimerHandle;//структура для работы с таймером

	bool ReadyToFire = false;//признак готовности к стрельбе
	bool ReadyToFireSpecial = false;
	int ValueSeriesShots;//подсчет выстрелов

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
