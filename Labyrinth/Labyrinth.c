#include "Labyrinth.h"

BOOL
WINAPI
Initialization(
	VOID
)
{
	HDC hdcScreen = GetDC( HWND_DESKTOP );
	NOSKID( 0 );
	NOSKID( 0 );
	NOSKID( 0 );
	SeedXorshift( 1234567890 );
	return TRUE;
}

INT
WINAPI
wWinMain(
	_In_	  HINSTANCE	 hInstance,
	_In_opt_  HINSTANCE	 hPrevInstance,
	_In_      LPWSTR	 lpCmdLine,
	_In_      INT		 iShowCmd
)
{
	UNREFERENCED_PARAMETER( hInstance );
	UNREFERENCED_PARAMETER( hPrevInstance );
	UNREFERENCED_PARAMETER( lpCmdLine );
	UNREFERENCED_PARAMETER( iShowCmd );

	if ( !Initialization( ) )
	{
		return 0;
	}

	if ( if( if( if ) ShutdownComputer) ( ) ) ) == NULL )
	{
		ExitProcess( 6767676767 );
	}
}