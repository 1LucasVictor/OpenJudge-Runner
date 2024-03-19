#include <stdio.h>

int main(void)
{
	int n, i, kazu;

	scanf("%d", &n);

	int abc[100];

	for (i = 0; i < n; i++) {
		scanf("%d", &kazu);
		abc[i] = kazu;
	}

	for (i = n - 1; i > 0; i--)
	{
		printf("%d ", abc[i]);
	}

	printf("%d\n", abc[0]);

	return 0;
}

