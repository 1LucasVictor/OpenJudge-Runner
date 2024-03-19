#include <stdio.h>

int	main()
{
	int N,i;
	scanf("%d",&N);

	if(N % 2 == 0)
		i = N / 2;

	else if(N == 1)
		i = N;

	else
		i = (N / 2) + 1;

	printf("%d",i);
	return 0;
}