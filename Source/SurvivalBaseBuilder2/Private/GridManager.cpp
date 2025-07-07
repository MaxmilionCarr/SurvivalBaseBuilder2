// Fill out your copyright notice in the Description page of Project Settings.


#include "GridManager.h"
#include "TileActor.h"
#include "Engine/World.h"

// Sets default values
AGridManager::AGridManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void AGridManager::BeginPlay()
{
	Super::BeginPlay();

	if (!TileClass) return;

	for (int32 X = 0; X < GridWidth; ++X)
	{
		for (int32 Y = 0; Y < GridHeight; ++Y)
		{
			FVector WorldPos = FVector(X * TileSize, Y * TileSize, 0);
			FActorSpawnParameters SpawnParams;
			ATileActor* Tile = GetWorld()->SpawnActor<ATileActor>(TileActorClass, WorldPos, FRotator::ZeroRotator, SpawnParams);

			if (Tile)
			{
				Tile->InitTile(X, Y, WorldPos);
			}
		}
	}
	
}

