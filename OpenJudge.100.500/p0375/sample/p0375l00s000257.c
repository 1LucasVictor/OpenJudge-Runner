#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include<stdio.h>
int main() {
	int n,i;
	scanf("%d", &n);
	for (i = 1; i <= n; ++i) {
		if (!(i % 3) || (i % 10 == 3))printf(" %d", i);
	}
	putchar('\n');
	return 0;
}