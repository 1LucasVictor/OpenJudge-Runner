#include <stdio.h>

int main( void ) 
{
	int b[101];
	int a[101][101];
	int res;
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
		res=0;
		for( j=0; j<m; j++ ) {
			res+=a[i][j]*b[j];
		}
		printf( "%d\n", res );
	}

	return 0;
}