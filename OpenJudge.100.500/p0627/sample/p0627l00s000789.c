#include <stdio.h>

int main(void)
{
	int A, B;
	int max;
	
	scanf("%d %d", &A, &B);
	
	max = A + B;
	max < A - B ? max = A - B : max;
	max < A * B ? max = A * B : max;
	
	printf("%d\n", max);
	
	return (0);
}