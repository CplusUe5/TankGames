// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "TankPawn.generated.h"

class UStaticMeshComponent;

UCLASS()
class SUPERTANKS_API ATankPawn : public APawn
{
	GENERATED_BODY()

public:
	ATankPawn();

	UFUNCTION()
		void MoveForward(float value);
	UFUNCTION()
		void MoveSide(float Value);
	UFUNCTION()
		void MoveRotation(float Value);

	void Tick(float DeltaSeconds) override;

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
		class UStaticMeshComponent* BodyMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
		class UStaticMeshComponent* TurretMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
		class USpringArmComponent* SpringArm;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
		class UCameraComponent* Camera;


	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement|Speed")
		float MoveSpeed = 300.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement|Right")
		float RightSpeed = 3.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement|Rotation")
		float RotationSpeed = 3.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement|InterPolationKey")
		float InterPolationKey = 0.1f;

	float TargetForwardAxisValue = 0.0f;
	float TargetSideAxisValue = 0.0f;
	float TargetRotationAxisValue = 0.0f;
	float CurrentRightAxisValue = 0.0f;


};
