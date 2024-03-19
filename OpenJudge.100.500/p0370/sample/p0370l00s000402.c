#include<stdio.h>

int main(void)
{
	char op;
	int number1, number2;
	while (1)
	{
		scanf("%d %c %d", &number1, &op, &number2);
		/*和*/
		if (op == '+')
		{
			printf("%d\n", number1 + number2);
		}
		/*差*/
		if (op == '-')
		{
			printf("%d\n", number1 - number2);
		}
		/*積*/
		if (op == '*')
		{
			printf("%d\n", number1*number2);
		}
		/*商*/
		if (op == '/')
		{
			printf("%d\n", number1 / number2);
		}
		/*終了*/
		if (op == '?')
		{
			break;
		}
	}
	return 0;
}
