#include <stdio.h>

int main( void ) {

	int n, a[5000], i, j, sum, max;

	while ( scanf( "%d", &n ) && n != 0 ) {

		max = 0;

		for ( i = 0; i < n; i++ ) { scanf( "%d", &a[i] ); }

		for ( i = 0; i < n; i++ ) {

			sum = 0;

			for ( j = i; j < n; j++ ) {

				sum += a[j];

				if ( sum > max ) { max = sum; }

			}

		}

		printf( "%d\n", max );

	}

	return 0;

}