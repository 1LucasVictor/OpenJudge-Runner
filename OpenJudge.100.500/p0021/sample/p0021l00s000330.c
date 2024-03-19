#include <stdio.h>

int main( void )
{
	int n;
	int number[ 5000 ];
	int i;
	int j;
	
	int max;
	int ans;
	
	while( 1 )
	{
		scanf( "%d", &n );
		if( n == 0 )break;
		max = 0;
		
		for( i = 0; i < n; i++ )
		{
			scanf( "%d", &number[i] );
			max += number[i];
		}
		for( i = 0; i < n; i++ )
		{
			ans = 0;
			for( j = i; j < n; j++ )
			{
				ans += number[j];
				if( ans > max )
				{
					max = ans;
				}
			}
		}
		printf( "%d\n", max );
		
	}
	
	return (0);
}