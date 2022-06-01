// Fill out your copyright notice in the Description page of Project Settings.


#include "Cannon.h"
#include "Components/ArrowComponent.h"
#include "Components/StaticMeshComponent.h"
#include "TimerManager.h"
#include "Engine/Engine.h"


// Sets default values
ACannon::ACannon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	USceneComponent* sceeneCpm = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = sceeneCpm;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cannon mesh"));
	Mesh->SetupAttachment(RootComponent);

	ProjectileSpawnPoint = CreateDefaultSubobject<UArrowComponent>(TEXT("Spawn point"));
	ProjectileSpawnPoint->SetupAttachment(Mesh);

	
}

void ACannon::Fire()
{
	if (!ReadyToFire)
	{
		return;
	}

	if (ReadyToFire)
	{
		ValueSeriesShots = seriesShots;//приравниваем подсчет к обойме
		for (size_t i = 0; i < seriesShots; i++)
		{
			--ValueSeriesShots;
			//GetWorld()->GetTimerManager().SetTimer(ReloadTimerHandle, this, &ACannon::Reload, 1 / FireRate, false);
		}
	}

	if (Type == ECannonType::FireProjectile && numberFired != 0)
	{
		
		--numberFired;
		GEngine->AddOnScreenDebugMessage(10, 1, FColor::Green, FString::Printf(TEXT("Fire-projectile =  %d\nseriesShots = %d"), numberFired, ValueSeriesShots));//первая пушка
	}
	GetWorld()->GetTimerManager().SetTimer(ReloadTimerHandle, this, &ACannon::Reload, 1 / FireRate, false);
}

void ACannon::FireSpecial()
{
	if (!ReadyToFireSpecial)
	{
		return;
	}

	ReadyToFireSpecial = false;

	if (rType == ECannonType::FireTrace)
	{
		GEngine->AddOnScreenDebugMessage(10, 1, FColor::Red, "FireTrace");//первая пушка
	}
	GetWorld()->GetTimerManager().SetTimer(ReloadTimerHandle, this, &ACannon::Reload, 1 / FireRate, false);
}

// Called when the game starts or when spawned
void ACannon::BeginPlay()
{
	Super::BeginPlay();
	Reload();

}

// Called every frame
void ACannon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UE_LOG(LogTemp, Warning, TEXT("numberFired = %d seriesShots = %d"),numberFired, seriesShots);
}

bool ACannon::IsReadyToFire()
{
	return ReadyToFire;
}

bool ACannon::IsReadyToFireSpecial()
{
	return ReadyToFireSpecial;
}

void ACannon::Reload()
{
	ReadyToFire = true;
	ReadyToFireSpecial = true;
}