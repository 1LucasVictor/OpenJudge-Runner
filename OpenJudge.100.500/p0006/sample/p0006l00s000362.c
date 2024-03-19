#include <stdio.h>

int main( void ) {
	int n, debt = 99999;

	for ( scanf( "%d", &n ); n--; debt = ( (int)( debt * 1.05 ) / 1000 + 1 ) * 1000 ) ;

	printf( "%d\n", debt );

	return 0;
}