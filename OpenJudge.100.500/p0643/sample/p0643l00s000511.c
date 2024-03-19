#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d%d", &a, &b);
	c = a*b;
	c %= 2;
	if(c == 0)
	printf("Even");
	else
	printf("Odd");
	
	return 0;
}