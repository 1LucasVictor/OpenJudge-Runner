#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
	int n, x, cnt, i, j;

	while (1) {
		scanf("%d %d", &n, &x);
		if (n == 0 && x == 0) break;

		cnt = 0;
		for (i = n; i > 0; i--) {
			for (j = (i-1); j>0; j--) {
				if ((((x - i) - j) < j) && (((x - i) - j))>0) {
					cnt++;
				}
			}
		}
		printf("%d\n", cnt);
	}

	return 0;
}
