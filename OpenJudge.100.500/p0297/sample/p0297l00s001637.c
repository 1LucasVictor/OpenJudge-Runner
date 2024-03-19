#include <stdio.h>          // printf(), fprintf(), scanf()
#include <stdlib.h>         // exit()
#include <string.h>         // strlen(), strcpy()

#define QUE_SIZE 100000
#define L_STRINGS (11 * 100000)

typedef struct que_tbl
{
	const char* name;
	int time;
} que_t;

int que_in;
int que_out;
que_t queue[QUE_SIZE];
char strings[L_STRINGS];
int ix;

void
cleanup(int ecode)
{
	exit(ecode);
}

int
que_size()
{
	if (que_in >= que_out)
		return que_in - que_out;

	return que_in + QUE_SIZE - que_out;
}

void
que_push(que_t* que)
{
	queue[que_in].name = que->name;
	queue[que_in].time = que->time;
	que_in++;
	if (que_in >= QUE_SIZE)
		que_in = 0;

	if (que_in == que_out)
	{
		fprintf(stderr, "Queue area overflow. size:%d\n", QUE_SIZE);
		cleanup(1);
	}
}

void
que_pop()
{
	if (que_out != que_in)
	{
		que_out++;
		if (que_out >= QUE_SIZE)
			que_out = 0;
	}
}

void
que_front(que_t* que)
{
	que->name = queue[que_out].name;
	que->time = queue[que_out].time;
}

int
main(int argc, char** argv)
{
	char name[11];
	int time;
	que_t que;
	int q;
	int n, i;
	char* s;
	int t;

	ix = 0;
	que_in = 0;
	que_out = 0;

	scanf("%d %d", &n, &q);
	for (i = 0; i < n; ++i)
	{
		scanf("%s %d", name, &t);
		s = &strings[ix];
		strcpy(s, name);
		ix += strlen(name) + 1;

		que.name = s;
		que.time = t;
		que_push(&que);
	}

	time = 0;
	i = 0;
	while (i < n)
	{
		que_front(&que); que_pop();
		if (que.time <= q)
		{
			time += que.time;
			printf("%s %d\n", que.name, time);
			i++;
		}
		else
		{
			que.time -= q;
			time += q;
			que_push(&que);
		}
	}

	return 0;
}