#include<stdio.h>
int main() {
	int a, b, c = 0;
	scanf("%d %d %d", &a, &b, &c);
	a -= b;
	c -= a;
	printf("%d\n", c);
	return 0;
}