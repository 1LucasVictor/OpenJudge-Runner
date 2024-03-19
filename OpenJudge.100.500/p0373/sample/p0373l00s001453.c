#include <stdio.h>

int main( void )
{
	int H;
	int W;
	int loop1;
	int loop2;

	while( 1 ){
		scanf( "%d %d", &H, &W );
		if( ( 0 == H ) && ( 0 == W ) ) {
			break;
		}

		for ( loop1 = 0; loop1 < H; loop1++ ) {
			for ( loop2 = 0; loop2 < W; loop2++ ) {
				if ( ( 0 == loop1 ) || ( ( H - 1 ) == loop1 ) ) {
					printf("#");
				} else {
					if ( ( 0 == loop2 ) || ( ( W - 1 ) == loop2 ) ) {
						printf( "#" );
					} else {
						printf( "." );
					}
				}
			}
			printf("\n");
		}
		printf( "\n" );

	}

	return ( 0 );
}