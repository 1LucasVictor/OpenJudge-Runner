#include <stdio.h>

int main( void ) 
{
	int b[101];
	int a[101][101];
	int c[101];
	int n,m;
	int i,j;

	scanf( "%d%d", &n, &m );
	for( i=0; i<n; i++ ) {
		for( j=0; j<m; j++ ) {
			scanf( "%d", &a[i][j] );
		}
	}

	for( j=0; j<m; j++ ) {
		scanf( "%d", &b[j] );
	}

	for( i=0; i<n; i++ ) {
		for( j=0; j<m; j++ ) {
			c[i]+=a[i][j]*b[j];
		}
	}	

	for( i=0; i<n; i++ ) {
		printf( "%d", c[i] );
		if( n-1 != i ) {
			printf( "\n" );
		}
	}


	return 0;
}