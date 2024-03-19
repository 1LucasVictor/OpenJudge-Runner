#include <stdio.h>

int		main()
{
	char	N[3];

	scanf("%s\n", N);
	if (N[1] == 'B')
		printf("ARC\n");
	else
		printf("ABC\n");
	return (0);
}