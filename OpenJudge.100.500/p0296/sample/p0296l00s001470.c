#include <stdio.h>
int main(void) {
	int stack[100], value, i, top = -1;
	char in[10];
	
	while (scanf("%s ", in) != EOF) {
		if ('0' <= in[0] && in[0] <= '9') {
			for (value = i = 0; in[i] != '\0'; i++) {
				value *= 10;
				value += in[i] - '0';
			}
			stack[++top] = value;
		} else if (in[0] == '+') {
			stack[top-1] += stack[top];
			top--;
		} else if (in[0] == '-') {
			stack[top-1] -= stack[top];
			top--;
		} else if (in[0] == '*') {
			stack[top-1] *= stack[top];
			top--;
		}
	}
	printf("%d\n", stack[top]);
	return 0;
}

