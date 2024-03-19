#include <stdio.h>
#include <string.h>

int main(void)
{
	int n, m;
	int a[100][100];
	int b[100];
	long ans[100];
	int ii, jj;
	char c;

	memset(&a[0][0], (int)0, sizeof(int) * 100 * 100);
	memset(&b[0],    (int)0, sizeof(int) * 100);
	memset(&ans[0],  (int)0, sizeof(long) * 100);

	scanf("%d %d", &n, &m);
	scanf("%c", &c);

	for (ii = 0; ii < n; ii++) {
		for (jj = 0; jj < m; jj++) {
			scanf("%d", &a[ii][jj]);
			scanf("%c", &c);
		}
	}
	for (ii = 0; ii < m; ii++) {
		scanf("%d", &b[ii]);
		scanf("%c", &c);
	}

	for (ii = 0; ii < n; ii++) {
		for (jj = 0; jj < m; jj++) {
			ans[ii] += a[ii][jj] * b[jj];
		}
		printf("%d\n", ans[ii]);
	}

	return 0;
}