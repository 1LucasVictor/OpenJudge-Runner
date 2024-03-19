#include <stdio.h>

int		main(void)
{
	char s[100001];
	int b;
	int r;
	int i;

	i = 0;
	b = 0;
	r = 0;
	scanf("%s", s);
	while (s[i])
	{
		if (s[i] == '0')
		{
			r++;
		}
		else if(s[i] == '1')
		{
			b++;
		}
		i++;
	}
	if (b > r)
	{
		printf("%d\n", r * 2);
	}
	else
	{
		printf("%d\n", b * 2);
	}
	return 0;
}
