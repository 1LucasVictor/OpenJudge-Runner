#include<stdio.h>

int main() {
	int D, N, out = 1;
	scanf("%d %d", &D, &N);
	for (int i = 0; i < D; i++) {
		out *= 100;
	}
	if (N == 100)N++;
	printf("%d\n", out*N);

	return 0;
}