#include <stdio.h>

unsigned long long gcd( unsigned long long a, unsigned long long b ) {

	unsigned long long r = 1;

	while ( r != 0 ) {

		r = a % b;
		a = b;
		b = r;

	}

	return a;

}

int main( void ) {

	unsigned long long a, b;

	while ( scanf( "%llu %llu", &a, &b ) != EOF ) {
 
        printf( "%llu %llu\n", gcd( a, b ), a * b / gcd( a, b) );

	}

	return 0;

}