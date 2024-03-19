#include<stdio.h>

int main(void)
{
	char op;
	int a, b;
	int result;

	while(1)
	{
		scanf("%d %c %d", &a, &op, &b);
		if('?' == op)
			break;
		if('+' == op)
			result = a + b;
		if('-' == op)
			result = a - b;
		if('*' == op)
			result = a * b;
		if('/' == op)
			result = a / b;

		printf("%d\n", result);
	}
}
