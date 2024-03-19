#include<stdio.h>


int main( void ) 
{
	int a[101];
	int n;
	int i;
	
	scanf( "%d", &n );
	for( i=0; i<n; i++ ) {
		scanf( "%d", &a[i] );
	}
	for( i=n-1; 0<=i; i-- ) {
		printf( "%d", a[i] );
		if( 0 != i ) {
			printf( " " );
		} else {
			printf( "\n" );
		}
	}
	
	return 0;
}