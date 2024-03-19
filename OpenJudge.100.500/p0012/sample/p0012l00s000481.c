#include "stdio.h"
#include "stdlib.h"

#define size 100

int sp;
int stack[size];

void init_stack()
{
	sp = -1;
}

void push(int x)
{
	if(sp < size - 1) stack[++sp] = x;
}

int pop()
{
	if(sp >= 0) return stack[sp--];
}

int main()
{
	int n;

	init_stack();

	while(scanf("%d", &n) != EOF){
		if(n == 0) printf("%d\n", pop());
		else push(n);
	}

	return 0;
}