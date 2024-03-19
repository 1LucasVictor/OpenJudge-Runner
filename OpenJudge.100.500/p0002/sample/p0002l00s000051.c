#include <stdio.h>

int checkRightTriangle( int a, int b, int c )
{
	int i;
	int buf;
	
	do
	{
		if( a < b )
		{
			buf = a;
			a = b;
			b = buf;
		}
		
		if( b < c )
		{
			buf = b;
			b = c;
			c = buf;
		}
	}while( a < b || b < c );
	
	if( ( a * a ) == ( b * b ) + ( c * c ) )
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int main( void )
{
	int a;
	int b;
	int c;
	int numOfDataSet;
	int i;
	
	scanf( "%d", &numOfDataSet );
	for( i = 0; i < numOfDataSet; i++ )
	{
		scanf( "%d%d%d", &a, &b, &c );
		if( checkRightTriangle( a, b, c ) )
		{
			printf( "YES\n" );
		}
		else
		{
			printf( "NO\n" );
		}
	}
	
	return (0);
}