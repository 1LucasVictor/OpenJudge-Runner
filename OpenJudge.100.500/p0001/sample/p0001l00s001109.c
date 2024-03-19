#include<stdio.h>

int main()
{
	int a,b,sum,count;
	while (scanf("%d%d",&a,&b)!=EOF)
	{
		sum=a+b;
		count=0;
		while (sum>0)
		{
			count++;
			sum=sum/10;
		}
		printf("%d\n",count);
	}
}