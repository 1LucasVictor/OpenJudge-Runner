#include<stdio.h>
void main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	(a>=10||b>=10)?printf("-1"):printf("%d",a*b);	
}