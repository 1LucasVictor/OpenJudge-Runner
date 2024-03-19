#include <stdio.h>

int main(void) {
	int A, B;
	scanf("%d%d", &A, &B);
	int C;
	if (A + B > A - B) {
		C = A + B;
	}
	else {
		C = A - B;
	}
	if (C > A*B) {
		printf("%d", C);
	}
	else {
		printf("%d", C);
	}


	return 0;

}