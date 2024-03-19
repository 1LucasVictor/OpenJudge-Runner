#include <stdio.h>

int main(void)
{
	int i, j;

	int a[100][100];
	int b[100];
	int c[100];

	//c????????????.
	for (i = 0; i < 100; i++)
		c[i] = 0;

	int n, m;

	scanf("%d %d", &n, &m);

	for(i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			scanf("%d", &a[i][j]);

	for (i = 0; i < m; i++)
		scanf("%d", &b[i]);

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			c[i] += a[i][j] * b[j];
		}
		printf("%d\n", c[i]);
	}

	return 0;
}