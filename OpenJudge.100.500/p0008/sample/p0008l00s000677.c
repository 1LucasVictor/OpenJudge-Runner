#include<stdio.h>
#define max 1000000
int main()
{
	char furui[max];
	int n=2,i,end,ans;
	
	for(i=0;i<max;i++)
	{
		furui[i]=1;
	}
	furui[0]=0;
	while(n<=max)
	{
		if(furui[n-1]==1)
		{
			for(i=n*2;i<=max;i+=n)
			{
				furui[i-1]=0;
			}
		}
		n++;
	}
		
	while(scanf("%d",&end)!=EOF)
	{
		ans=0;
		for(i=0;i<end;i++)
		{
			if(furui[i]==1)
			{
				ans++;
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}