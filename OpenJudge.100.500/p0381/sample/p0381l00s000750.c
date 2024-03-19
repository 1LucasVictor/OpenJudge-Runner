#include <stdio.h>

int main()
{
	int n, x, score;
	int i, j, k, a, b, c;

	while (1)
	{
		score = 0;
		scanf("%d %d", &n, &x);
		if (n == 0 && x == 0)
			break;
		for (i = 0; i < n; i++)
		{
			for (j = 1; j < n - i; j++)
				{
				for (k = 1; k < n - j - i; k++)
				{
					c = n - i - j - k;
					b = n - i - j;
					a = n - i;
					if ((a + b + c) == x)
						score++;
				}
			}
		}
		printf("%d\n", score);
	}
		return 0;
}
