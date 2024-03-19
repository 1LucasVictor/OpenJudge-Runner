#include  <stdio.h>

int main(void)
{
	int A, B, T, sum;
	scanf("%d%d%d", &A, &B, &T);
	
	sum = (T / A) * B;

	printf("%d", sum);

	return 0;
}