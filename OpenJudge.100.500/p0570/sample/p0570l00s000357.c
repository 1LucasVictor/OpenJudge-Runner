#include <stdio.h>
int main(void)
{
	int A = 0;
	int B = 0;
	int K = 0;

	scanf("%d%d", &A, &B);

	K = A + B;

	if (K % 2 == 0) {
		K = (A + B) / 2;
		printf("%d", K);
	}
	else {
		printf("IMPOSSIBLE");
	}
	return 0;
}