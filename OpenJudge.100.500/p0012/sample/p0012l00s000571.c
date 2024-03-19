#include <stdio.h>

int main( void ) {

	int n, stack[1000], i = 0;

	while (	scanf( "%d", &n ) != EOF ) {

		if ( n == 0 ) {

			i--;
			printf( "%d\n", stack[i] );

		} else {
			
			stack[i] = n;
			i++;
			
		}

	}

	return 0;

}