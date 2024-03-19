#include <stdio.h>
#include <math.h>

int max(int a, int b) {
	return a > b ? a : b;
}

int min(int a, int b) {
	return a < b ? a : b;
}

int main() {

	int i;
	int num;
	int value;

	int min_value = 1000000000;
	int profit = -100000000;

	scanf("%d", &num);

	//data = (int *)malloc(sizeof(int) * num);

	for (i = 0; i < num; i++) {
		scanf("%d", &value);

		min_value = min(min_value, value);
		if (min_value != value) {
			profit = max(profit, value - min_value);
		}

	}


	printf("%d\n", profit);

	return 0;
}