#include <stdio.h>
#include <stdlib.h>

#define _USE_MATH_DEFINES
#include <math.h>

// cl /EHsc xxxx.c
int main(int arc, char *argv[])
{
	int a, b;
	char op;
	
	while (1)
	{
		scanf("%d %c %d", &a, &op, &b);
		if (op == '?')
		{
			break;
		}
		
		switch (op)
		{
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
		default:
			break;
		}
	}
	
	return 0;
}