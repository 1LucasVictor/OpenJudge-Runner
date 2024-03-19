#include<stdio.h>

int main(void)
{
	int a, b, c, d;
	scanf("%d %d %d", &a, &b, &c);
	while ((a> b) || (b>c)||(a>c))
	{

		if (a > b)
		{
			d = a;
			a = b;
			b = d;
		}
		if (b > c)
		{
			d = b;
			b = c;
			c = d;
		}
		if (a > c)
		{
			d = a;
			a = c;
			c = d;
		}
	}
	printf("%d %d %d\n", a, b, c);
	return 0;
}
