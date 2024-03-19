#include <stdio.h>

int main(void)
{
	int a, b, c;
	int ii, cnt;

	cnt = 0;
	scanf("%d %d %d", &a, &b, &c);
	for (ii = a; ii <= b; ii++) {
		if ((c / ii) * ii == c) {
			cnt++;
		}
	}

	printf("%d\n", cnt);

	return 0;
}