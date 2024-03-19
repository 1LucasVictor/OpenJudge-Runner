#include <stdio.h>

int main(void) {
	int A, B, a = 0, b = 0;
	double T, X;

	scanf("%d %d %lf", &A, &B, &T);
	X = T + 0.5;
	
	while (a <= T) {
		a += A;
		if (a <= T) b += B;
	}
	
	printf("%d\n", b);

	return 0;
}