#include <stdio.h>
#include <string.h>

int	unification(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (i < strlen(str))
	{
		if (str[i] != 2 && str[i + 1 != 2])
		{
			if (str[i] != str[i + 1])
			{
				str[i] = '2';
				str[i + 1] = '2';
				count = count + 2;
				i = i + 2;
				continue;
			}
		}
		i++;
}
	return (count);
}


int		main(void)
{
	char s[100000];
	int res;

	scanf("%s", s);
	res = unification(s);
	printf("%d\n", res);
}
