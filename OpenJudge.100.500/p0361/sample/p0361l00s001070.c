#include<stdio.h>

int main(void)
{
	int a,b,c,d;
	scanf("%d", &a);
	b = a / 3600;
	c = (a - 3600 * b) / 60;
	d = (a - (3600 * b + 60 * c));
	printf("%d:%d:%d\n", b, c, d);
	return 0;
}