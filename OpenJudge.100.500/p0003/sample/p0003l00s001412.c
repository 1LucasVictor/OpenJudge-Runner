#include <stdio.h>

int main( void ) {
	double a, b, c, d, e, f;

	for ( ; scanf( "%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f ) == 6; printf( "%.3f %.3f\n", ( c * e - b * f ) / ( a * e - b * d ) + 0.000001, ( -c * d + a * f ) / ( a * e - b * d ) + 0.000001 ) ) ;

	return 0;
}