#include<stdio.h>
void main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	(a>=1&&a<=9&&b>=1&&b<=9)?printf("%d",a*b):printf("-1");	
}