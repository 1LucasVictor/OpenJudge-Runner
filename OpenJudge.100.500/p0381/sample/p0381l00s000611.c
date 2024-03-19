#include <stdio.h>

int main( void )
{
	int n, x;
	int i, j, k, sum, cou;
	int ans[3][100] = {};
	
	while(1)
	{
		cou = 0;
		
		scanf( "%d %d", &n, &x );
		
		if( n < 3 || n == 0 && x == 0 )
		{
			break;
		}else
		{
			for( i = 1; i <= n; i++ )
			{
				sum = 0;
				
				for( j = i + 1; j <= n; j++ )
				{
					for( k = j + 1; k <= n; k++ )
					{
						sum = i + j+ k;
						
						if( sum == x )
						{
							cou++;
						}
					}
				}
			}
			printf( "%d\n", cou );
		}
	}
	
	return 0;
}