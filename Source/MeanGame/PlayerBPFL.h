#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PlayerBPFL.generated.h"

UCLASS()
class MEANGAME_API UPlayerBPFL : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "Player", meta = (Keywords = "LockMesh"))
        static void LockMesh(class UPrimitiveComponent* mesh);

    UFUNCTION(BlueprintCallable, Category = "Player", meta = (Keywords = "UnlockMesh"))
        static void UnLockMesh(class UPrimitiveComponent* mesh);

    UFUNCTION(BlueprintPure, Category = "Player", meta = (Keywords = "Editor"))
        static bool InEditor();
};
