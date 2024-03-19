#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

	int D, N;

	scanf("%d %d", &D, &N);

	if(D == 0) {
		if(N == 100) {
			printf("%d\n", 101);
		} else {
			printf("%d\n", N);
		}
	} else {
		if(N == 100) {
			printf("%d\n", (int)pow(100, D) * N + pow(100, D));
		} else {
			printf("%d\n", (int)pow(100, D) * N);
		}
	}

	return 0;
}