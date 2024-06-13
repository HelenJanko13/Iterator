
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SuscriptorInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class USuscriptorInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class OBSERVER_API ISuscriptorInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void Actualizar(class APublicador_observer * publicador ) = 0;
};
