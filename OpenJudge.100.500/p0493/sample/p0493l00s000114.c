#include<stdio.h>
int main()
{
	int x,a,b;
	scanf("%d",&x);
	a=x/500;
	x=x%500;
	b=x/5;
	printf("%d\n",a*1000+b*5);
	return 0;
}
