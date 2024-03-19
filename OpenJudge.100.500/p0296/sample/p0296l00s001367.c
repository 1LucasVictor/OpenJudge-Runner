#include <stdio.h>
#include <stdlib.h>

int top = 0, S[100];

void push(int x)
{
	++top;
	S[top] = x;
}

int pop()
{
	--top;
	return S[top + 1];
}

int main(void)
{
	char s[1000];
	int a, b;
	while (scanf("%s", s) != EOF) {
		if (s[0] == '+') {
			a = pop();
			b = pop();
			push(a + b);
		}
		else if (s[0] == '-') {
			b = pop();
			a = pop();
			push(a - b);
		}
		else if (s[0] == '*') {
			a = pop();
			b = pop();
			push(a * b);
		}
		else push(atoi(s));
	}
	printf("%d\n", pop());
	return 0;
}
