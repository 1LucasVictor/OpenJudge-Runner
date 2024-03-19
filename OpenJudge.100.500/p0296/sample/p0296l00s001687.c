#include <stdio.h>
#include<stdlib.h>
#include <string.h>

#define DEF_ELM_MAX 200

static int top;
static int S[DEF_ELM_MAX];

void initialize( void )
{
	top = 0;
}

void push(int x)
{
	if(top == DEF_ELM_MAX-1) {
		//	overflow
		return;
	}
	S[top++] = x;
}

int pop( void )
{
	if(top == 0) {
		//	underflow
		return -1;
	}
	return S[--top];
}

////////////////////////////////////////////////////////////////////////////////
//
/////////////////////////////////////////////////////////////////////////////////
int main(void)
{
	char pStr[100];
	int ans = 0;
	int iwork;
	int a;
	int b;
//
	while (scanf("%s", pStr) != EOF ) {
		switch (pStr[0]) {
		case '+':
			b = pop();
			a = pop();
			push(a+b);
			break;
		case '-':
			b = pop();
			a = pop();
			push(a-b);
			break;
		case '*':
			a = pop();
			b = pop();
			push(a*b);
			break;
		default:
			iwork = atoi(pStr);
			push(iwork);
			break;
		}
	}

	printf("%d\n", pop());
	
	return 0;
}