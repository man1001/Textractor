#pragma once

// host.h
// 8/23/2013 jichi
// Branch: ITH/IHF.h, rev 105

#define DLLEXPORT __declspec(dllexport)
#include "hookman.h"
#include "../vnrhook/include/types.h"
#include <string>

DLLEXPORT void OpenHost();
DLLEXPORT bool StartHost();
DLLEXPORT void CloseHost();
DLLEXPORT void GetHostHookManager(HookManager **hookman);
DLLEXPORT bool InjectProcessById(DWORD pid, DWORD timeout = 5000);
DLLEXPORT bool DetachProcessById(DWORD pid);
DLLEXPORT bool InsertHook(DWORD pid, const HookParam *hp, std::string name = "");
DLLEXPORT bool RemoveHook(DWORD pid, DWORD addr);

// EOF
