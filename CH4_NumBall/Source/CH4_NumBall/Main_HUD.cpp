#include "Main_HUD.h"
#include "UW_Main.h"

AMain_HUD::AMain_HUD()
{
    static ConstructorHelpers::FClassFinder<UUW_Main> WB_Main(TEXT("WidgetBlueprint'/Game/UI/WB_Main.WB_Main_C'"));
    MainUIClass = WB_Main.Succeeded() ? WB_Main.Class : nullptr;
}

void AMain_HUD::BeginPlay()
{
    Super::BeginPlay();
    CheckUIObject();
    FTimerHandle TimerHandle;
}

TSharedPtr<SWidget> AMain_HUD::GetChatInputTextObject()
{
    return MainUIObject->GetChatInputTextObject();
}

void AMain_HUD::AddChatMessage(const FString& Message)
{
    if (CheckUIObject())
    {
        MainUIObject->AddChatMessage(Message);
    }
}

void AMain_HUD::UpdateResult(const FString& Message)
{
    if (CheckUIObject())
    {
        MainUIObject->UpdateResult(Message);
    }
}

void AMain_HUD::UpdateCount(int32 Remaining)
{
    if (CheckUIObject())
    {
        MainUIObject->UpdateCount(Remaining);
    }
}

bool AMain_HUD::CheckUIObject()
{
    if (!MainUIObject)
    {
        return CreateUIObject();
    }
    return true;
}

bool AMain_HUD::CreateUIObject()
{
    if (MainUIClass)
    {
        //UE_LOG(LogTemp, Waring, TEXT("123"));
        MainUIObject = CreateWidget<UUW_Main>(GetOwningPlayerController(), MainUIClass);
        if (MainUIObject)
        {
            MainUIObject->AddToViewport();
            return true;
        }
    }
    return false;
}