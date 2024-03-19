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
que_pop()
{
	if (que_out != que_in)
	{
		que_out++;
		if (que_out >= QUE_SIZE)
			que_out = 0;
	}
}

int
main(int argc, char** argv)
{
	char name[11];
	int time;
	int q;
	int n;
	int i, j;
	int t;

	ix = 0;
	que_in = 0;
	que_out = 0;

	scanf("%d %d", &n, &q);
	for (i = 0; i < n; ++i)
	{
		scanf("%s %d", name, &t);
		queue[que_in].name = &strings[ix];
		queue[que_in].time = t;
		que_in++;
		if (que_in >= QUE_SIZE)
			que_in = 0;

		strcpy(&strings[ix], name);
		ix += strlen(name) + 1;
	}

	time = 0;
	while (que_size() != 0)
	{
		j = que_out; que_pop();
		if (queue[j].time <= q)
		{
			time += queue[j].time;
			printf("%s %d\n", queue[j].name, time);
		}
		else
		{
			queue[que_in].name = queue[j].name;
			queue[que_in].time = queue[j].time - q;
			que_in++;
			if (que_in >= QUE_SIZE)
				que_in = 0;

			time += q;
		}
	}

	return 0;
}

