#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// cl /EHsc xxxx.c
int main(int arc, char *argv[])
{
	int n, i;
	long a;
	long min, max, sum;
	
	min = 0;
	max = 0;
	sum = 0;
	
	scanf("%d", &n);
	
	for (i = n; i > 0; i--)
	{
		scanf("%ld", &a);
		if (i == n || a < min)
		{
			min = a;
		}
		if (i == n || a > max)
		{
			max = a;
		}
		sum += a;
	}
	printf("%ld %ld %ld\n", min, max, sum);
	
	return 0;
}