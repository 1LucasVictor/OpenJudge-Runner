#include <stdio.h>

int main( void )
{
	int W, H, x, y, r;
	
	scanf( "%d %d %d %d %d", &W, &H, &x, &y, &r );
	
	if( W - ( x + r ) >= 0 && W - ( x - r ) >= 0 && H - ( y + r ) >= 0 && H - ( y - r ) >= 0 ){
		printf( "Yes\n" );
	}else{
		printf( "No\n" );
	}
	
	
	return 0;
}