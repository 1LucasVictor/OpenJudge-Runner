#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 5000

int main()
{
	int n, i, j, k;
	int max, sum, ans_count = 0;
	int num[MAX];
	int ans[MAX];

	scanf( "%d", &n );
	while ( n ){
		i = 0;
		j = 0;

		while ( i < n )
		{
			scanf( "%d", &num[i] ); //n????????°????????\???
			i = i + 1;
		}

		max = -10000;
		for ( k = 0; k < n ; k = k + 1 )
		{
			sum = 0;
//			fprintf( stdout, "==========\n" );
			for ( j = k ; j < n ; j = j + 1 )
			{
				sum = sum + num[j];
//				fprintf( stdout, "sum:%d max%d\n", sum, max );
				if ( sum > max )
				{
					max = sum;
				}
			}
		}

		ans[ans_count] = max;
		ans_count = ans_count + 1;
//		fprintf( stdout, "%d\n", max );
		scanf( "%d", &n );
	}

	for ( i = 0 ; i < ans_count ; i = i + 1 )
	{
		fprintf( stdout, "%d\n", ans[i] );
	}

	return 0;
}