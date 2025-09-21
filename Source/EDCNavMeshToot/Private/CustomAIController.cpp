// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomAIController.h"

//#include "CustomCharacterMovementComp.h"





void ACustomAIController::SetFocalPoint(FVector NewFocus, EAIFocusPriority::Type InPriority)
{
    FVector tmpFocus  = GetActorGhostTransform().InverseTransformVector(NewFocus);
    Super::SetFocalPoint(tmpFocus , InPriority);

}
