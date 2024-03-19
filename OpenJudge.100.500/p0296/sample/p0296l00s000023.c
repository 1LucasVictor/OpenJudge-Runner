#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100
struct StackStruct
{
	int top;
	int data[STACK_SIZE];
};
typedef struct StackStruct Stack;

void stack_clear(Stack *stack)
{
	stack->top = 0;
}

int stack_pop(Stack *stack)
{
	return stack->data[--stack->top];
}

void stack_push(Stack *stack, int value)
{
	stack->data[stack->top++] = value;
}

void stack_dump(Stack *stack)
{
	printf("[");
	for(int i = 0; i < stack->top; ++i)
	{
		printf(" %d", stack->data[i]);
	}
	printf(" ]\n");
}

int main()
{
	char token[8];
	Stack stack;
	stack_clear(&stack);

	while(scanf("%s", token) != EOF)
	{
		int valueL, valueR;
		//printf("token = '%s'\n", token);
		
		switch(token[0])
		{
			case '+':
				valueR = stack_pop(&stack);
				valueL = stack_pop(&stack);
				stack_push(&stack, valueL + valueR);
				break;
			
			case '-':
				valueR = stack_pop(&stack);
				valueL = stack_pop(&stack);
				stack_push(&stack, valueL - valueR);
				break;
			
			case '*':
				valueR = stack_pop(&stack);
				valueL = stack_pop(&stack);
				stack_push(&stack, valueL * valueR);
				break;
			
			case '/':
				valueR = stack_pop(&stack);
				valueL = stack_pop(&stack);
				stack_push(&stack, valueL / valueR);
				break;
			
			default:
				stack_push(&stack, atoi(token));
				break;
		}
		//stack_dump(&stack);
	}
	printf("%d\n", stack_pop(&stack));
}

