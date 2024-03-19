#include <stdio.h>

#define ARR_LIMIT 10000

void InputNumber(int* number, int limitLow, int limitHigh);
void reverse(int* numArr, int size);

int main(void) {
	int n;
	int idx;
	int number[ARR_LIMIT];

	InputNumber(&n, 0, 100);

	for (idx = 0; idx < n; idx++) {
		InputNumber(&number[idx], 0, 999);
	}

	reverse(number, n);

	for (idx = 0; idx < n - 1; idx++) {
		printf("%d ", number[idx]);
	}
	printf("%d\n", number[idx]);

	return 0;
}

void InputNumber(int* number, int limitLow, int limitHigh) {
	int x;
	do {
		scanf("%d", &x);
	} while (x < limitLow || x > limitHigh);
	*number = x;
}

void reverse(int* numArr, int size) {
	int front = 0;
	int back = size - 1;
	int idx;

	for (idx = 0; idx < size / 2; idx++) {
		int tmp = *(numArr + front);
		*(numArr + front) = *(numArr + back);
		*(numArr + back) = tmp;
		front++;
		back--;
	}
}
