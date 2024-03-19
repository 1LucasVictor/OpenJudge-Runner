#include <stdio.h>
int main(void)
{
	int N, A, B ;

	do {
		scanf("%d%d%d", &N, &A, &B);
	} while (N < 1 && 20 < N && A < 1 && 50 < A && B < 1 && 50 < B);

		if (N * A > B) {
			printf("%d\n", B);
		}
		else if (N * A < B) {
			printf("%d\n", N * A);
		}
		else {
			printf("%d\n", B);
		}
	return 0;
}