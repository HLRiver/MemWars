#pragma once

#include <windows.h>
#include <string>
#include <vector>
#include "../SPIAttackProvider/Client/SPIAttackProvider.h"
#include "../AttackProvider/AttackProvider.h"
#include "../../Core/MemWarsServicesCore.h" // GetProcessHandleByName

class ValueFinder {
public:
    BOOL Init(string attackMethod, wstring targetProcess, wstring pivotProcess = L"");
    vector<void*> FindValueUsingVirtualQuery(void* value, const SIZE_T size, HANDLE hProcess = NULL);
    void RemoveNotMatchingValues(vector<void*>& memPtrs, void* value, SIZE_T size);

    ~ValueFinder() {
        delete attackProvider;
    }

protected:
    AttackProvider* attackProvider = NULL;
    string attackMethod;
    wstring targetProcess;
    wstring pivotProcess;
    HANDLE hProcess;
};
