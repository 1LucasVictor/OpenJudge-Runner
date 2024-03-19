#include <stdio.h>
#define SIZE 256

int main(void){
	char str[SIZE];
	int a, b;
	char op = '\0';

	while (1) {
		fgets(str, SIZE, stdin);
		sscanf(str, "%d %c %d", &a, &op, &b);
		if (op == '?') break;
		else if (op == '+') printf("%d\n", (a + b));
		else if (op == '-') printf("%d\n", (a - b));
		else if (op == '*') printf("%d\n", (a * b));
		else printf("%d\n", (a / b));
	}

	return 0;
}