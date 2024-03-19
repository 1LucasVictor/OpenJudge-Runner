#include <stdio.h>
int main() {
	int n, a, b, s;
	scanf("%d%d%d", &n, &a, &b);
	if (b < n*a)s = b;
	else s = a * n;
	printf("%d", s);
	return 0;
}