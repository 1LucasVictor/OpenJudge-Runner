#include <stdio.h>
#include <limits.h>

int main(void) 
{
	unsigned int n;
	long long int a[9999];
	unsigned int i;
	long long int min = 1000000;
	long long int max = -1000000;
	long long int sum = 0;
	
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		scanf("%d", a + i);
	}
	
	for(i = 0; i < n; i++)
	{
		if(min > a[i])
		{
			min = a[i];
		}
		if(max < a[i])
		{
			max = a[i];
		}
		sum = sum + a[i];
	}
	printf("%d %d %d\n", min, max, sum);
	return 0;
}