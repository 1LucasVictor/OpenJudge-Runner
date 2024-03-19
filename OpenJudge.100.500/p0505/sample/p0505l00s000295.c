#include <stdio.h>

int main()
{
	int H, N;
	scanf("%d %d", &H, &N);

	int A[100000];
	int i;
	for (i = 0; i < N; i++) {
		scanf("%d", &A[i]);
	}

	int sum = 0;
	for (i = 0; i < N; i++) {
		sum += A[i];
	}

	if (sum >= H) {
		printf("Yes");
	}
	else {
		printf("No");
	}

}