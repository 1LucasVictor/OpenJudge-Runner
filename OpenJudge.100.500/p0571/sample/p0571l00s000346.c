#include<stdio.h>
int main(void) {
	int N, A, B;
	scanf("%d%d%d", &N, &A, &B);
	N *= A;
	if (N < B)
		printf("%d", N);
	else
		printf("%d", B);
}
