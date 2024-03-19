#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int number = 0;
	int train = 0;
	int taxi = 0;
	int numberoftaxi = 0;
	int counter = 0;

	scanf("%d", &number);
	rewind(stdin);
	scanf("%d", &train);
	rewind(stdin);
	scanf("%d", &taxi);
	rewind(stdin);

	counter = taxi;

	while (counter >= 4) {
		counter -= 4;
		numberoftaxi += 1;
	}

	if (numberoftaxi*taxi > number*train) {
		printf("%d", (number*train));
	}
	else {
		printf("%d", numberoftaxi*taxi);
	}


	return 0;
}