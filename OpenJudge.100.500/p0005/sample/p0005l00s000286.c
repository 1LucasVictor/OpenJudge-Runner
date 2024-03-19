#include<stdio.h>
#include<string.h>




int main()
{
	char str[ 64 ] ;
	scanf( "%s" ,str ) ;



	int i = strlen( str ) ;
	while( i-- )
	{
		printf( "%c" ,str[ i ] ) ;
	}


	puts( "" ) ;



	return 0 ;
}