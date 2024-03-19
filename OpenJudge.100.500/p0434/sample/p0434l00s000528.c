#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int temperature;

	scanf("%d", &temperature);

	if (temperature >= 30) {
		printf("Yes");
	}
	else {
		printf("No");
	}

	return 0;
}