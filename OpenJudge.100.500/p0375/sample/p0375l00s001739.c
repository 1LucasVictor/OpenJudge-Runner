#include<stdio.h>

int main()
{
	int n,i;
	
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%3==0)printf(" %d",i);
		else
		{
			int s=i;
			while(s)
			{
				if(s%10==3)
				{
					printf(" %d",i);
					break;
				}
				s/=10;
			}
		}
	}
	printf("\n");
	return 0;
}