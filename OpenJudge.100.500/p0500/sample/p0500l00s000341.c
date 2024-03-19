#include <stdio.h>

int main(void)
{
	int n, m;
	int b[3] = {0, 0, 0};
	int s, c;
	int i;

	scanf("%d %d", &n, &m);
	for (i = 0; i < m; i++)
	{
		scanf("%d %d", &s, &c);
		if (b[s - 1] && b[s - 1] != c)
		{
			printf("-1");
			return 0;
		}
		b[s - 1] = c;
	}
	for (i = 0; i < n; i++)
	{
		printf("%d", b[i]);
	}
	return 0;
}
