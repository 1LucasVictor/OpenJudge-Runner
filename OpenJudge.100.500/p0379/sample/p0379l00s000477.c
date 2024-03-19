#include<stdio.h>

int main(void)
{
	int n, m;
	int A[100][100];
	int B[100];
	int h, w, C[100] = { 0 };
	scanf("%d %d", &n, &m);
	for (h = 0; h<n; h++)
	{
		for (w = 0; w<m; w++)
		{
			scanf("%d", &A[h][w]);
		}
	}
	for (w = 0; w<m; w++)
	{
		scanf("%d", &B[w]);
	}
	for (h = 0; h < n; h++)
	{
		for (w = 0; w < m; w++)
		{
			C[h] += A[h][w] * B[w];
		}
	}
	for (h = 0; h<n; h++)
	{
		printf("%d\n", C[h]);
	}

	return 0;
}