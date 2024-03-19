#include<stdio.h>
int main(void)
{
	int a, b,k;

	scanf("%d%d", &a, &b);

	k = a + b;
	if (k % 2 == 0)
		printf("%d", k/2);
	else
		printf("IMPOSSIBLE");

	return 0;
}