#include <stdio.h>

int main( void ) {
	int n, a, b, c, d, sum;

	for ( ; scanf( "%d", &n ) == 1; printf( "%d\n", sum ) ) {
		sum = 0;
		for ( a = 0; a < 10; a++ )
			for ( b = 0; b < 10; b++ )
				for ( c = 0; c < 10; c++ )
					sum += 0 <= ( d = n - a - b - c ) && d <= 9 ;
	}

	return 0;
}