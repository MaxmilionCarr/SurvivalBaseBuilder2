// Fill out your copyright notice in the Description page of Project Settings.

#include "TileActor.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
ATileActor::ATileActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	TileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TileMesh"));
	RootComponent = TileMesh;

	bIsOccupied = false;

}

// Called when the game starts or when spawned
void ATileActor::InitTile(int32 X, int32 Y, FVector WorldPos)
{
	TileX = X;
	TileY = Y;
	SetActorLocation(WorldPos);
}

