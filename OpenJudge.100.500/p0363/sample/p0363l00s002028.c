#include<stdio.h>
int main() {
	int a, b, c,m;
	scanf("%d%d%d", &a, &b, &c);
	if (a > b) {
		m = a;
		a = b;
		b = m;
	}
	if (b > c) {
		m = b;
		b = c;
		c = m;
	}
	if (a > b) {
		m = a;
		a = b;
		b = m;
	}
	printf("%d %d %d\n",a,b,c);
	return 0;
}