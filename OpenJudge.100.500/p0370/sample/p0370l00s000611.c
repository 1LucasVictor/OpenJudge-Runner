#include<stdio.h>

int main(void){
    int a, b;
	char op;

	while (1) {
		scanf("%d %c %d", &a, &op, &b);
		int value;
		if (op == '+') value = a + b;
		else if(op == '-') value = a - b;
		else if(op == '*') value = a * b;
		else if(op == '/') value = a / b;
		else break;

		printf("%d\n", value);
	}

    return 0;
}
