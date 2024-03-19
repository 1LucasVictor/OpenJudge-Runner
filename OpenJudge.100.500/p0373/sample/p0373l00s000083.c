#include <stdio.h>

typedef struct tagS_RECTANGLE {
	int H;
	int W;
} S_RECTANGLE;

int main( void )
{
	S_RECTANGLE sRectangle;
	int i;
	int j;

	while( 1 ){
		scanf( "%d %d", &sRectangle.H, &sRectangle.W );
		if( sRectangle.H == 0 && sRectangle.W == 0 ){
			break;
		}
		for( i = 0; i < sRectangle.H; i++ ){
			for( j = 0; j < sRectangle.W; j++ ){
				if( i == 0					||
					i == sRectangle.H - 1	||
					j == 0					||
					j == sRectangle.W - 1 ){
					printf("#");
				}else{
					printf(".");
				}
			}
			printf("\n");
		}
		printf("\n");
	}

	return 0;
}