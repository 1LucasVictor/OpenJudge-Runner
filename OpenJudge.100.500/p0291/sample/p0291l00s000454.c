#include <stdio.h>

int a[200000];

int main()
{
	long long int max = -20000000000;
	int n, i, j;
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		scanf("%d", a + i);
	}
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < i; j++)
		{
			max = max > a[i] - a[j] ? max : a[i] - a[j]; 
		}
	}
	printf("%d", max);
		
	return 0;
} 
