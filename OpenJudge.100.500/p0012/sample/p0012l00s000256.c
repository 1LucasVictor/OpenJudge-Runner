#include <stdio.h>

int stack[50], cp;

void push(int n)
{
	stack[cp++] = n;
}

int pop(void)
{
	return stack[--cp];
}

int main(void)
{
	int n;
	stack[0] = -1;
	cp = 1;
	
	while (scanf("%d", &n) != EOF) {
		
		if (n == 0) {
			printf("%d\n", pop());;
		} else {
			push(n);
		}
		
		if (stack[cp-1] == -1) break;
	}
}