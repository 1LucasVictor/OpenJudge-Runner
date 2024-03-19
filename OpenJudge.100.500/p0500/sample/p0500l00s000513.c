#include <stdio.h>
#include <stdlib.h>

int		is_nbr_possible()
{
	int			N, M, s;
	char		c;
	int			i = 0;
	char		*nbr;

	scanf("%d %d\n", &N, &M);
	nbr = (char *)malloc(sizeof(char) * (N + 2));
	for (int n = 0; n < (N + 2); n++)
		nbr[n] = 'A';
	for (int i = 0; i < M; i++)
	{
		scanf("%d %c", &s, &c);
		if (nbr[s] == 'A' || nbr[s] == c)
			nbr[s] = c;
		else
			return (-1);
	}
	if (N > 1 && (nbr[1] == 'A' || nbr[1] == '0'))
		return (-1);
	while (i < (N + 1))
	{
		if (nbr[i] == 'A')
			nbr[i] = '0';
		i++;
	}
	nbr[i] = '\0';
	nbr++;
	printf("%s\n", nbr);
	return (0);
}

int		main()
{
	int		no_result;

	no_result = is_nbr_possible();
	if (no_result)
		printf("%d\n", no_result);
	return (0);
}
