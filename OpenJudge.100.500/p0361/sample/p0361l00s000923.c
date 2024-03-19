#include<stdio.h>
int main(void)
{
	int a,b,c,d,e;
	scanf("%d",&a);
	b=a%60;
	c=a/60;
	d=c/60;
	e=c%60;
	printf("%d:%d:%d\n",d,e,b);
	
	return 0;
}