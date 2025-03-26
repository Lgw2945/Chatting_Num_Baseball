#include "Main_GM.h"
#include "Player_Base.h"
#include "Main_HUD.h"
#include "Main_PC.h"
#include "Kismet/GameplayStatics.h"

AMain_GM::AMain_GM()
{
    DefaultPawnClass = APlayer_Base::StaticClass();
    PlayerControllerClass = AMain_PC::StaticClass();
    HUDClass = AMain_HUD::StaticClass();

    PlayerAttempts.Empty();
    bGameEnded = false;
    bGameStarted = false;
}

void AMain_GM::BeginPlay()
{
    Super::BeginPlay();
    //GenerateSecretNumber();
}

void AMain_GM::GenerateSecretNumber()
{
    TArray<int32> Selected;
    while (Selected.Num() < 3)
    {
        int32 Num = FMath::RandRange(1, 9);
        if (!Selected.Contains(Num)) // �ߺ� üũ
        {
            Selected.Add(Num);
        }
    }
    SecretNumber = FString::Printf(TEXT("%d%d%d"), Selected[0], Selected[1], Selected[2]); // 3�ڸ� ���ڿ��� ��ȯ
    BroadcastMessage("New game started!"); // ���� ���� �޽��� ��ε�ĳ��Ʈ

    FString LogMessage = TEXT("Selected Numbers: ");
    for (int32 Num : Selected)
    {
        LogMessage += FString::Printf(TEXT("%d "), Num);
    }
    UE_LOG(LogTemp, Warning, TEXT("%s"), *LogMessage);

}

void AMain_GM::ProcessGuess(APlayerController* Player, const FString& Guess)
{
    if (!PlayerAttempts.Contains(Player))
    {
        PlayerAttempts.Add(Player, 3); //��ȸ
    }

    if (PlayerAttempts[Player] <= 0)
    {
        BroadcastMessage(FString::Printf(TEXT("%s has no Chance."), *Player->GetName()));
        return;
    }

    PlayerAttempts[Player]--;

    int32 S = 0, B = 0;
    for (int32 i = 0; i < 3; i++)
    {
        if (Guess[i] == SecretNumber[i])
        {
            S++;
        }
        else if (SecretNumber.Contains(FString(1, &Guess[i])))
        {
            B++;
        }
    }

    FString Result = FString::Printf(TEXT("%dS %dB"), S, B);
    AMain_PC* PlayerPC = Cast<AMain_PC>(Player);
    if (PlayerPC)
    {
        PlayerPC->UpdateCount(PlayerAttempts[Player]);
    }

    if (S == 3)
    {
        BroadcastMessage(FString::Printf(TEXT("%s wins with %s!"), *Player->GetName(), *Guess));
        EndGame(Player);
        SecretNumber.Empty();
        bGameEnded = true;
        return; // ī��Ʈ 0 ����� Ż�� (draw��)
    }
    else
    {
        BroadcastMessage(FString::Printf(TEXT("%s - %s"), *Guess, *Result)); //0S0B ���

        if (PlayerAttempts[Player] == 0)
        {
            BroadcastMessage(FString::Printf(TEXT("%s is out of Chance."), *Player->GetName()));
        }
    }

    if (bGameEnded) // �߰� ���� ����
    {
        return;
    }

    bool AllPlayersOut = true;
    for (auto& Elem : PlayerAttempts)
    {
        if (Elem.Value > 0)
        {
            AllPlayersOut = false;
            break;
        }
    }
    if (AllPlayersOut)
    {
        BroadcastMessage("Draw!");
        EndGame(nullptr);
    }
}

void AMain_GM::BroadcastMessage(const FString& Message)
{
    TArray<AActor*> OutActors;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), APlayerController::StaticClass(), OutActors);
    for (AActor* Actor : OutActors)
    {
        AMain_PC* PC = Cast<AMain_PC>(Actor);
        if (PC)
        {
            PC->StoC_SendMessage(Message);
        }
    }
}

void AMain_GM::EndGame(APlayerController* Winner)
{
    for (auto& Elem : PlayerAttempts)
    {
        AMain_PC* PC = Cast<AMain_PC>(Elem.Key);
        if (PC)
        {
            PC->UpdateCount(0);

            if (Winner == Elem.Key)
            {
                PC->UpdateResult("You Win!");

                Elem.Value = 0;
            }
            else if (Winner == nullptr)
            {
                PC->UpdateResult("Draw");
            }
            else
            {
                PC->UpdateResult("You Lose");
            }
        }
    }
    bGameStarted = false;
}

void AMain_GM::RestartGame()
{
    GenerateSecretNumber();
    bGameEnded = false;
    bGameStarted = true;

    for (auto& Elem : PlayerAttempts)
    {
        Elem.Value = 3;
        AMain_PC* PC = Cast<AMain_PC>(Elem.Key);
        if (PC)
        {
            PC->UpdateCount(3);
            PC->UpdateResult("");
        }
    }
}