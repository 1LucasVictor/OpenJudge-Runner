#include<stdio.h>

void gotocall( int n )
{
	int i=1;
	int x;
	
	while(  ++i <= n ) {
		x=i;
		if( 0==(x%3) ) {
			printf( " %d", i );
		} else {
			while( x ) {
				if( 3==(x%10) ) {
					printf( " %d", i );
				}
				x /= 10;
			}
		}
	}
	
	printf( "\n");
	return;
}

int main( void ) 
{
	int n;

	scanf( "%d", &n ); 
	gotocall( n );

	return 0;
}