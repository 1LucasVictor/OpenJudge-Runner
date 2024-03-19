#include <stdio.h>

int ok(int a, int b, int c) {
	return a == 5 && b == 7 && c == 5;
}

int main() {
	int a, b, c;

	scanf("%d%d%d", &a, &b, &c);
	printf("%s\n", ok(a, b, c) || ok(a, c, b) || ok(b, a, c) || ok(b, c, a) || ok(c, a, b) || ok(c, b, a) ? "YES" : "NO");
	return 0;
}