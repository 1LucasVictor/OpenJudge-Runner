#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		main()
{
	int A, B, C, K, sum = 0;

	// S = (char *)malloc(sizeof(char) * 12);
	// N = (char *)malloc(sizeof(char) * 12);
	scanf("%d %d %d %d\n", &A, &B, &C, &K);
	if (K <= A)
		sum = K;
	else if (K <= (A + B))
		sum = A;
	else
	{
		K -= A + B;
		sum = A - K;
	}
	printf("%d\n", sum);
	return (0);
}
