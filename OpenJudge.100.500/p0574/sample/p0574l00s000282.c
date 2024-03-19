#include <stdio.h>

int main() {
	int S, a = -1;

	scanf("%d", &S);

	for (int i = 0; i < 4; i++) {
		if (S % 10 == a) {
			printf("Bad");
			return 0;
		}
		else {
			a = S % 10;
			S = S / 10;
		}
	}

	printf("Good");

	return 0;
}