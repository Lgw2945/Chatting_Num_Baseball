#include "UW_Main.h"
#include "UW_Chat.h"
#include "Main_GM.h"
#include "Kismet/GameplayStatics.h"

void UUW_Main::NativeConstruct()
{
    Super::NativeConstruct();
    Restart->OnClicked.AddDynamic(this, &UUW_Main::OnRestartClicked);
    UpdateCount(3); // 초기 카운트

    // 클라이언트 Restart 비활성화
    if (!GetOwningPlayer()->HasAuthority())
    {
        Restart->SetIsEnabled(false);
        Restart->SetVisibility(ESlateVisibility::Hidden);
    }

    AMain_GM* GM = Cast<AMain_GM>(UGameplayStatics::GetGameMode(GetWorld()));
    if (GM && ButtonText)
    {
        if (GM->bGameStarted)
        {
            ButtonText->SetText(FText::FromString("Restart"));
        }
        else
        {
            ButtonText->SetText(FText::FromString("Start"));
        }
    }
}

TSharedPtr<SWidget> UUW_Main::GetChatInputTextObject()
{
    return WB_Chat->GetChatInputTextObject();
}

void UUW_Main::AddChatMessage(const FString& Message)
{
    WB_Chat->AddChatMessage(Message);
}

void UUW_Main::UpdateResult(const FString& Message) // result
{
    Result->SetText(FText::FromString(Message));
}

void UUW_Main::UpdateCount(int32 Remaining) //count
{
    Count->SetText(FText::FromString(FString::Printf(TEXT("Attempts left: %d"), Remaining)));
}

void UUW_Main::OnRestartClicked() //restart
{
    AMain_GM* GM = Cast<AMain_GM>(UGameplayStatics::GetGameMode(GetWorld()));
    if (GM)
    {
        GM->RestartGame();
    }
}