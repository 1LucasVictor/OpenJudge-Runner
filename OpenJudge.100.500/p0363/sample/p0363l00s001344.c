#include <stdio.h>

int main(void)
{
	int a, b, c;

	scanf("%d%d%d", &a, &b, &c);

	if (a < b && a < c)
	{
		printf("%d ", a);
		if (b < c) printf("%d %d\n", b, c);
		else printf("%d %d\n", c, b);
	}
	else if (a < b || a < c)
	{
		if (b < c) printf("%d %d %d\n", b, a, c);
		else printf("%d %d %d\n", c, a, b);
	}
	else
	{
		if (b < c) printf("%d %d ", b, c);
		else printf("%d %d ", c, b);
		printf("%d\n", a);
	}

	return 0;
}