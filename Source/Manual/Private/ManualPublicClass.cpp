#include "ManualPublicClass.h"

FManualPublicClass::FManualPublicClass()
{
}

void FManualPublicClass::DoSomething()
{
	UE_LOG(LogTemp, Warning, TEXT("CALL MANUAL DO SOMETHING"));
}
