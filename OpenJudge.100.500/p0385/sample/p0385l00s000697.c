#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <math.h>

#define ABS(x) ( (x)>0 ? x : -(x) )
#define MIN(x,y) ( (x) < (y) ? (x) : (y) )
#define MAX(x,y) ( (x) > (y) ? (x) : (y) )
#define INF 1000000000

long long int sum_digit(long long int x)
{
	long long int sum = 0;

	while (x > 0)
	{
		sum += x % 10;
		x /= 10;
	}
	return sum;
}

int main()
{
	char x[1000][1001];

	int i, j;
	int count = 0;

	for (i = 0;; i++)
	{
		scanf("%s", x[i]);
		if (x[i][0] == '0')
			break;

		count++;
	}

	int sum = 0;
	for (i = 0; i < count; i++)
	{
		sum = 0;
		for (j = 0; j < strlen(x[i]); j++)
		{
			sum += x[i][j] - '0';
		}
		printf("%d\n", sum);
	}

	return 0;
}

