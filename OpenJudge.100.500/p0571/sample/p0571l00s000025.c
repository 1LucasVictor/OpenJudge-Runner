#include<stdio.h>

int main(void) {
	int N, A, B;

	scanf("%d%d%d", &N, &A, &B);

	int sam = N * A;

	if (sam >= B) {
		printf("%d\n", B);
	}
	else {
		printf("%d\n", sam);
	}

	return 0;
}