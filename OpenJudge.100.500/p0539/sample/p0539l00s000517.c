#include <stdio.h>

int check(int N) {
	int x, y;
	for (x = 0; x < 9; x++) {
		for (y = 0; y < 9; y++) {
			if ((x + 1) * (y + 1) == N) {
				return 1;
			}
		}
	}
	return 0;
}

int main() {
	int N;
	scanf("%d", &N);

	if (check(N) == 1) {
		printf("Yes");
	}
	else {
		printf("No");
	}

	return 0;
}