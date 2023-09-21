// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_Object.h"

#include "Kismet/KismetSystemLibrary.h"

int UCPP_Object::GetPrivateIntegerVariable()
{
	return PrivateIntegerVariable;
}

void UCPP_Object::SetPrivateIntegerVariable(UPARAM(ref) int& NewValue)
{
	PrivateIntegerVariable = NewValue;
}

void UCPP_Object::EditBook(FBook& TargetBook, UObject* Context)
{
	UKismetSystemLibrary::PrintString(Context, "EditBookFunction called.");
}
