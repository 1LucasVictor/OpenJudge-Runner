#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int number = 0;
	int train = 0;
	int taxi = 0;

	scanf("%d", &number);

	scanf("%d", &train);

	scanf("%d", &taxi);


	if (taxi > (number*train)) {
		printf("%d", (number*train));
	}
	else {
		printf("%d", taxi);
	}

	return 0;
}