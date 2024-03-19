#include <stdio.h>
#include <stdlib.h>

typedef struct _data{
	int value;
	struct _data *next;
} data;

void push(data **p, int val)
{
	data *d = (data*)malloc(sizeof(data));
	d->value = val;
	d->next = *p;
	*p = d;
}

int pop(data **p)
{
	int val = (*p)->value;
	data *w = *p;
	*p = (*p)->next;
	free(w);
	return val;
}

void terminate(data *p)
{
	data *w;
	while (p != NULL)
	{
		w = p;
		p = p->next;
		free(w);
	}
}

int main()
{
	data *head = NULL;
	char w[8];
	int a, b;
	
	while (scanf("%7s",w) != EOF)
	{
		switch (w[0])
		{
			case '+':
				a = pop(&head);
				b = pop(&head);
				push(&head,a + b);
				break;
			case '-':
				a = pop(&head);
				b = pop(&head);
				push(&head,b - a);
				break;
			case '*':
				a = pop(&head);
				b = pop(&head);
				push(&head,a * b);
				break;
			default:
				push(&head,atoi(w));
				break;
		}
	}

	printf("%d\n",pop(&head));

	terminate(head);

	return 0;
}