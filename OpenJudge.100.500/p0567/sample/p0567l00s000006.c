#include <stdio.h>

int main()
{
    
	int A, B, C;
	int m = scanf("%d %d %d", &A, &B, &C);
	if (m == EOF) {
		printf("scan error!\n");
		return 0;
	}

	//printf("%d\t%d\t%d\n", A, B, C);

	int rest = A - B;
	int rest_C = 0;
	if (rest < C) {
		rest_C = C - rest;
	}

	printf("%d\n", rest_C);

	return 0;
}