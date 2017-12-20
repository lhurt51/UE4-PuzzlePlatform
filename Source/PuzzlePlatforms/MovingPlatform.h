// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "MovingPlatform.generated.h"

/**
 * 
 */
UCLASS()
class PUZZLEPLATFORMS_API AMovingPlatform : public AStaticMeshActor
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
		float Speed = 20.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings", Meta = (MakeEditWidget = true))
		FVector TargetLocation;

	AMovingPlatform();

	virtual void BeginPlay() override;
	
	virtual void Tick(float DeltaTime) override;

private:
	// Actors start location in global space
	FVector GlobalStartLocation;
	
	// Actors target location in global space
	FVector GlobalTargetLocation;

};
