#include <stdio.h>

int horie_yui(int isikawa_kaito) {
	if (isikawa_kaito % 3 == 0) return 1;
	do {
		if (isikawa_kaito % 10 == 3) return 1;
	} while ((isikawa_kaito /= 10));
	return 0;
}

int main(void) {
	int n, i = 1;
	if (scanf("%d", &n) != 1) return 1;
	do {
		if (horie_yui(i)) printf(" %d", i);
	} while (++i <= n);
	putchar('\n');
	return 0;
}

