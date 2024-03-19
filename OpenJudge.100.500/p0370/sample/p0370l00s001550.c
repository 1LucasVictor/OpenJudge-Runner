#include <stdio.h>

int main(void)
{
	int a, b, flag = 1;
	char op;
	
	while (flag) {
		scanf("%d %c %d", &a, &op, &b);
		
		switch (op) {
		case '+':
			printf("%d\n", a + b);
			break;
		case '-':
			printf("%d\n", a - b);
			break;
		case '*':
			printf("%d\n", a * b);
			break;
		case '/':
			printf("%d\n", a / b);
			break;
		case '?':
			flag = 0;
			break;
		}
	}
	
	return 0;
}