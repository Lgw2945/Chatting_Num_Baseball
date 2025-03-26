#include "UW_Chat.h"
#include "Components/TextBlock.h"
#include "Components/ScrollBox.h"
#include "Components/EditableTextBox.h"
#include "Main_PC.h"
#include "Main_GM.h"
#include "Kismet/GameplayStatics.h"

void UUW_Chat::NativeConstruct()
{
    Super::NativeConstruct();
    ChatInputText->OnTextCommitted.AddDynamic(this, &UUW_Chat::OnChatTextCommitted);
}

void UUW_Chat::AddChatMessage(const FString& Message)
{
    UTextBlock* NewTextBlock = NewObject<UTextBlock>(ChatHistoryArea);
    NewTextBlock->SetText(FText::FromString(Message));
    ChatHistoryArea->AddChild(NewTextBlock);
    ChatHistoryArea->ScrollToEnd();
}

void UUW_Chat::SetChatInputTextMessage(const FText& Text)
{
    ChatInputText->SetText(Text);
}

TSharedPtr<SWidget> UUW_Chat::GetChatInputTextObject()
{
    return ChatInputText->GetCachedWidget();
}

FText UUW_Chat::GetChatInputTextMessage()
{
    return ChatInputText ? ChatInputText->GetText() : FText::GetEmpty();
}

void UUW_Chat::OnChatTextCommitted(const FText& Text, ETextCommit::Type CommitMethod)
{
    AMain_PC* MyPC = Cast<AMain_PC>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
    if (!MyPC) return;

    FString InputStr = Text.ToString();
    if (CommitMethod == ETextCommit::OnEnter && InputStr.StartsWith("/"))
    {
        FString Guess = InputStr.Mid(1);
        if (Guess.Len() == 3 && Guess.IsNumeric())
        {
            MyPC->SendGuess(Guess);
            SetChatInputTextMessage(FText::GetEmpty());
        }
        else
        {
            AddChatMessage("Invalid guess. EX) '/123'.");
        }
        MyPC->FocusGame();
    }
    else if (CommitMethod == ETextCommit::OnEnter && !Text.IsEmpty())
    {
        MyPC->SendMessage(Text);
        SetChatInputTextMessage(FText::GetEmpty());
        MyPC->FocusGame();
    }
    else if (CommitMethod == ETextCommit::OnCleared)
    {
        MyPC->FocusGame();
    }
}