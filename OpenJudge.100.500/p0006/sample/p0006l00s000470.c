#include <stdio.h>

int main( void ) {
	int n, debt = 100000;

	for ( scanf( "%d", &n ); n--; debt *= 1.05, debt = debt % 1000 ? ( debt / 1000 + 1 ) * 1000 : debt ) ;

	printf( "%d\n", debt );

	return 0;
}