// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GridManager.generated.h"

class ATileActor;

UCLASS()
class SURVIVALBASEBUILDER2_API AGridManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGridManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	UPROPERTY(EditAnywhere, Category = "Grid")
	int32 GridWidth = 10;

	UPROPERTY(EditAnywhere, Category = "Grid")
	int32 GridHeight = 10;

	UPROPERTY(EditAnywhere, Category = "Grid")
	float TileSize = 100.0f;

	UPROPERTY(EditAnywhere, Category = "Grid")
	TSubclassOf<ATileActor> TileActorClass;
};
