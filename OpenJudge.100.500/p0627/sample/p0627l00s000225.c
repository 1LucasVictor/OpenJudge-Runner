#include<stdio.h>
int main()
{
	int a,b,max;
	scanf("%d%d",&a,&b);
	max=a+b;
	if(a-b>max)
	    max=a-b;
	if((a*b)>max)
	    max=a*b;
	printf("%d",max);
}