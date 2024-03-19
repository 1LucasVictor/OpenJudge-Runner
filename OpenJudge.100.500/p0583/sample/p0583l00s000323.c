#include<stdio.h>
int main()
{
	int n, a, b, c, d;
	scanf("%d %d %d %d %d", &n, &a, &b, &c, &d);
	char s[200005];
	scanf("%s", s);
	int i;
	for (i = a; i < c - 1; i++)
	{
		if (s[i] == '#' && s[i + 1] == '#')
		{
			printf("No\n");
			return 0;
		}
	}
	for (i = b; i < d - 1; i++)
	{
		if (s[i] == '#' && s[i + 1] == '#')
		{
			printf("No\n");
			return 0;
		}
	}
	if (c > d)
	{
		int k = 0;
		for (i = b; i < d - 2; i++)
			if (s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '.')
				k++;
		if (k == 0)
		{
			printf("No\n");
			return 0;
		}
	}
	printf("Yes\n");
	return 0;
}