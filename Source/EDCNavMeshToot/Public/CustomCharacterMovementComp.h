// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "CustomCharacterMovementComp.generated.h"

/**
 * 
 */
UCLASS()
class EDCNAVMESHTOOT_API UCustomCharacterMovementComp : public UCharacterMovementComponent
{
	GENERATED_BODY()
	
	
	
   // INavMovementInterface interface
   public:
     virtual FVector GetFeetLocation() const override;
// INavMovementInterface interface
virtual void RequestPathMove(const FVector &MoveInput) override;
// UNavMovementComponent interface

virtual FVector GetActorFeetLocation() const override;

    UFUNCTION(BlueprintImplementableEvent, Category = "TOOT")
        FTransform GetActorGhostTransform() const;
    UFUNCTION(BlueprintCallable, Category = "TOOT")
    FVector GetExposedActorFeetLocation();



private:



  };

