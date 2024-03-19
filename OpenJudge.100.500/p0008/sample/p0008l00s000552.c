#include<stdio.h>
int main(void)
{
	int n,count,i,w;
	count=0;
	while(scanf("%d",&n)!=EOF)
	{
		for(i=2;i<=n;i++)
		{
			w=i-1;
			while(1)
			{
				if(w!=1&&i%w==0)
				{
				break;
				}
				else if(w==1)
				{
					count++;
				break;
				}
				w--;
			}
		}
		printf("%d\n",count);
		count=0;
	}
	return(0);
}