#include <stdio.h>
int main(void)
{
	int i, x,y,n;
	scanf("%d", &n);
	for (x = 1; x <= n; x++) {
		if (x % 3 == 0) {
			i = x;
			printf(" %d", i);
			continue;
		}
		if (x % 10 == 3) {
			i = x;
			printf(" %d", i);
			
		}
	}
	printf("\n");
	return 0;
	}
