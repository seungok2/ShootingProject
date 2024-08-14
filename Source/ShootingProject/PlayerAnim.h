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
	//�÷��̾� �̵� �ӵ�
		UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category=PlayerAnim)
		float speed = 0;
		UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = PlayerAnim)
		float Direction = 0;
	// �� ������ ���ŵǴ� �Լ�
		//virtual void NativeUpdateAnimation(float DeltaSeconds) override;

	
};
