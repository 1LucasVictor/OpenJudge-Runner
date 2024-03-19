#include <stdio.h>

int main()
{
	int D, N, A, B;

	scanf("%d", &N);
	scanf("%d", &A);
	scanf("%d", &B);

	D = N * A;

	if (D < B) {
		printf("%d\n", D);
	}
	else {
		printf("%d\n", B);
	}

	return 0;
}