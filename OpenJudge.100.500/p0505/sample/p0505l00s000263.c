#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

//#define MOD (int)(1e5 + 7)
#define MOD (100007)

void invalid(void)
{
	printf("-1\n");
	exit(0);
}

static inline int *readNint(int n)
{
	int *a = calloc(sizeof(int), n);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	return a;
}

static inline int comp(const void *a, const void *b)
{
	return *(int *)a < *(int *)b;
}

int main(int argc, char **argv)
{
	int H, N;
	scanf("%d%d", &H, &N);
	int *A = readNint(N);
	//qsort(A, N, sizeof(int), comp);
	int t = 0;
	for (int i = 0; i < N; i++)
		t += A[i];
	if (t >= H)
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}
