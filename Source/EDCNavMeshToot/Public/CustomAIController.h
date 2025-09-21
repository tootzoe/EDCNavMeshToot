// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "CustomAIController.generated.h"

/**
 * 
 */
UCLASS()
class EDCNAVMESHTOOT_API ACustomAIController : public AAIController
{
	GENERATED_BODY()
	
	
	
	

  // AAIController interface
  public:
  virtual void SetFocalPoint(FVector NewFocus, EAIFocusPriority::Type InPriority) override;

    UFUNCTION(BlueprintImplementableEvent, Category = "TOOT")
    FTransform GetActorGhostTransform() const;


private:



};
