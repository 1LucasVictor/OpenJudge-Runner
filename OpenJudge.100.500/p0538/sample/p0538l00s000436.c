#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	if(a<=0||a>=10||b<=0||b>=10)
	{
		printf("-1");
		return 0;
	}
	else
	{
		printf("%d",a*b);
		return 0;
	}
}
