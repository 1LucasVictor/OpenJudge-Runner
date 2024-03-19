#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <math.h>

#define ABS(x) ( (x)>0 ? x : -(x) )
#define MIN(x,y) ( (x) < (y) ? (x) : (y) )
#define MAX(x,y) ( (x) > (y) ? (x) : (y) )
#define INF 1000000000

int main()
{
	int n[100], x[100];
	int count = 0;
	int i, j,k;

	for (i = 0;; i++)
	{
		scanf("%d%d", &n[i], &x[i]);
		if (n[i] == 0 && x[i] == 0)
			break;

		count++;
	}

	int h;
	int sum = 0;

	for (h = 0; h < count; h++)
	{
		sum = 0;
		for (i = 1; i <= n[h]-2; i++)
		{
			for (j = i+1; j <= n[h]-1; j++)
			{
				for (k = j+1; k <= n[h]; k++)
				{
					if (i + k + j == x[h])
						sum++;
				}
			}
		}
		printf("%d\n", sum);
	}
	return 0;
}
