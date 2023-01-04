// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "HIPlayerAttributeSet.generated.h"

/**
 *
 */

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)




UCLASS()
class HOWLOFIRON_UE5_API UHIPlayerAttributeSet : public UAttributeSet
{
    GENERATED_BODY()

public:

    UHIPlayerAttributeSet();

    UPROPERTY(Category = "Ability System | Attributes", VisibleAnywhere, BlueprintReadOnly)
        FGameplayAttributeData maxHealth;

    UPROPERTY(Category = "Ability System | Attributes", VisibleAnywhere, BlueprintReadOnly)
        FGameplayAttributeData health;

    UPROPERTY(Category = "Ability System | Attributes", VisibleAnywhere, BlueprintReadOnly)
        FGameplayAttributeData damage1;

    UPROPERTY(Category = "Ability System | Attributes", VisibleAnywhere, BlueprintReadOnly)
        FGameplayAttributeData speed;


public:

    ATTRIBUTE_ACCESSORS(UHIPlayerAttributeSet, maxHealth)
    ATTRIBUTE_ACCESSORS(UHIPlayerAttributeSet, health)
    ATTRIBUTE_ACCESSORS(UHIPlayerAttributeSet, damage1)
    ATTRIBUTE_ACCESSORS(UHIPlayerAttributeSet, speed)


};
