#include<stdio.h>
int main(void)
{
	int a, b, c;
	int xx;
	scanf("%d %d %d", &a, &b, &c);
	if (a > b)
	{
		xx = b;
		b = a;
		a = xx;
	}
	if(b > c)
	{
		xx = c;
		c = b;
		b= xx;
	}
	if (a > b)
	{
		xx = b;
		b = a;
		a = xx;
	}
	printf("%d %d %d\n", a, b, c);
	return 0;
}
