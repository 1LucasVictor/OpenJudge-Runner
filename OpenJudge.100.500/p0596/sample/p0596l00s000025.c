#include <stdio.h>

int	main(void)
{
	char	s[10001];
	int	red = 0;
	int	blue = 0;
	int	i = 0;

	scanf("%s", s);
	while (s[i])
	{
		if (s[i] == '0')
			red++;
		else
			blue++;
		i++;
	}
	printf("%d", red > blue ? blue * 2 : red * 2);
	return 0;
}