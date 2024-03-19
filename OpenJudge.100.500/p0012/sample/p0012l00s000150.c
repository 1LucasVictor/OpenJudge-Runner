#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	int *numbers;
	int count;
	int length;
} STACK;

void stack_init(STACK *stack);
void stack_push(STACK *stack, int number);
int stack_pop(STACK *stack);
void stack_finalize(STACK *stack);

int main()
{
	int i;
	int number;
	STACK stack;

	stack_init(&stack);
	while (scanf("%d", &number) != -1) {
		if (number == 0) {
			printf("%d\n", stack_pop(&stack));
		} else {
			stack_push(&stack, number);
		}
	}

	return 0;
}

void stack_init(STACK *stack)
{
	stack->length = 16;
	stack->numbers = calloc(stack->length, sizeof(int));
	stack->count = 0;
}

void stack_finalize(STACK *stack)
{
	free(stack->numbers);
	memset(stack, 0, sizeof(stack));
}

void stack_push(STACK *stack, int number)
{
	if (stack->length == stack->count) {
		stack->length *= 2;
		stack->numbers = realloc(stack->numbers, stack->length * sizeof(int));
	}
	stack->numbers[stack->count++] = number;
}

int stack_pop(STACK *stack)
{
	return stack->numbers[--(stack->count)];
}