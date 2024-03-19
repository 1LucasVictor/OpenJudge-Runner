#include <stdio.h>

int main() {
	int a, e, k;

	scanf("%d %d %d", &a, &e, &k);

	if (k > e - a) {
		printf("Yay!");
	}
	else {
		printf(":(");
	}

	return 0;
}