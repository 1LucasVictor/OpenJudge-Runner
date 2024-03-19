#include <stdio.h>

int main(void)
{
	int n[10000];
	int qty;
	int i;
	int max = -1000001;
	int min = 1000001;
	long sum = 0;
	
	scanf("%d\n",&qty);
	
	for(i=0;i<qty;i++)
	{
		scanf("%d",&n[i]);
	}
	
	for(i=0;i<qty;i++)
	{
		if(max <= n[i])
		{
			max = n[i];
		}
	}
	
	for(i=0;i<qty;i++)
	{
		if(min >= n[i])
		{
			min = n[i];
		}
	}
	
	for(i=0;i<qty;i++)
	{
		sum += (long)n[i];
	}
	
	printf("%d %d %d\n",min,max,sum);
	
	return 0;
}