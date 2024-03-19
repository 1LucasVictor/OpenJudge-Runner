#include<stdio.h>
#include<stdlib.h>

int top, S[200];

int pop() {
	int number = S[top];
	top--;
	return number;
}

void push(int x) {
	top++;
	S[top] = x;
}


int main()
{
	top = 0;
	char a[200];
	while (scanf("%s", a)!=EOF) {
		if (a[0] == '+') {
			int a1 = pop();
			int a2 = pop();
			push(a1 + a2);
		}
		else if (a[0] == '-') {
			int a1 = pop();
			int a2 = pop();
			push(a2 - a1);
		}
		else if (a[0] == '*') {
			int a1 = pop();
			int a2 = pop();
			push(a1*a2);
		}
		else {
			push(atoi(a));
		}
		
	}
	printf("%d\n", pop());
    return 0;
}
