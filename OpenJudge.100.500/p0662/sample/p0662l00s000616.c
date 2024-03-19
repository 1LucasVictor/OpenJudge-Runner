#include<stdio.h>

int main(void) {
	int a, b, c, d;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	if (a >= d || c >= b) printf("0");
	else if (a <= c) printf("%d", b - c);
	else if (b <= d) printf("%d", d - a);

	return 0;
}