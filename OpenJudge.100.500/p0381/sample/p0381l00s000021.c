#include <stdio.h>

int main(void)
{
	int n, x, A, B, C, count = 0;
	while (1)
	{
		scanf("%d %d", &n, &x);
		if (n == 0 && x == 0)
			break;
			for (A = 1; A <= n; A++)
			{
				for (B = 1; B <= n; B++)
				{
					for (C = 1; C <= n; C++)
					{
						if (A + B + C == x)
						{
							if (A != B && B != C && C != A)
							{
							count++;
							}
						}
					}
				}
			}
	printf("%d\n", count/6);
	count = 0;
	}
	return 0;
}