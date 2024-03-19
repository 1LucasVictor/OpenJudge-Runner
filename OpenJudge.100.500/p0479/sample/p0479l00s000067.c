#include <stdio.h>
#include <stdlib.h>

int		main()
{
	int		N, A;
	int		*boss;

	scanf("%d\n", &N);
	boss = (int *)calloc((N + 1), sizeof(int));
	for (int i = 0; i<(N - 1);i++)
	{
		scanf("%d ", &A);
		boss[A]++;
	}
	for (int i = 1; i<=N;i++)
	{
 		printf("%d\n", boss[i]);
	}
	return (0);
}