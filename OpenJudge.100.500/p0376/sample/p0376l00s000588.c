#include <stdio.h>
#define SIZE 100
int main(void)
{
	int n;
	int i;
	int va[SIZE];

	for (i = 0; i < SIZE; i++)
		va[i] = 0;
	
	scanf("%d", &n);

	for (i = 0; i < n; i++)
		scanf("%d", &va[i]);

	printf("%d", va[n - 1]);

	for (i = n - 2; i >= 0; i--)
		printf(" %d", va[i]);

	putchar('\n');

	return 0;
}