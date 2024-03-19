#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

	int A, B;

	scanf("%d %d", &A, &B);

	if(A <= 8 && B <= 8) {
		printf("Yay!\n");
	} else {
		printf(":(\n");
	}

	return 0;
}