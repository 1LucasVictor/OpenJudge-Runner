#include<stdio.h>
int main(void) {
	int a, b,i;
	char op;

	while (1) {
		scanf("%d %c %d", &a, &op, &b);
		if (op == '+') {
			i = a + b;
		}
		else if (op == '-'){
			i = a - b;
		}
		else if (op == '*'){
			i = a * b;
		}
		else if (op == '/') {
			i = a / b;
		}
		else if (op == '?') {
			break;
		}
			printf("%d\n", i);
	}
	return 0;
}
