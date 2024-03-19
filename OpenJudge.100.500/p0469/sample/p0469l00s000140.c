#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	int a, b, k;

	scanf("%d", &k);
	scanf("%d%d", &a, &b);

	int i;
	for (i = a; i <= b; i++) {
		if (i%k == 0) {
			printf("OK\n");
			break;
		}
	}
	if (b == i - 1) printf("NG\n");

	return 0;
}