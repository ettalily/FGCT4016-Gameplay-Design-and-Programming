// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"

void AMyActor::InitPlayerInputComponent(UInputComponent *PlayerInputComponent)
{
	APlayerController *PlayerController = Cast<APlayerController>(GetController());

	UEnhancedInputLocalPlayerSubsystem *Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer());

	Subsystem->ClearAllMappings();
    Subsystem->AddMappingContext(InputMapping, 0);

	UEnhancedInputComponent *Input = Cast<UEnhancedInputComponent>(PlayerInputComponent);
    Input->BindAction(ShootAction, ETriggerEvent::Triggered, this, &AMyActor::Move);
}

void AMyActor::Move(const FInputActionValue &Value)
{
    // You can get the action value like this:
    
    bool HoldingMove = Value.Get<bool>(); // for digital input actions
    
    if (HoldingMove)
	{
		SetActorTransform();
	}
}

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Display, TEXT("BeginPlay() was called!"));
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UE_LOG(LogTemp, Display, TEXT("Tick() was called!"));
}

void AMyActor::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	UE_LOG(LogTemp, Display, TEXT("EndPlay() was called!"));
}