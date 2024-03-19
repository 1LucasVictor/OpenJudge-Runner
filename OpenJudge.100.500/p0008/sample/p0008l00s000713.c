#include<stdio.h>
int main(void)
{
	int i,count;
	int n,j,r;
	
	while(scanf("%d",&n)!=EOF)
	{
		count=0;
		for(i=2;i<=n;i++)
		{
			r=0;
			for(j=1;j<=i;j++)
			{
				if(i%j==0)
				{
					r++;
				}
			}
			if(r==2)
			{
				count++;
			}
		}
		printf("%d\n",count);
	}
	
	return 0;
}