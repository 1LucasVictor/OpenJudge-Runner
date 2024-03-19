#include<stdio.h>
int main(void) {
	int a, b, c, d,min,max;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	if (a >= c) min = a;
	else min = c;
	if (b <= d) max = b;
	else max = d;
	if (max > min) printf("%d", max - min);
	else printf("0");

	return 0;
}