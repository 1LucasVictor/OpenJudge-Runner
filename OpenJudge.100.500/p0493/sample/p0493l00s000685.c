#include<stdio.h>

int main(void)
{
	int num;
	scanf("%d",&num);
	int a = num/500;
	int b = (num-(a*500))/5;
	printf("%d",(1000*a) + (5*b));
	return 0;
}