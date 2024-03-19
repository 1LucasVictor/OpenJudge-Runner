#include <stdio.h>

int
main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	int n;
	int n_divisor = 0;
	for (n = a; n <= b; n++)
	{
		if (c % n == 0)
		{
			n_divisor++;
		}
	}
	printf("%d\n", n_divisor);

	return 0;
}