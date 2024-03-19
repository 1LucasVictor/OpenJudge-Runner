#include <stdio.h>

int main(void)
{
	char s[200000];
	char t[200000];
	int	i, r;

	scanf("%s\n", s);
	scanf("%s", t);
	i = 0;
	r = 0;
	while (s[i] != '\0')
	{
		if (s[i] != t[i])
		{
			r++;
		}
		i++;
	}
	printf("%d\n", r);
	return (0);
}