#include <stdio.h>

#define Max 1000
int top = 0;

int isEmpty( ) {
	return top == 0;
}

int isFull( ) {
	return top >= Max -1;
}

void push(int stack[Max], int value) {
	if (isFull( )) {
		printf("error\n");
		exit(1);
	}
	stack[++top]  = value;
}

int pop(int stack[Max]) {
	if (isEmpty( )) {
		printf("error\n");
		exit(1);
	}
	return stack[top--];
}

int main( ) {
	int N, i;
	char A[Max];
	int buff;
	int stack[Max]; 
	int sp = 0;

	while (scanf("%s", A) != EOF) {
		if (A[0] == '+')		push(stack, pop(stack) + pop(stack));
		else if (A[0] == '-')	push(stack, ((-1) * pop(stack)) + pop(stack));
		else if (A[0] == '*')	push(stack, pop(stack) * pop(stack));
		else	push(stack, atoi(A));
	}

	printf("%d\n",stack[top]);

	return 0;
}