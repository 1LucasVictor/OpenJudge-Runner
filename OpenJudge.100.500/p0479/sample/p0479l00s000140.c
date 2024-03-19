#include <stdio.h>

int		main(void)
{
	int N;
	int A[200000];
	int i = -1;
	int ans[200000];

	scanf("%d", &N);
	while (++i < N - 1)
		scanf("%d", &A[i]);
	i = -1;
	while (++i < N)
		ans[i] = 0;
	i = -1;
	while (++i < N - 1)
		ans[A[i] - 1] += 1;
	i = -1;
	while (++i < N)
		printf("%d\n", ans[i]);
	return (0);
}
