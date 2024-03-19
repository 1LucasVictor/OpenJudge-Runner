#include <stdio.h>

#include <stdio.h>

int main()
{
	int N;
	int A[1000] = { 0 };
	int i, j, k;
	int v = 0;

	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &A[i]);
	}

	for (i = 0; i < N; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n");

	for (i = 1; i < N; i++)
	{
		v = A[i];
		j = i - 1;
		while (j >= 0 && A[j]>v)
		{
			A[j + 1] = A[j];
			j--;
		}
		A[j + 1] = v;
		for (k = 0; k < N; k++)
		{
			printf("%d ", A[k]);
		}printf("\n");

	}
	return 0;
}