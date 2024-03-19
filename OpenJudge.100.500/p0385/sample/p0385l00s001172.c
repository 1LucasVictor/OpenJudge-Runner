#include <stdio.h>

int main() {
	int x[4];

	while (1) {
		scanf("%d", &x[0]);

		if (x[0] == 0) {
			break;
		}

		x[3] = x[0] % 10000 / 1000;
		x[2] = x[0] % 1000 / 100;
		x[1] = x[0] % 100 / 10;
		x[0] = x[0] % 10;

		printf("%d\n", x[0] + x[1] + x[2] + x[3]);
	}

	return 0;
}
