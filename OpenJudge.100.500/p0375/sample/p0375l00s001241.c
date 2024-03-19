#include <stdio.h>

int main (void)
{
	int i = 1, x, n;
	
	scanf("%d", &n);
	
	do {
		x = i;
		if (x % 3 == 0) {
			printf(" %d", i);
		} else if (x % 10 == 3 || (x / 10) % 10 == 3) {
			printf(" %d", i);
		}
	} while (++i <= n);
	
	putchar('\n');
	
	return 0;
}