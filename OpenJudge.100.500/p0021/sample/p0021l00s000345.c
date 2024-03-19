#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 5000

int main()
{
	int n, i, j, k;
	int ans, max, sum;
	int num[MAX];

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
			for ( j = k ; j < n ; j = j + 1 )
			{
				sum = sum + num[j];
				if ( sum > max )
				{
					max = sum;
				}
			}
		}

		fprintf( stdout, "%d\n", max );
		scanf( "%d", &n );
	}

	return 0;
}