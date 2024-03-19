#include <stdio.h>


int main() {
	int n, nn, x, xx, A[100];
	int count = 0, i, j, k;

	while (1) {
		scanf("%d %d", &nn, &xx);
		if (nn == 0 && xx == 0) {
			break;
		}
		n = nn; x = xx;
	}

	for (i = 0; i < n; i++) {
		A[i] = i + 1;
	}

	for (i = 0; i < n - 2; i++) {
		for (j = i + 1; j < n - 1; j++) {
			for (k = j + 1; k < n; k++) {
				if (i + j + k + 3 == x) {
					count++;
//debug log					printf("%d %d %d\n", i, j, k);
				}
			}
		}
	}

	printf("%d\n", count);




	return 0;
}