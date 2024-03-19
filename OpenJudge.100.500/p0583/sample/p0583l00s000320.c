#include<stdio.h>
int main()
{
	int n, a, b, c, d;
	char s[200005];
	scanf("%d %d %d %d %d", &n, &a, &b, &c, &d);
	scanf("%s", s);
	int i;
	a--;
	b--;
	c--;
	d--;
	for (i = a; i < c; i++)
	{
		if (s[i] == '#' && s[i + 1] == '#')
		{
			printf("No\n");
			return 0;
		}
	}
	for (i = b; i < d; i++)
	{
		if (s[i] == '#' && s[i + 1] == '#')
		{
			printf("No\n");
			return 0;
		}
	}
	if (d < c)
	{
		for (i = b - 1; i < d; i++)
		{
			if (s[i] != '#' && s[i + 1] != '#' && s[i + 2] != '#')
			{
				printf("Yes\n");
				return 0;
			}
		}
		printf("No\n");
		return 0;
	}
	printf("Yes\n");
	return 0;
}