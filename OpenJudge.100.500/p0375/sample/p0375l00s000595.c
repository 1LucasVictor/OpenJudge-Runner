#include <stdio.h>

int main (void)
{
	int i = 1, x, n;
	
	scanf("%d", &n);
	
	do {
		x = i;
		if (x % 3 == 0) {
			printf(" %d", i);
		} else
			do {
				if (x % 10 == 3)
					printf(" %d", i);
				x /= 10;
			} while (x);
	} while (++i <= n);
	
	putchar('\n');
	
	return 0;
}