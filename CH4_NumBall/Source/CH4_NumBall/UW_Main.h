#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "UW_Main.generated.h"

UCLASS()
class CH4_NUMBALL_API UUW_Main : public UUserWidget
{
    GENERATED_BODY()

public:
    virtual void NativeConstruct() override;
    TSharedPtr<class SWidget> GetChatInputTextObject();
    void AddChatMessage(const FString& Message);
    void UpdateResult(const FString& Message);
    void UpdateCount(int32 Remaining);

private:
    UPROPERTY(Meta = (BindWidget))
    class UUW_Chat* WB_Chat;

    UPROPERTY(Meta = (BindWidget))
    class UTextBlock* Result;

    UPROPERTY(Meta = (BindWidget))
    class UTextBlock* Count;

    UPROPERTY(Meta = (BindWidget))
    class UButton* Restart;

    UFUNCTION()
    void OnRestartClicked();
};