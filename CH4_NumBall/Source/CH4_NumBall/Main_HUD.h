#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Main_HUD.generated.h"

UCLASS()
class CH4_NUMBALL_API AMain_HUD : public AHUD
{
    GENERATED_BODY()

public:
    AMain_HUD();
    virtual void BeginPlay() override;

    TSharedPtr<class SWidget> GetChatInputTextObject();
    void AddChatMessage(const FString& Message);
    void UpdateResult(const FString& Message);
    void UpdateCount(int32 Remaining);

private:
    TSubclassOf<class UUW_Main> MainUIClass;
    class UUW_Main* MainUIObject;

    bool CheckUIObject();
    bool CreateUIObject();

    void InitializeHUD();
};