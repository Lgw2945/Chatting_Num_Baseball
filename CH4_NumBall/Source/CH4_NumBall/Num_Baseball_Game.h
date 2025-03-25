// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Num_Baseball_Game.generated.h"

UCLASS()
class CH4_NUMBALL_API ANum_Baseball_Game : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANum_Baseball_Game();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
