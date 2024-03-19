#include <stdio.h>
int a, b, c, n;
int main() {
	scanf("%d", &n);
	a = n % 10;
	n /= 10;
	b = n % 10;
	c = n / 10;
	if (a == 7 || b == 7 || c == 7)printf("Yes\n");
	else printf("No\n");
}