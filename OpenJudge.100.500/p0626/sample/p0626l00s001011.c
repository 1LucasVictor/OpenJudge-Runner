#include <stdio.h>

int main() {
	int i, D, N;

	scanf("%d %d", &D, &N);

	if (N != 100) {
		if (D == 0) printf("%d\n", N);
		else if (D == 1) printf("%d\n", N * 100);
		else printf("%d\n", N * 10000);
	}
	else {
		if (D == 0) printf("%d\n", 101);
		else if (D == 1) printf("%d\n", 10001);
		else printf("%d\n", 1000001);
	}

	return 0;
}