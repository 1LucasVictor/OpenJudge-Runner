#include<stdio.h>
int main()
{
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		int sum=0;
		int c;
		c=a+b;
		while (c/10!=0)
		{
			c=c/10;
			sum++;
		}
		sum++;
		printf("%d\n",sum);
	}
	return 0;
} 