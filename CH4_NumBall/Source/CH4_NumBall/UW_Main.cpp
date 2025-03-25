#include "UW_Main.h"
#include "UW_Chat.h"
#include "Main_GM.h"
#include "Kismet/GameplayStatics.h"

void UUW_Main::NativeConstruct()
{
    Super::NativeConstruct();
    Restart->OnClicked.AddDynamic(this, &UUW_Main::OnRestartClicked);
    UpdateCount(3); // 초기값 설정

    // 클라이언트 Restart 비활성화
    if (!GetOwningPlayer()->HasAuthority())
    {
        Restart->SetIsEnabled(false);
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