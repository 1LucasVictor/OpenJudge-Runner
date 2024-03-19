#include <stdio.h>

int main(void)
{
	int i, n,max,min,sum;
	scanf("%d",&n);
	
	int a[10000];
	
	for ( i = 0; i < n ; i++ )
	{
		scanf("%d",&a[i]);
	}
	max=-1000000;
	min=1000000;
	sum=0;

//max????????????
	for ( i = 0; i < n ; i++ )
	{
		if(a[i]>=max)
		{
			max=a[i];
		}
	}
	
//min????????????
	for ( i = 0; i < n ; i++ )
	{
		if(a[i]<=min)
		{
			min=a[i];
		}
	}
//sum????????????
	for ( i = 0; i < n ; i++ )
	{
		sum+=a[i];
	}

printf("%d %d %d\n",min,max,sum);

	return 0;
}