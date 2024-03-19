#include <stdio.h>
#include <stdlib.h>

struct stack{
	int num;
	struct stack *next;
};

struct stack *push (int i, struct stack *s){
	struct stack *top;
	top = (struct stack*) malloc (sizeof (struct stack*));
	top->num = i;
	top->next = s;
	return top;
}

struct stack *pop (struct stack *s){
	struct stack *tmp;
	tmp = s->next;
	free (s);
	return tmp;
}

int read_top (struct stack *s){
	return s->num;
}

int main(void) {
	int n;
	struct stack *stk;
	stk = (struct stack*) malloc (sizeof (struct stack*));
	stk->next = NULL;
	while (~scanf ("%d", &n)){
		if (n != 0) {stk = push (n, stk);}
		else {
			printf ("%d\n", read_top (stk));
			stk = pop (stk);
		}
	}
	free (stk);
	return 0;
}