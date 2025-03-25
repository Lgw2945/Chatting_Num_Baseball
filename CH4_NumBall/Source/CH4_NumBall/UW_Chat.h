#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Main_PC.h"
#include "UW_Chat.generated.h"

UCLASS()
class CH4_NUMBALL_API UUW_Chat : public UUserWidget
{
    GENERATED_BODY()

public:
    virtual void NativeConstruct() override;
    void AddChatMessage(const FString& Message);
    FText GetChatInputTextMessage();
    void SetChatInputTextMessage(const FText& Text);
    TSharedPtr<class SWidget> GetChatInputTextObject();

private:
    UPROPERTY(Meta = (BindWidget))
    class UScrollBox* ChatHistoryArea;

    UPROPERTY(Meta = (BindWidget))
    class UEditableTextBox* ChatInputText;

    UFUNCTION()
    void OnChatTextCommitted(const FText& Text, ETextCommit::Type CommitMethod);
};