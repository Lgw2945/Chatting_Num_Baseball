#include "Main_PC.h"
#include "Main_GM.h"
#include "MyGameInstance.h"
#include "Main_HUD.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/GameStateBase.h"

void AMain_PC::BeginPlay()
{
    Super::BeginPlay();
    SetShowMouseCursor(true);

    FInputModeGameAndUI InputMode;
    InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock); // 커서 가두지 않기
    InputMode.SetHideCursorDuringCapture(false); // 커서 보이게
    SetInputMode(InputMode);

    SetUniqueUserName();
}

void AMain_PC::SetupInputComponent()
{
    Super::SetupInputComponent();
    InputComponent->BindAction(TEXT("Chat"), EInputEvent::IE_Pressed, this, &AMain_PC::FocusChatInputText);
}

void AMain_PC::SendMessage(const FText& Text)
{
    UMyGameInstance* MyGI = GetGameInstance<UMyGameInstance>();
    if (MyGI)
    {
        FString UserName = MyGI->GetUserName();
        FString Message = FString::Printf(TEXT("%s : %s"), *UserName, *Text.ToString());
        CtoS_SendMessage(Message);
    }
}

void AMain_PC::SendGuess(const FString& Guess)
{
    CtoS_SendGuess(Guess);
}

void AMain_PC::CtoS_SendGuess_Implementation(const FString& Guess)
{
    AMain_GM* GM = Cast<AMain_GM>(GetWorld()->GetAuthGameMode());
    if (GM)
    {
        GM->ProcessGuess(this, Guess);
    }
}

void AMain_PC::FocusChatInputText()
{
    AMain_HUD* HUD = GetHUD<AMain_HUD>();
    if (HUD)
    {
        FInputModeUIOnly InputMode;
        InputMode.SetWidgetToFocus(HUD->GetChatInputTextObject());
        SetInputMode(InputMode);
    }
}

void AMain_PC::FocusGame()
{
    SetInputMode(FInputModeGameOnly());
}

void AMain_PC::SetUniqueUserName() // 이름
{
    UMyGameInstance* MyGI = GetGameInstance<UMyGameInstance>();
    if (MyGI)
    {
        if (HasAuthority()) // 호스트만 가지고 있다함 (true)
        {
            MyGI->SetUserName(TEXT("Host"));
        }
        else
        {
            int32 ClientIndex = 0;
            TArray<AActor*> OutActors;
            UGameplayStatics::GetAllActorsOfClass(GetWorld(), APlayerController::StaticClass(), OutActors);
            for (AActor* Actor : OutActors)
            {
                APlayerController* PC = Cast<APlayerController>(Actor);
                if (PC && !PC->HasAuthority())
                {
                    ClientIndex++;
                    if (PC == this)
                    {
                        break;
                    }
                }
            }
            MyGI->SetUserName(FString::Printf(TEXT("Guest%d"), ClientIndex));
        }
        UE_LOG(LogTemp, Warning, TEXT("Set user name to: %s"), *MyGI->GetUserName());
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to get GameInstance."));
    }
}

void AMain_PC::CtoS_SendMessage_Implementation(const FString& Message)
{
    TArray<AActor*> OutActors;
    UGameplayStatics::GetAllActorsOfClass(GetPawn()->GetWorld(), APlayerController::StaticClass(), OutActors);
    for (AActor* Actor : OutActors)
    {
        AMain_PC* PC = Cast<AMain_PC>(Actor);
        if (PC)
        {
            PC->StoC_SendMessage(Message);
        }
    }
}

void AMain_PC::StoC_SendMessage_Implementation(const FString& Message)
{
    AMain_HUD* HUD = GetHUD<AMain_HUD>();
    if (HUD)
    {
        HUD->AddChatMessage(Message);
    }
}

void AMain_PC::UpdateResult_Implementation(const FString& Message)
{
    AMain_HUD* HUD = GetHUD<AMain_HUD>();
    if (HUD)
    {
        HUD->UpdateResult(Message);
    }
}

void AMain_PC::UpdateCount_Implementation(int32 Remaining)
{
    AMain_HUD* HUD = GetHUD<AMain_HUD>();
    if (HUD)
    {
        HUD->UpdateCount(Remaining);
    }
}