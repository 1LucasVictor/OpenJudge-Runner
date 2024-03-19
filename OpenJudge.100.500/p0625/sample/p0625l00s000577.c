#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#define pai 3.1415926535


int main(void) {
	int A, B;
	scanf("%d%d", &A, &B);

	if (A <= 8 ||B<=8) {
		printf("Yay!");
	}
	else {
		printf(":(");
	}

	return 0;
}