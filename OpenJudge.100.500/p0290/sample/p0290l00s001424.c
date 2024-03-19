#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void print(int A[], int N)
{
	int i;
	for (i = 0; i < N; i++)
	{
		if (i == N - 1)
			printf("%d\n", A[i]);
		else
			printf("%d ", A[i]);
	}
}

void insertion_sort(int A[], int N)
{
	int i,j;

	print(A, N);

	for (i = 1; i < N; i++)
	{
		j = i;
		while (j >= 1 && A[j - 1] > A[j])
		{
			swap(&A[j - 1], &A[j]);
			j--;
		}
		print(A, N);
	}
}

int GCD(int x, int y)
{
	if (x < y)
		swap(&x, &y);

	if (y == 0)
		return x;
	else
		return GCD(y, x % y);
}

int prime(int x)
{
	int i;

	for (i = 2; i <= sqrt(x); i++)
	{
		if (x % i == 0)
			return 0;
	}
	return 1;
}

int main()
{
	int n, num;
	int i, count = 0;

	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &num);
		count += prime(num);
	}

	printf("%d\n", count);
}
