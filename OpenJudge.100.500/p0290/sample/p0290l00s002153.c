#include<stdio.h>
#include<stdlib.h>

int main() {
	int *A;
	int n;
	int count = 0;
	int i, j;

	scanf("%d", &n);
	A = (int *)malloc(n * sizeof(int));

	for (i = 0; i < n; i++)
		scanf("%d", &A[i]);

	for (i = 0; i < n; i++) {
		j = 2;
			while (j < A[i]) {
				if (A[i] % j == 0)
					break;
				j++;
			}

		if (j == A[i])
			count++;
	}

	printf("%d\n", count);

	free(A);
	return 0;
}
