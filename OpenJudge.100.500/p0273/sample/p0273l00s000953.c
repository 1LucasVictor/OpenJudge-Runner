#include<stdio.h>

int arry[ 44 ] ;

int main()
{
	int n ;
	scanf( "%d" ,&n ) ;
	arry[ 0 ] = arry[ 1 ] = 1 ;

	int i = 1 ;
	while( i++ < n )
		arry[ i ] =  arry[ i - 1 ] + arry[ i - 2 ] ;

	printf( "%d\n" ,arry[ n ] ) ;
	return 0 ;
}