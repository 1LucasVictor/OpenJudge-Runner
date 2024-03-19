#define _USE_MATH_DEFINES
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define next(a) ( ((a)+1)%SIZE )
#define ABS(x) ( (x)>0 ? x : -(x) )
#define MIN(x,y) ( (x) < (y) ? (x) : (y) )
#define MAX(x,y) ( (x) > (y) ? (x) : (y) )
#define INF 1000000000
#define SIZE 100000



typedef struct queue
{
	int front;
	int rear;
	int data[200];
}queue;

void init(queue* p)
{
	p->front = 0;
	p->rear = 0;
}

void enqueue(queue *p,int x)
{
	if (next(p->rear) == p->front)
		printf("OVERFLOW!\n");
	p->data[p->rear] = x;
	p->rear = next(p->rear);
}

int dequeue(queue *p)
{
	int x;

	if (p->front == p->rear)
		printf("NO DADA\n");

	x = p->data[p->front];
	p->front = next(p->front);

	return x;
}

int empty(queue *p)
{
	return p->front == p->rear;
}

int main()
{
	queue Q[20];
	char str[201];
	int i, j;
	int num;
	int h;
	int count = 0;

	while (1)
	{
		init(&Q[count]);

		scanf("%s", str);
		if (strcmp(str, "-") == 0)
			break;

		for (i = 0; i < strlen(str); i++)
		{
			enqueue(&Q[count], str[i]-'a');
		}


		scanf("%d", &num);

		for (i = 0; i < num; i++)
		{
			scanf("%d", &h);
			for (j = 0; j < h; j++)
				enqueue(&Q[count], dequeue(&Q[count]));
		}
		count++;
	}

	for (i = 0; i < count; i++)
	{
		while (!empty(&Q[i]))
			printf("%c", 'a' + dequeue(&Q[i]));

		printf("\n");
	}


	return 0;
}

