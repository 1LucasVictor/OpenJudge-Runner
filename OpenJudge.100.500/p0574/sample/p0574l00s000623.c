#include <stdio.h>

int main(void)
{
	int s, a, b, c, d;	
	scanf("%d",&s);
	
	a=s/1000;
	b=(s%1000) / 100;
	c=(s%100) /10;
	d=s%10;
	
	if(a==b || b==c || c==d)
	printf("Bad\n");
	else
	printf("Good\n");
	return 0;
}