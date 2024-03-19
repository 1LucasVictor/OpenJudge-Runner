#include<stdio.h>

int main(void)
{

	int N, M;
	int A[200002];
	scanf("%d", &N);

	for (int i = 0;i < 200002;i++)
		A[i] = 0;
	for (int i = 2; i <= N;i++) {
		scanf("%d", &M);
		A[M]++;
	}

	for (int i = 1; i <= N;i++) {
		printf("%d\n", A[i]);
	}
	
	return 0;
}