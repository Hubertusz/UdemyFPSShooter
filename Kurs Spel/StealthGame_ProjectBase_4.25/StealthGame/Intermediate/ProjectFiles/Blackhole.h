#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Blackhole.generated.h"


class USphereComponent;

UCLASS()
class FPSGAME_API ABlackholeActor : public Actor
{
	GENERATED_BODY();

public:
	ABlackholeActor();


protected:
	UPROPERTY(VisibleAnywhere, Category = "Components")
		UStaticMeshComponent* MeshComp;

	UPROPERTY(VisibleAnywhere, Category = "Components")
		USphereComponent* SphereComp;

	void Blackhole();

	virtual void BeginPlay() override;

public:
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
};
