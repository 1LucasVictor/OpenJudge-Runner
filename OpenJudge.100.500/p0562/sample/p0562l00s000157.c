#include <stdio.h>

int main() {
	int a, b, k;

	scanf("%d%d", &a, &b);
	for (k = 1; ; k++)
		if ((k * a) - (k - 1) >= b)
			break;
	printf("%d\n", k);
	return 0;
}
