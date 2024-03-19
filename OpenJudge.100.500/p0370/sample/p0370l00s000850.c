#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a, b;
	char op;
	while(scanf("%d %c %d", &a, &op, &b) > 0) {
		switch(op){
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
				printf("%d\n", (int)(a / b));
				break;
			case '?':
				return 0;
		}
	}
	return 0;
}