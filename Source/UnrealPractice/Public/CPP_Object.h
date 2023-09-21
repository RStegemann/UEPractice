// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CPP_Object.generated.h"

/**
 * 
 */
UENUM(BlueprintType)
enum EFruitList
{
	Apple UMETA(DisplayName="Apple_Display"),
	Mango,
	Banana
};

USTRUCT(BlueprintType)
struct FBook
{
	GENERATED_USTRUCT_BODY()
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FString Name;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int NumberOfPages;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float Rating;
};

UCLASS(Blueprintable)
class UNREALPRACTICE_API UCPP_Object : public UObject
{
	GENERATED_BODY()

private:
	int PrivateIntegerVariable;

public:
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
		int PublicIntegerVariable;
	UFUNCTION(BlueprintPure)
		int GetPrivateIntegerVariable();
	UFUNCTION(BlueprintCallable)
		void SetPrivateIntegerVariable(UPARAM(ref) int& NewValue);
	UFUNCTION(BlueprintCallable)
		static void EditBook(UPARAM(ref) FBook& TargetBook, UObject* Context);
};
