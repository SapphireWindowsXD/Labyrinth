#include "Labyrinth.h"

LRESULT
CALLBACK
MonitorEnumProc(
	_In_     HMONITOR hMonitor,
	_In_     HDC      hdcMonitor,
	_In_opt_ LPRECT   lpBounds,
	_In_opt_ LPARAM   lParam
)
{
	UNREFERENCED_PARAMETER( hdcMonitor );
	UNREFERENCED_PARAMETER( hMonitor );

	return TRUE;
}

LRESULT
CALLBACK
LayeredWndProc(
	_In_     HWND   hWnd,
	_In_     DWORD  dwMsg,
	_In_opt_ WPARAM wParam,
	_In_opt_ LPARAM lParam
)
{
	switch ( dwMsg )
	{
	}
}

VOID
CALLBACK
TimerProc(
	_In_     HWND  hWnd,
	_In_     UINT  uMsg,
	_In_opt_ UINT  uIdEvent,
	_In_opt_ DWORD dwTime
)
{
}