#include <stdio.h>

int		main()
{
	char		N, M ,O;

	scanf("%c%c%c\n", &N, &M, &O);
	if (N == '7' || M == '7' || O == '7')
		printf("Yes\n");
	else
		printf("No\n");
	return (0);
}
