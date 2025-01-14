// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "EnemyAIController.generated.h"

/**
 * 
 */
UCLASS()
class TWINSTICKSHOOTERTUT_API AEnemyAIController : public AAIController
{
	GENERATED_BODY()
	

public:
	AEnemyAIController();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	AActor* ActorToFollow = nullptr;

public:
	virtual void Tick(float DeltaTime) override;
};
