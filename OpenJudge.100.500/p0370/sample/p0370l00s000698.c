#include <stdio.h>

int main(void)
{
	int a, b;
	long int result;
	char op;

	while (scanf("%d%*c%c%d", &a, &op, &b) != -1 && op != '?'){
		switch (op){
		case '+':
			result = a + b;
			break;
		case '-':
			result = a - b;
			break;
		case '*':
			result = a * b;
			break;
		case '/':
			result = a / b;
			break;
		default:
			puts("shit");
			result = 0;
			break;
		}
		printf("%ld\n", result);
	}
	return 0;
}