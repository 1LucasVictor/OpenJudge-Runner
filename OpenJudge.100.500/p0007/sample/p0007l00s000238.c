#include<stdio.h>
int main(void)
{
	int i,j,a,b;
	int n=1;
	int count=0;
	while(scanf("%d",&n)!=EOF)
	{
		count=0;
		for(i=0;i<=9;i++)
		{
			for (j=0;j<=9;j++)
			{
				for (a=0;a<=9;a++)
				{
					for (b=0;b<=9;b++)
					{
						if (n-a-b-i-j==0)
						{
							count++;
						}
					}
				}
			}
		}
		printf("%d\n",count);
	}
	return 0;
}