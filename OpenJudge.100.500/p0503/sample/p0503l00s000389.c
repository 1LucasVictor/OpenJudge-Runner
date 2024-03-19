#include <stdio.h>

int		main(void)
{
	int	N;
	int	A[200000];
	int	i;
	int j;

	i = -1;
	scanf("%d", &N);
	while (++i < N)
		scanf("%d", &A[i]);
	i = -1;
	while (++i < N)
	{
		j = i;
		while (++j < N)
			if (A[i] == A[j])
			{
				printf("NO\n");
				return (0);
			}
	}
	printf("YES\n");
	return (0);
}
