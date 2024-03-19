#include <stdio.h>

int main(void)
{
	int n, x;
	int i, j, k;
	int test;

	while (1) {
		scanf("%d %d", &n, &x);

		test = 0;

		if (n == 0 && x == 0)
			break;

		for(i = 1; i < n - 2; i++)
			for(j = i + 1; j <= n - 1; j++)
				for (k = j + 1; k <= n; k++){
					if (i + j + k == x)
						test++;
				}

		printf("%d\n", test);
	}

	return 0;
}