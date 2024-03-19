#include <stdio.h>

int main(void)
{
	int n,x,i,j,k,a,b;

	while(1)
	{
		scanf("%d %d",&n,&x);
		if((n==0)&&(x==0))
		{
			break;
		}
		b=0;
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				for(k=1;k<=n;k++)
				{
					if((i==j)||(j==k)||(k==i))
					{}
					else
					{
						a = i+j+k;
						if(a==x)
						{
							b += 1;
						}
					}
				}
			}
		}
		printf("%d\n",b/6);
	}

	return 0;
}