#include<stdio.h>

#define n_MAX (int) 100
#define ai_MAX (int) 999
#define ai_MIN (int) 0

void Call(int n);

int main(void)
{
	int n, a[ n_MAX ];
	
	if( scanf( "%d", &n ) == 1 )
	{
		if( n <= n_MAX )
		{
			for( int i = 0; i < n; i++ )
			{
				if( scanf( "%d", &a[ i ] ) == 1 )
				{
					if( ( a[ i ] < ai_MIN ) && ( a[ i ] > ai_MAX ) )
					{
						return -1;
					}
				}
				else
				{
					return -1;
				}
			}
		}
		else
		{
			return -1;
		}
	}
	else
	{
		return -1;
	}
	
	for( int j = n-1; j > 0; j-- )
	{
		printf( "%d ", a[j] );
	}
	printf( "%d\n", a[0] );
	
	return 0;
}