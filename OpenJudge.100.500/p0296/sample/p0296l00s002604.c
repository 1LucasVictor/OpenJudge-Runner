#include<stdio.h>
#include<memory.h>
#include<stdlib.h>

struct Stack
{
	int data[100];
	int p;
}stk;

//Stack stk;

void push(int n)
{
	stk.p++;
	stk.data[stk.p] = n;
}

int pop()
{
	int d = stk.data[stk.p];
	stk.p--;
	return d;
}


void initialize()
{
	stk.p = 0;
	memset(stk.data, 0, sizeof(stk.data));
}

int main()
{
	initialize();

	char item[100];
	int op1, op2;
	while (scanf("%s", item) != EOF)
	{
		switch (item[0])
		{
		case '+':
			op1 = pop();
			op2 = pop();
			push(op2 + op1);
			break;

		case '-':
			op1 = pop();
			op2 = pop();
			push(op2 - op1);
			break;

		case '*':
			op1 = pop();
			op2 = pop();
			push(op2 * op1);
			break;

		default:
			push(atoi(item));
			break;
		}
	}
	printf("%d\n", pop());

	return 0;
}