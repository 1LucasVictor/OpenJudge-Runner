#include <stdio.h>

int main() {
	int a, e, k;

	scanf("%d %d %d", &a, &e, &k);

	if (k >= e - a) {
		printf("Yay!\n");
	}
	else {
		printf(":(\n");
	}

	return 0;
}