#include <stdio.h>

double round( double, int );

int main( void ) {
	int a, b, c, d, e, f;

	while ( scanf( "%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f ) == 6 )
		printf( "%.3f %.3f\n", round( ( c * e - b * f ) / ( a * e - b * d ), 4 ), round( ( - c * d + a * f ) / ( a * e - b * d ), 4 ) );

	return 0;
}

// 小数第digit位を四捨五入する（小数第digit-1位までの概数で表す）
double round( double x, int digit ) {
	int i;

	for ( i = 0; i < digit - 1; i++ )
		x *= 10.0;

	if ( x > 0 )
		x = (double)(int)( x + 0.5 );
	else
		x = (double)(int)( x - 0.5 );

	for ( i = 0; i < digit - 1; i++ )
		x /= 10.0;

	return x;
}