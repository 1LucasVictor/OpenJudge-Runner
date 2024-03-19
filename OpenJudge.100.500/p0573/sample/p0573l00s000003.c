#include <stdio.h>

int main()
{
	int n=0, i, j;
	char c[4];
	scanf("%s", c);
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (c[i] == c[j])
			{
				n++;
			}
		}
	}
	if (n == 8)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	return 0;
}