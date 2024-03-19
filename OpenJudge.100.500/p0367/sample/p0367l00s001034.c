#include <stdio.h>

int main() {
	int i, ii, a, b, c;
	int iii = 0;
	scanf("%d%d%d", &a, &b, &c);
	for (i = a; i <= b; i++)
	{
		for (ii = i; ii <= c; ii += i)
		{
			if (ii == c) {
				iii++;
				break;
			}
		}
	}
	printf("%d\n", iii);
	return 0;
}