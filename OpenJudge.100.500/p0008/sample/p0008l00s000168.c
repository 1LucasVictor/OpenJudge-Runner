#include<stdio.h>
int main(void)
{
	int n,count,i,w;
	count=1;
	while(scanf("%d",&n)!=EOF)
	{
		for(i=3;i<=n;i++)
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
				else if(i%2==0)
				break;
				w--;
			}
		}
		printf("%d\n",count);
		count=1;
	}
	return(0);
}