#include "Blackhole.h"
#include "Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"
#include "FPSCharacter.h"

ABlackholeActor::ABlackholeActor()
{
	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Meshcomp"));
	MeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	
	SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	SphereComp->SetCollisionEnabled(ECollisionEnabled::PhysicsOnly);
	SphereComp->SetCollisionResponseToAllChannels(ECR_Ignore);
	SphereComp->SetCollisionResponseToChannel(ECR_Overlap);
	SphereComp->SetupAttachment(MeshComp);
}




void ABlackholeActor::Blackhole()
{
	UPrimitiveComponent::AddForce(15, nullptr, true);
}

void ABlackholeActor::BeginPlay()
{
	Super::BeginPlay();

}

void ABlackholeActor::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);


}
