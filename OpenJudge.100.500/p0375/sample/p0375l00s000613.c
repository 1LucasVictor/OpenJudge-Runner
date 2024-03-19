#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
		int x, y, n;
		scanf("%d", &n);
		for (x = 1; x <= n; x++) {
			if (x % 3 == 0) {
				printf(" %d", x);
				continue;
			}
			for (y = 10; y <= n; y *= 10) {
				if (x%y == 3) {
					printf(" %d", x);
					continue;
				}
				else if (x / y == 3 || (x / y) % y == 3) {
					printf(" %d", x);
				}
			}
			
		}
		printf("\n");
		return 0;
}
