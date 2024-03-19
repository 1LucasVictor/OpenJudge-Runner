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

void print(char* str, int a, int b)
{
	int i;

	for (i = a; i <= b; i++)
		printf("%c", str[i]);
	printf("\n");
}

void reverse(char* str, int a, int b)
{
	int i,j=0;
	char t;

	for (i = a; i <= (a + b) / 2; i++)
	{
		t = str[i];
		str[i] = str[b - j];
		str[b - j] = t;
		j++;
	}
}

void replace(char* str, int a, int b, char* temp)
{
	int i, j=0;

	for (i = a; i <= b; i++)
	{
		str[i] = temp[j];
		j++;
	}
}

int main()
{
	char str[1500];
	char temp[1500];
	char temp2[1500];
	int q;
	int a, b;
	int i, j;

	scanf("%s", str);
	scanf("%d", &q);

	for (i = 0; i < q; i++)
	{
		scanf("%s%d%d", temp,&a,&b);
		if (strcmp(temp, "print") == 0)
			print(str, a, b);
		else if (strcmp(temp, "reverse") == 0)
			reverse(str,a, b);
		else if (strcmp(temp, "replace") == 0)
		{
			scanf("%s", temp2);
			replace(str,a, b, temp2);
		}
	}

	return 0;
}

