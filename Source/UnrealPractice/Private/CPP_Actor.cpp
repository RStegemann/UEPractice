#include "CPP_Actor.h"

ACPP_Actor::ACPP_Actor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ACPP_Actor::BeginPlay()
{
	Super::BeginPlay();
	
}

void ACPP_Actor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

