#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int N, A, B;
	scanf("%d %d %d", &N, &A, &B);
	if (A < B) {
		printf("%d", A*N);
	}
	else {
		printf("%d", B*N);
	}
	return 0;
}