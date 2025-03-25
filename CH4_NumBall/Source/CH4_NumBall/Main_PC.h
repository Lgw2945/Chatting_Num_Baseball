#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Main_PC.generated.h"

UCLASS()
class CH4_NUMBALL_API AMain_PC : public APlayerController
{
    GENERATED_BODY()

public:
    virtual void BeginPlay() override;
    virtual void SetupInputComponent() override;

    void SendMessage(const FText& Text);
    void SendGuess(const FString& Guess);
    void FocusChatInputText();
    void FocusGame();
    void SetUniqueUserName();

    UFUNCTION(Client, Unreliable)
    void StoC_SendMessage(const FString& Message);

    UFUNCTION(Client, Reliable)
    void UpdateResult(const FString& Message);

    UFUNCTION(Client, Reliable)
    void UpdateCount(int32 Remaining);

private:
    UFUNCTION(Server, Unreliable)
    void CtoS_SendMessage(const FString& Message);

    UFUNCTION(Server, Unreliable)
    void CtoS_SendGuess(const FString& Guess);
};