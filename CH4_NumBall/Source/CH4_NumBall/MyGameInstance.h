#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MyGameInstance.generated.h"

UCLASS()
class CH4_NUMBALL_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
    UMyGameInstance();

    UFUNCTION(BlueprintCallable, Category = "Chat")
    FString GetUserName() const { return UserName; }

    UFUNCTION(BlueprintCallable, Category = "Chat")
    void SetUserName(const FString& NewName) { UserName = NewName; }

private:
    UPROPERTY()
    FString UserName;
};
