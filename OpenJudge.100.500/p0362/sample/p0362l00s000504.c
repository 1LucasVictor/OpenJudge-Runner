/*********************************
*include
*********************************/
#include <stdio.h>

/*********************************
*function prototype
*********************************/


/*********************************
*function
*********************************/
int main( void )
{
	int x;
	int y;
	int z;
	
	scanf( "%d %d %d", &x, &y, &z );
	
	if ( ( x < y ) && ( y < z ) ) {
		printf( "Yes\n" );
	} else {
		printf( "No\n" );
	}

	return ( 0 );
}