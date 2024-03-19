#include <stdio.h>

int main(void)
{
	int a, b, c[10000], i, j;
	char op;
	
	for (i = 0;;  i++) {
		scanf("%d %c %d", &a, &op, &b);
		if (op == '?') {
			break;
		} else if (op == '+') {
			c[i] = a + b;
		} else if (op == '-') {
			c[i] = a - b;
		} else if (op == '*') {
			c[i] = a * b;
		} else if (op == '/') {
			c[i] = a / b;
		}
	}
	for (j = 0; j < i; j++) {
		printf("%d\n", c[j]);
	}
	return 0;
}

