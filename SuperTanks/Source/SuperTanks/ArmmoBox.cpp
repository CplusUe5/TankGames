// Fill out your copyright notice in the Description page of Project Settings.



#include "ArmmoBox.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "TankPawn.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"



// Sets default values
AArmmoBox::AArmmoBox()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	USceneComponent* sceeneCpm = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = sceeneCpm;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(sceeneCpm);

	Mesh->OnComponentBeginOverlap.AddDynamic(this, &AArmmoBox::OnMeshOverlapBegin);
	Mesh->SetCollisionProfileName(FName("OverlapAll"));
	Mesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	Mesh->SetGenerateOverlapEvents(true);
}

// Called when the game starts or when spawned
void AArmmoBox::BeginPlay()
{
	Super::BeginPlay();
	
}

void AArmmoBox::OnMeshOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	/*ATankPawn* playerPawn = Cast<ATankPawn>(GetWorld()->GetFirstPlayerController()->GetPawn());*/
	ATankPawn* Tank = Cast <ATankPawn> (OtherActor);
	if (Tank)
	{
		Tank->SetupCannon(CannonClass);
		
	}
	Destroy();

}

// Called every frame
void AArmmoBox::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

