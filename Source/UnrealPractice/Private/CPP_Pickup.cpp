// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_Pickup.h"

#include "Kismet/KismetSystemLibrary.h"

// Sets default values
ACPP_Pickup::ACPP_Pickup()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACPP_Pickup::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACPP_Pickup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACPP_Pickup::Interact()
{
	IInteractable::Interact();
	UKismetSystemLibrary::PrintString(this, "Destroyed pickup from CPP.");
	Execute_OnInteract(this);
	Execute_OnNativeInteract(this, this);
	Destroy();
}

