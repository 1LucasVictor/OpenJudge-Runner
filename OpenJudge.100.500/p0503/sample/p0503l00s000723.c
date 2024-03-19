#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int asc(const void* a, const void* b) {
	return *(int*)a - *(int*)b;
}
int main()
{
	int* A = 0;
	int N = 0;
	scanf("%d", &N);
	A = (int*)malloc(sizeof(int) * N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &A[i]);
	}
	qsort(A, N, sizeof(int), asc);

	for (int j = 0; j < N - 1; j++)
	{
		if (A[j] == A[j + 1])
		{
		printf("NO");
		return 0;
	    }
	}

	printf("YES");
	return 0;
}