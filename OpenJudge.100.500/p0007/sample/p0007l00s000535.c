#include<stdio.h>
int main()
{
	int a,b,c,d,N,n,sum;
	while(scanf("%d",&n)!=EOF)
	{
		sum=0;N=0;
		for(a=0;a<=9;a++)
		{
			for(b=0;b<=9;b++)
			{
				for(c=0;c<=9;c++)
				{
					for(d=0;d<=9;d++)
					{
						sum=a+b+c+d;
						if(sum==n)
							N++;
					}
				}
			}
		}
		
		printf("%d\n",N);
	}
	return 0;
}