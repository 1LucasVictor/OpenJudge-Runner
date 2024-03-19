#include <stdio.h>

#define LENGTH 100000

static int stack[LENGTH]; // X^bN
static int stackNum; // X^bNÌvf

//----------------------------------------
// Ö
void stackinit(void);
void push(int d);
int pop(void);

//********************************************************************************
// C
int main(void)
{
	int n;

	stackinit();

	while(scanf("%d", &n) != EOF) {
		if(n == 0) {
			printf("%d\n", pop());
		} else {
			push(n);
		}
	}

	return 0;
}

// X^bNðú»
void stackinit(void)
{
	stackNum = 0;
	return;
}
// X^bNÉÏÞ
void push(int d)
{
	stack[stackNum++] = d;
	return;
}
// X^bN©çæèo·
int pop(void)
{
	return stack[--stackNum];
}