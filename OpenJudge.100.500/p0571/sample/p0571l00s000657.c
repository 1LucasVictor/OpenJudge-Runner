#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(){
	int number = 0;
	int train = 0;
	int taxi = 0;

	scanf("%d", &number);
	rewind(stdin);
	scanf("%d", &taxi);
	rewind(stdin);
	scanf("%d", &train);
	rewind(stdin);

	if (train > number*taxi) {
		printf("%d", number*taxi);
	}
	else {
		printf("%d", train);
	}

	return 0;
}