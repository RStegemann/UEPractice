#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CPP_Actor.generated.h"

UCLASS()
class UNREALPRACTICE_API ACPP_Actor : public AActor
{
	GENERATED_BODY()
	
public:	
	ACPP_Actor();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

};
