// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "PlayerAnim.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTINGPROJECT_API UPlayerAnim : public UAnimInstance
{
	GENERATED_BODY()


	public:
	//플레이어 이동 속도
		UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category=PlayerAnim)
		float speed = 0;
		UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = PlayerAnim)
		float Direction = 0;
	// 매 프레임 갱신되는 함수
		//virtual void NativeUpdateAnimation(float DeltaSeconds) override;

	
};
