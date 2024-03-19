#include <stdio.h>

int main( void ) {
	int i, n;
	double debt = 100000;

	scanf( "%d", &n );

	for ( i = 0; i < n; i++ ) {
		debt *= 1.05;

		if ( debt / 1000 > (int)debt / 1000 )
			debt = ( (int)debt / 1000 + 1 ) * 1000;
	}

	printf( "%.0f\n", debt );

	return 0;
}