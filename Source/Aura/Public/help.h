// Copyright Anthony Kenny LLC

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "help.generated.h"

UCLASS()
class AURA_API Ahelp : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Ahelp();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
