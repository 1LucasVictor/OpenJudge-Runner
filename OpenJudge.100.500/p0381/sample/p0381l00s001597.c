#include <stdio.h>

int main( void ) 
{
	int n,x;
	int i,j,k;
	int count;
	
	while( 1 ) {
		scanf( "%d%d", &n, &x );
		if( 0==n && 0==x ) { break; }

		count=0;
		for( i=1; i<=n; i++ ) {
			for( j=i+1; j<=n; j++ ) {
				for( k=j+1; k<=n; k++ ) {
					if( x==(i+j+k) ) {
						count++;
					}
				}
			}
		}
		printf( "%d\n", count );
	}

	return 0;
}