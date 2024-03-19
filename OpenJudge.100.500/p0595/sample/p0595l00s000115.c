#include <stdio.h>

int main() {
	int i, j, a, b, k;
	int x[100][2], xsoe = 0;

	scanf("%d %d %d", &a, &b, &k);

	for (i = 1; i < a; i++) {
		if (a % i == 0 || b % i == 0) {
			x[xsoe][0] = i;
			xsoe++;
		}
	}

	printf("%d\n", x[k - 1][0]);

	return 0;
}