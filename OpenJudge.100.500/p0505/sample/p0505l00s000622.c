#include <stdio.h>

int main(void)
{
	long H, N, A[100010], i, damage;
	damage = 0;

	scanf("%ld%ld", &H, &N);
	for (i = 1; i <= N; i++) {
		scanf("%ld", &A[i]);
		damage += A[i];
	}

	if (damage >= H)
		printf("Yes");
	else
		printf("No");
	
	return 0;
}