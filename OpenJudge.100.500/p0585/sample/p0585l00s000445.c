#include <stdio.h>

int main(void) {
	int a, b, t;
	scanf("%d %d %d", &a, &b, &t);
	if (a > t) {
		printf("0\n");
		return 0;
	}
	int i;
	int count = 0;
	int base = a;
	for (i = 1; i < t; i++) {
		a = base * i;
		if (a <= t) {
			count++;
		} else {
			break;
		}
	}
	printf("%d\n", b * count);
	return 0;
}
