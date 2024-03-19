#include<stdio.h>
int main(void)
{
	int n,min,max,sum,i,x;
	sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		if(i<n-1)
		{
		scanf("%d ",&x);
		}
		if(i==n-1)
		{
			scanf("%d",&x);
		}
		if(i==0)
		{
			min=x;
			max=x;
		}
		if(max<=x)
		{
			max=x;
		}
		if(min>=x)
		{
			min=x;
		}
		sum=sum+x;
		x=0;
	}
	printf("%d %d %d\n",min,max,sum);
	return 0;
}