#include <stdio.h>

int main(void) 
{
	int a, b, c, n, i;
	long long int d;
	b = -1000000;
	c = 1000000;
	d = 0;
	scanf("%d", &n);

	for (i = 1; i <= n; i = i + 1) 
	{
		scanf("%d", &a);

		if (c > a)
		{
			c = a;
		}
		if (b < a) 
		{ 
			b = a; 
		}

		d = d + a;
	}
	printf("%d %d %ld\n", c, b, d);
	return 0;
}
