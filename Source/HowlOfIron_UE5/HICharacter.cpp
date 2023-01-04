// Fill out your copyright notice in the Description page of Project Settings.


#include "HICharacter.h"
#include "AbilitySystemBlueprintLibrary.h"

// Sets default values
AHICharacter::AHICharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	abilitySystem = CreateDefaultSubobject<UAbilitySystemComponent>("AbilityComponent");

}

// Called when the game starts or when spawned
void AHICharacter::BeginPlay()
{
	Super::BeginPlay();
	
	if (abilitySystem && abilityDataTable)
	{
		attributes = Cast<UHIPlayerAttributeSet>(abilitySystem->InitStats(UHIPlayerAttributeSet::StaticClass(), abilityDataTable));
	}

}

// Called every frame
void AHICharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AHICharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

