#include <stdio.h>          // printf(), scanf()
#include <stdbool.h>
#include <limits.h>         // INT_MIN

#define MAX_N 5000

int
main(int argc, char** argv)
{
	int i, j;

	while (true)
	{
		int a[MAX_N];
		int b[MAX_N + 1];
		int n;

		scanf("%d", &n);
		if (n == 0)
			break;

		b[0] = 0;
		for (i = 0; i < n; ++i)
		{
			scanf("%d", &a[i]);
			b[i + 1] = b[i] + a[i];
		}

		int max = INT_MIN;
		for (i = 0; i < n; ++i)
		{
			for (j = i + 1; j <= n; ++j)
			{
				int s = b[j] - b[i];
				if (s > max)
					max = s;
			}
		}

		printf("%d\n", max);
	}

	return 0;
}