#include <stdio.h>

#define MAX_NUMBER	(999999)

int primeFlag[ MAX_NUMBER + 1 ];
int IsPrime( int number );

int main( void )
{
	int num;
	int i;
	
	primeFlag[0] = 0;
	for( i = 1; i <= MAX_NUMBER; i++ )
	{
		primeFlag[i] = primeFlag[ i - 1 ] + IsPrime( i );
	}
	
	while( scanf( "%d", &num ) != EOF )
	{
		if( num == 0 )break;
		printf( "%d\n", primeFlag[ num ] );
	}
	
	return ( 0 );
}

int IsPrime( int number )
{
	int i;
	
	if( number < 2 )
	{
		return ( 0 );
	}
	else if( number == 2 )
	{
		return ( 1 );
	}
	
	if( number % 2 == 0 )
	{
		return ( 0 );
	}
	
	for( i = 3; i * i <= number; i += 2 )
	{
		if( number % i == 0 )
		{
			return ( 0 );
		}
	}
	
	return ( 1 );
}