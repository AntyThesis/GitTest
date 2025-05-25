// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GitTestCharacter.generated.h"

UCLASS(Blueprintable)
class AGitTestCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AGitTestCharacter();




	int Health;
	int NewHealth;
	int TestHealth;
	
	// Called every frame.
	virtual void Tick(float DeltaSeconds) override;

	/** Returns TopDownCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetTopDownCameraComponent() const { return TopDownCameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }

private:
	/** Top down camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* TopDownCameraComponent;

	/** Camera boom positioning the camera above the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

public:
	
	virtual void BeginPlay() override;
};







//once i was confused on how to start the project looked everywhere would work once in a while.
//nothing was wrong it was just trying to figure out what type of projects ex:(C++,JS,JAVA,VS,Python)
//had to open it has an unreal project
//
//     File->
//            Open->
//                    UnrealEngineProject


