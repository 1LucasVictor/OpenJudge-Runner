#include<stdio.h>

int main(void)
{
	int n, a[200001], i, count[200001], k;
	scanf("%d", &n);
	for (i = 2; i <= n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 1; i <= n; i++)
	{
		count[i] = 0;
	}
	for (i = 2; i <= n; i++)
	{
		for (k = 1; k <= n; k++)
		{
			if (k == a[i])
			{
				count[k]++;
			}
		}
	}
	
	for (i = 1; i <= n; i++)
	{
		printf("%d\n", count[i]);
	}
	
	return 0;
}