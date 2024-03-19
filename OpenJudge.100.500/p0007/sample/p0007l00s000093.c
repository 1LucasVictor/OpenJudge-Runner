#include<stdio.h>

int main(void)
{
	int n, i, j, k, l;
	int ans=0;
	
	while(scanf("%d",&n)!=EOF)
	{
		for(i=1;i<10;i++)
		{
			for(j=1;j<10;j++)
			{
				for(k=1;k<10;k++)
				{
					for(l=1;l<10;l++)
					{
						if(i+j+k+l==n)
							ans++;
					}
				}
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}