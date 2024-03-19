#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

	int D, N;

	scanf("%d %d", &D, &N);

	if(D == 0) {
		printf("%d\n", N);
	} else {
		printf("%d\n", (int)pow(100, D) * N);
	}

	return 0;
}