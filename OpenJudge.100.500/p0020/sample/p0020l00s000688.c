#include <stdio.h>

int main( void ) {

	int n;
	double x[4], y[4];

	scanf( "%d", &n );

	while ( n-- ) {

		scanf( "%lf %lf %lf %lf %lf %lf %lf %lf", &x[0], &y[0], &x[1], &y[1], &x[2], &y[2], &x[3], &y[3] );

		if ( ( y[0] - y[1] ) * ( x[2] - x[3] ) == ( y[2] - y[3] ) * ( x[0] - x[1] ) ) {

			printf( "YES\n" );

		} else {

			printf( "NO\n" );

		}

	}

	return 0;

}