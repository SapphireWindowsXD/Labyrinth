#pragma once
#include "Labyrinth.h"

LPWSTR
GenerateUnicode(
	_In_ LPWSTR lpBuffer,
	_In_ INT    iLength
);

BOOL
WINAPI
IsWindowsXP(
	VOID
);