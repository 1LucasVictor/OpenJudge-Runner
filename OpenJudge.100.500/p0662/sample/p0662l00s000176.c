#include<stdio.h>
int main()
{
	int a,b,c,d,x;
	while(scanf("%d %d %d %d",&a,&b,&c,&d)!=EOF)
	{
		if(b<=c||b<=a)
		printf("0\n");
		else if(a<=c)
		{
			x=b>d?d:b;
			printf("%d\n",x-c);
		}
		else if(a>c)
		{
			x=d>b;b:d;
			printf("%d\n",x-a);
		}
	}
	return 0;
}