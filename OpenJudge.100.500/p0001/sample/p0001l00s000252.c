#include <stdio.h>

int nDigits( int );

int main( void ) {
	int a, b;

	while ( scanf( "%d %d", &a, &b ) == 2 )
		printf( "%d\n", nDigits( a + b ) );

	return 0;
}

int nDigits( int x ) {
	int d = 1;

	while ( ( x /= 10 ) > 0 )
		d++;

	return d;
}