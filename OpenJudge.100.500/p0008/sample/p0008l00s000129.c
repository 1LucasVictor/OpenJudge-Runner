#include<stdio.h>
int main()
{
	unsigned long int i,f=0,j,n=0,g=0;

	while(scanf("%d",&n) != EOF)
	{
		f=0;
		for(i=2;i<=n;i++)
		{
			g=0;
			for(j=2;j<i;j++)
			{
				if(i != j && i % j ==0 && g==0)
				{
					g=1;
				}
			}
			if(g==0)
			{
				f++;
			}
		}
		printf("%d\n",f);
	}
	return 0;
}