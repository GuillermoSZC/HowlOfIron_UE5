// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Gas/HIPlayerAttributeSet.h"
#include "HICharacter.generated.h"

UCLASS()
class HOWLOFIRON_UE5_API AHICharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AHICharacter();



    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Ability System")
        const UHIPlayerAttributeSet* attributes;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Ability System")
        UDataTable* abilityDataTable;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Ability System") 
        UAbilitySystemComponent* abilitySystem;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
