#include <stdio.h>

void InputNumber(int* number, int limitLow, int limitHigh);
void call(int n);

int main(void) {
	int n;

	InputNumber(&n, 3 , 10000);
	call(n);
}

void InputNumber(int* number, int limitLow, int limitHigh) {
	int x;
	do {
		scanf("%d", &x);
	} while (x < limitLow || x > limitHigh);
	*number = x;
}

void call(int n) {
	int i;
	int x;

	for (i = 1; i <= n; i++) {
		if (i % 3 == 0) {
			printf(" %d", i);
			continue;
		}

		for (x = i; x > 0; x /= 10) {
			if (x % 10 == 3) {
				printf(" %d", i);
				break;
			}
		}
	}
	printf("\n");
}
