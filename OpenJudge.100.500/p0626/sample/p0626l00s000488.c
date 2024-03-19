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
		int hoge = (int)pow(100, D);
		if(N == 100) {
			printf("%d\n", hoge * N + hoge);
		} else {
			printf("%d\n", hoge * N);
		}
	}

	return 0;
}