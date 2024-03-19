#include <stdio.h>
#include <stdlib.h>

struct stack {
	int car_number;
	struct stack *down;
};

struct stack *push(int, struct stack *);
struct stack *pop(struct stack *);

int main(void) 
{
	struct stack bottom = {0, NULL};
	struct stack *top   = &bottom;
	int car_number;

	while (scanf("%d", &car_number) != EOF) {
		if (car_number == 0) {
			top = pop(top);
		} else {
			top = push(car_number, top);
		}
	}

	return 0;
}

struct stack *push(int car_number, struct stack *top) 
{
	struct stack *new;

	new = (struct stack *) malloc(sizeof(struct stack));

	new->car_number = car_number;
	new->down       = top;

	return new;
}

struct stack *pop(struct stack *top) 
{
	struct stack *p;

	printf("%d\n", top->car_number);

	p = top->down;

	free(top);

	return p;
}