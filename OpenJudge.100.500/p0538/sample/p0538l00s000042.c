#include<stdio.h>
void main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	if(a>=1&&a<=9&&b>=1&&b<=9)
		printf("%d",a*b);
	else
		printf("-1");
}