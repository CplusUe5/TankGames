// Fill out your copyright notice in the Description page of Project Settings.
#include "Cannon.h"
#include "CollisionQueryParams.h"
#include "DrawDebugHelpers.h"
#include "Components/ArrowComponent.h"
#include "Components/StaticMeshComponent.h"
#include "TimerManager.h"
#include "Engine/Engine.h"

ACannon::ACannon()
{
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
	ReadyToFire = false;


	//if (ReadyToFire)//держим кнопку стрелять
	//{
	//	ValueSeriesShots = seriesShots;//приравниваем подсчет к обойме
	//	for (size_t i = 0; i < seriesShots; i++)
	//	{
	//		--ValueSeriesShots;
	//		//GetWorld()->GetTimerManager().SetTimer(ReloadTimerHandle, this, &ACannon::Reload, 1 / FireRate, false);
	//	}
	//	ValueSeriesShots = seriesShots;
	//	
	//}

	if (Type == ECannonType::FireProjectile && numberFired != 0)
	{
		/*if (ValueSeriesShots == 0)
		{
			return;
		}*/

		--numberFired;
		GEngine->AddOnScreenDebugMessage(10, 1, FColor::Green, FString::Printf(TEXT("Fire-projectile =  %d\nseriesShots = %d"), numberFired, ValueSeriesShots));//первая пушка	
		AProjectile* projectile = GetWorld()->SpawnActor<AProjectile>(ProjectileClass, ProjectileSpawnPoint->GetComponentLocation(), ProjectileSpawnPoint->GetComponentRotation());
		if (projectile)
		{
			projectile->Start();
		}
		
	}
	else
	{
			GEngine->AddOnScreenDebugMessage(10, 1, FColor::Green, "Fire - trace");
			FHitResult hitResult;//результат луча
			FCollisionQueryParams traceParams = FCollisionQueryParams(FName(TEXT("FireTrace")), true, this);//наши параметры луча
			traceParams.bTraceComplex = true;//свойства
			traceParams.bReturnPhysicalMaterial = false;//свойства
			FVector start = ProjectileSpawnPoint->GetComponentLocation();//старт луча
			FVector end = ProjectileSpawnPoint->GetForwardVector()* FireRange + start;//конец луча

			//проверяем луч, выпускается ли
			if (GetWorld()->LineTraceSingleByChannel(hitResult, start, end, ECollisionChannel::ECC_Visibility, traceParams))
			{
		
				DrawDebugLine(GetWorld(), start, hitResult.Location, FColor::Red, false, 0.5f, 0, 5);//меняем цвет если не выпускается
																									
				if (hitResult.Actor.Get())
				{
					hitResult.Actor.Get()->Destroy();
				}
				else
				{
					DrawDebugLine(GetWorld(), start, end, FColor::Red, false, 0.5f, 0, 5);
				}
			}
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
		GEngine->AddOnScreenDebugMessage(10, 1, FColor::Red, "FireTrace");
		AProjectile* projectile = GetWorld()->SpawnActor<AProjectile>(ProjectileClass, ProjectileSpawnPoint->GetComponentLocation(), ProjectileSpawnPoint->GetComponentRotation());
		if (projectile)
		{
			projectile->Start();
		}
	}
	GetWorld()->GetTimerManager().SetTimer(ReloadTimerHandle, this, &ACannon::Reload, 1 / FireRate, false);
}

void ACannon::BeginPlay()
{
	Super::BeginPlay();
	Reload();
}

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