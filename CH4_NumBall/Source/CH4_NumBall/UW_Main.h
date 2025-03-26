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

    UFUNCTION()
    void OnRestartClicked();

    UFUNCTION(BlueprintCallable)
    void AddChatMessage(const FString& Message);

    UFUNCTION(BlueprintCallable)
    void UpdateResult(const FString& Message);

    UFUNCTION(BlueprintCallable)
    void UpdateCount(int32 Remaining);

    TSharedPtr<SWidget> GetChatInputTextObject();

private:
    UPROPERTY(meta = (BindWidget))
    class UButton* Restart;

    UPROPERTY(meta = (BindWidget))
    class UTextBlock* Result;

    UPROPERTY(meta = (BindWidget))
    class UTextBlock* Count;

    UPROPERTY(meta = (BindWidget))
    class UUW_Chat* WB_Chat;

    UPROPERTY(meta = (BindWidget))
    class UTextBlock* ButtonText;
};