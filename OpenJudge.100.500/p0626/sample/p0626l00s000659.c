#include <stdio.h>

int main(void)
{
	int d, n, i, t = 1, a = 0;
	scanf("%d%d", &d, &n);
	for (i = 0; i < d; i++)t *= 100;
	for (i = 0;; i++) {
		if (i%t == 0) a++;
		if (a == n + 1) break;
	}
	printf("%d\n", i);
	return 0;
}