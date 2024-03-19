#include<stdio.h>
int main()
{
	int n,s,t,sum,max,d[5000];
	while(scanf("%d",&n) && n)
	{
		max=0;
		for(s=0;s<n;s++)
			scanf("%d",&d[s]);
		for(s=0;s<n;s++)
		{
			sum=0;
			for(t=s;t<n;t++)
			{
				sum+=d[t];
				if(sum > max)
					max=sum;
			}
		}
		printf("%d\n",max);
	}
	return 0;
}