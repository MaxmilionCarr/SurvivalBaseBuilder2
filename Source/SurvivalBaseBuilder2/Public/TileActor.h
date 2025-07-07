// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TileActor.generated.h"

UCLASS()
class SURVIVALBASEBUILDER2_API ATileActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATileActor();

	void InitTile(int32 X, int32 Y, FVector WorldPos);

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* TileMesh;

	UPROPERTY(VisibleAnywhere)
	int32 TileX;

	UPROPERTY(VisibleAnywhere)
	int32 TileY;

	UPROPERTY(VisibleAnywhere)
	bool bIsOccupied;

};
