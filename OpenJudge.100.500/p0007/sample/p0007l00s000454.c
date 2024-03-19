#include <stdio.h>

#define MAX_NUMBER	( 9 )

int main( void )
{
	int a;
	int b;
	int c;
	int d;
	
	int n;
	
	int numOfPattern;
	
	while( scanf( "%d", &n ) != EOF )
	{
		numOfPattern = 0;
		for( a = 0; a <= MAX_NUMBER; a++ )
		{
			for( b = 0; b <= MAX_NUMBER; b++ )
			{
				for( c = 0; c <= MAX_NUMBER; c++ )
				{
					for( d = 0; d <= MAX_NUMBER; d++ )
					{
						if( a + b + c + d == n )
						{
							numOfPattern++;
						}
					}
				}
			}
		}
		printf( "%d\n", numOfPattern );
	}
	
	return (0);
}