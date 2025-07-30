#include "ManualPrivateClass.h"

void FManualPrivateClass::DoPrivateThing()
{
	UE_LOG(LogTemp, Warning, TEXT("FMyPrivateClass::DoPrivateThing"));
}
