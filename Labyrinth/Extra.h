#pragma once
#include "Labyrinth.h"

BOOL
CALLBACK
EnumWindowProc(
	_In_ HWND   hWnd,
	_In_ LPARAM lParam
);

VOID
WINAPI
EnumThread(
	VOID
);

VOID
WINAPI
CursorMove(
	VOID
);