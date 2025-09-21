// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomCharacterMovementComp.h"






void UCustomCharacterMovementComp::RequestPathMove(const FVector &MoveInput)
{
    FVector tmpVec =GetActorGhostTransform().InverseTransformVector(MoveInput);
    Super::RequestPathMove(tmpVec);
}

FVector UCustomCharacterMovementComp::GetActorFeetLocation() const
{
    FTransform tmpTran;
    tmpTran.SetLocation(Super::GetActorFeetLocation());

    UE_LOG(LogTemp, Warning, TEXT("msg....%hs") , __func__);



    return (tmpTran * GetActorGhostTransform()).GetLocation();

}

// FTransform UCustomCharacterMovementComp::GetActorGhostTransform() const
// {

// }

FVector UCustomCharacterMovementComp::GetExposedActorFeetLocation()
{
    return GetActorFeetLocation();
}


FVector UCustomCharacterMovementComp::GetFeetLocation() const
{
    return Super::GetFeetLocation();
}
