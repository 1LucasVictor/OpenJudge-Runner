#include <stdio.h>

int main() {
	int a, b, t;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &t);
	t = t / a;
	t = t*b;
	printf("%d", t);
}