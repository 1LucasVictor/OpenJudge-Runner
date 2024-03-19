#include<stdio.h>
int main(void)
{
	long int n=0;
	long int i=0,j=0;
	long int flg=0;
	long int count=0;
	while(scanf("%d",&n)!=EOF)
	{
		count=0;
		for (i=2;i<=n;i++)
		{
			flg=0;
			if (i==2||i==3||i==5||i==7)
			{
				count++;
			}
			else if (i%2!=0||i%3!=0||i%5!=0||i%7!=0)
			{
				for (j=2;j<i;j++)
				{
					if (i%j==0)
					{
						flg=1;
						break;
					}
				}
				if (flg==1)
				{
					continue;
				}
				else if (flg==0)
				{
					count++;
				}
			}
		}
		printf("%d\n",count);
	}
	return 0;
}