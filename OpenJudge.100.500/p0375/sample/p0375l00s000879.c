#include <stdio.h>

int main( void )
{
	int n,x;
	int number;
	
	scanf( "%d", &n );
	
	for( number = 1; number <= n; number++ )
	{
		x = number;
		
		if( x % 3 == 0 )
		{
			printf( " %d", number );
		}else
		{
			while( x != 0 )
			{
				if( x % 10 == 3 )
				{
					printf( " %d", number );
					break;
				}
				x = x / 10;
			}
		}
	}
	
	printf( "\n" );
	
	return 0;
}