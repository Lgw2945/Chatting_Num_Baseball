#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "Main_GM.generated.h"

UCLASS()
class CH4_NUMBALL_API AMain_GM : public AGameMode
{
    GENERATED_BODY()

public:
    AMain_GM();
    virtual void BeginPlay() override;

    void GenerateSecretNumber();
    void ProcessGuess(APlayerController* Player, const FString& Guess);
    void RestartGame();
    void BroadcastMessage(const FString& Message);
    void EndGame(APlayerController* Winner);

private:
    UPROPERTY()
    FString SecretNumber;

    UPROPERTY()
    TMap<APlayerController*, int32> PlayerAttempts;
};