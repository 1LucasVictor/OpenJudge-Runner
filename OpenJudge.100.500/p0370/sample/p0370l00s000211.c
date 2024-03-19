#include <stdio.h>
#include <string.h>

int main(void) {
	int a, b, i;
	char op;
	
	for (i = 0;;i++) {
		scanf("%d %c %d", &a, &op, &b);
		if (op == '?') break;
		switch(op) {
			case '+':printf("%d\n", a+b); break;
			case '-':printf("%d\n", a-b); break;
			case '*':printf("%d\n", a*b); break;
			case '/':printf("%d\n", a/b); break;
			default: break;
		}
	}
	return 0;
}