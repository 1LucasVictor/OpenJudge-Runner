#include <stdio.h>
#include <string.h>


int main(void) {

	int a, b, i;
	char s;

	for (i = 0; i < 1000; i++) {
	scanf("%d %c %d", &a, &s, &b);
	if (s == '+') printf("%d\n", a + b);
	if (s == '-') printf("%d\n", a - b);
	if (s == '/') printf("%d\n", a / b);
	if (s == '*') printf("%d\n", a * b);
	if (s == '?') break;
	}

	return 0;
}