#include "PlayerBPFL.h"

#include "Components/PrimitiveComponent.h"

// TODO: change to take in and set contstraints for all bones to locked
void UPlayerBPFL::LockMesh(class UPrimitiveComponent* mesh)
{
    if (mesh && mesh->GetBodyInstance())
    {
        mesh->GetBodyInstance()->bLockYTranslation = true;
        mesh->GetBodyInstance()->bLockXRotation = true;
        mesh->GetBodyInstance()->bLockZRotation = true;
        mesh->GetBodyInstance()->SetDOFLock(EDOFMode::SixDOF);
    }
}

void UPlayerBPFL::UnLockMesh(class UPrimitiveComponent* mesh)
{
    mesh->GetBodyInstance()->bLockYTranslation = false;
    mesh->GetBodyInstance()->bLockXRotation = false;
    mesh->GetBodyInstance()->bLockZRotation = false;
    mesh->GetBodyInstance()->SetDOFLock(EDOFMode::Default);
}

bool UPlayerBPFL::InEditor()
{
#if WITH_EDITOR
    return true;
#else
    return false;
#endif
}
