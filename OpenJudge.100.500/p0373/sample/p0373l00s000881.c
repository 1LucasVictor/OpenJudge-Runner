
#include <stdio.h>

int main(){


	int h, w, x, y;


	while(1){

		scanf( "%d %d", &h, &w );

		if( h==0 && w==0 ) break;

		for( x=0; x<w; x++ ) printf( "#" );
		printf( "\n" );

		for( y=1; y<(h-1); y++ ){

			printf( "#" );

			for( x=1; x<(w-1); x++){
				printf( "." );
			}

			printf( "#\n" );
		}

		for( x=0; x<w; x++ ) printf( "#" );
		printf( "\n\n" );

	}


	return 0;

}