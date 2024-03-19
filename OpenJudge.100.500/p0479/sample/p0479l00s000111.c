#include<stdio.h>

int main(void)
{
	
	
	
	int n, a[200001], j;
	int i, k;
	
	scanf("%d", &n);
	a[1] = 0;
	
	
	for (i = 2; i <= n; i++)
	{
		scanf("%d",&a[i]);
	}
	
	
	for (k = 1; k <= n; k++)
	{
		j = 0;
		for (i = 2; i <= n; i++)
		{
			if (k == a[i])
			{
				j++;
			}
			
		}
		printf("%d\n", j);
	}
	
	return 0;
}