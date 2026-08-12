// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class FGCT4016_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	

	class UInputAction;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UInputAction *MoveAction;

	UFUNCTION()
	void Move(const FInputActionValue& Value);

	// Sets default values for this actor's properties
	AMyActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	bool hello;

	
};



