// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_Character.h"

// Sets default values
ACPP_Character::ACPP_Character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	TestArray = {23, 6 , 32, 12, 123, 5123};
}

// Called when the game starts or when spawned
void ACPP_Character::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACPP_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACPP_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ACPP_Character::RemovePickup()
{
	auto const Temp = UGameplayStatics::GetPlayerCameraManager(this, 0);
	const FVector CameraLocation = Temp->GetCameraLocation();
	FHitResult Hit;
	const TArray<AActor*> ActorsToIgnore;
	UKismetSystemLibrary::LineTraceSingle(
		this,
		CameraLocation,
		CameraLocation + Temp->GetActorForwardVector() * 50000,
		TraceTypeQuery1,
		0,
		ActorsToIgnore,
		EDrawDebugTrace::ForDuration,
		Hit,
		true);
	if(Hit.GetActor())
	{
		if(Cast<ACPP_Pickup>(Hit.GetActor()))
		{
			Hit.GetActor() -> Destroy();
			UKismetSystemLibrary::PrintString(this, "Pickup destroyed");
		}
	}
}

