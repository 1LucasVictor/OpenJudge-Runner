#include <stdio.h>

int main(void)
{
	int a, b, c, d=0;

	scanf("%d %d %d", &a, &b, &c);

	while (a<=b)
	{
		if (c%a == 0)
		{
			d++;
		}

		a++;
	}

	printf("%d\n", d);

	return 0;
}
