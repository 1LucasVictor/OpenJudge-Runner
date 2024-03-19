#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int n;

	scanf("%d", &n);

	if (n%10 == 3) {
		printf("bon");
	}

	else if (n % 10 == 0 || n % 10 == 1 || n % 10 == 6 || n % 10 == 8) {
		printf("pon");
	}

	else {
		printf("hon");
	}

	return 0;
}