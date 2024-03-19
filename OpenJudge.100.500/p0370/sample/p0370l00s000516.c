#include <stdio.h>
int main(void) {
	int a, b;
	char op;
	int f = 0;

	while (f == 0)
	{
		scanf("%d %c %d", &a, &op, &b);

		if (op == '?') {
			break;
		}
		else if (op == '+') {
			printf("%d\n", a + b);
		}
		else if (op == '-') {
			printf("%d\n", a - b);
		}
		else if (op == '*') {
			printf("%d\n", a * b);
		}
		else if (op == '/') {
			if (b != 0) {
				printf("%d\n", a / b);
			}
		}

	}
	return 0;
}