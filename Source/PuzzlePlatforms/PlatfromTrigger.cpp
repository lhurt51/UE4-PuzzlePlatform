// Fill out your copyright notice in the Description page of Project Settings.

#include "PlatfromTrigger.h"

#include "Components/BoxComponent.h"


// Sets default values
APlatfromTrigger::APlatfromTrigger()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	if (!ensure((TriggerVolume = CreateDefaultSubobject<UBoxComponent>(FName("TriggerVolume"))) != nullptr)) return;

	RootComponent = TriggerVolume;
}

// Called when the game starts or when spawned
void APlatfromTrigger::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlatfromTrigger::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

