#include <stdio.h>

int cut(int n, int k) {
	int i;

	for (i = 0; i < k; i++) {
		n = n / 10;
	}
	return n;
}

int main(void)
{
	int a[5], i, n, k=10;

	scanf("%d", &n);

	for (i = 0; i < 4; i++) {
		a[i] = cut(n, i) % 10;
    }

	for (i = 0; i < 3; i++) {
		if (a[i] == a[i + 1]) {
			printf("Bad");
			break;
		}
	}

	if (i == 3)
		printf("Good");

	return 0;
}