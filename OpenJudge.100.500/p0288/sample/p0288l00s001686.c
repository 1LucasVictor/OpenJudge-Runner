#include <stdio.h>
#include <stdlib.h>

void insertionSort(int A[], int N);
void trace(int A[], int N);

int main() {

	int N, i, j;
	int A[100];

	scanf("%d", &N);
	for (i = 0; i < N; i++) scanf("%d", &A[i]);

	trace(A, N);
	insertionSort(A, N);

	return 0;
}

void insertionSort(int A[], int N) {

	int i, j, v;

	for (i = 1; i < N; i++) {
		v = A[i];
		j = i - 1;
		while (j >= 0 && v < A[j]) {
			A[j + 1] = A[j];
			j--;
		}
		A[j + 1] = v;
		trace(A, N);
	}
}

void trace(int A[], int N) {
		int i;
		for (i = 0; i<N; i++) {
			if (i>0) printf(" ");
			printf("%d", A[i]);
		}
		printf("\n");

	}


