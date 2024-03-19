#include <stdio.h>

int main()
{
	int n,i;
	int a[10000];
	long long int max = -1000000,min = 1000000,sum = 0;
	
	scanf("%d",&n);
	
	for(i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i = 0; i < n; i++)
	{
		if(max < a[i])
		{
			max = a[i];
		}
		if(min > a[i])
		{
			min = a[i];
		}
		sum += a[i];
	}
	
	printf("%d %d %d\n",min,max,sum);
	
	return 0;
}