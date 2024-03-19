#include <stdio.h>          // printf(), scanf()
#define STACK_SIZE 100

int stack[STACK_SIZE];
int sp;

void
stack_push(int a)
{
	stack[sp++] = a;
}

void
stack_pop()
{
	sp--;
}

int
stack_front()
{
	return stack[sp - 1];
}

int
main(int argc, char** argv)
{
	int n;
	int i;

	sp = 0;
	while (scanf("%d", &n) != EOF)
	{
		if (n == 0)
		{
			i = stack_front(); stack_pop();
			printf("%d\n", i);
		}
		else
			stack_push(n);
	}

	return 0;
}