#include <stdio.h>
#include <string.h>
#define MAXBUF 21

int main( void ) {
	char format[ MAXBUF ], str[ MAXBUF ];
	int i, len;

	sprintf( format, "%%%ds", MAXBUF );
	scanf( format, str );
	
	len = (int)strlen( str );

	for ( i = len - 1; i >= 0; i-- )
		printf( "%c", (int)str[ i ] );
	putchar( '\n' );

	return 0;
}