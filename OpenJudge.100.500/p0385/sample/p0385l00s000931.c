#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int i;
	while (1) {
		scanf("%d", &i);
		if (i == 0) {
			break;
		}
		int sum = 0;

		for (int x = 0; x < 4; x++) {
			sum += i % 10;
			i /= 10;
		}

		printf("%d\n", sum);
	}
	return 0;
}
