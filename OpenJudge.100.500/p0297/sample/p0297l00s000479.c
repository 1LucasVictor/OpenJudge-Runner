#include <stdio.h>
#include <stdlib.h>

#define MAX 100001
#define min(a, b) ((a) < (b) ? (a) : (b))

struct work {
	char wname[32];
	int time;
};

typedef struct work elemType;

elemType Q[MAX];
int head, tail;

void init_queue()
{
	head = tail = 0;
}

int is_full()
{
	return ((tail + 1) % MAX) == head;
}

int is_empty()
{
	return head == tail;
}

void enqueue(elemType v)
{
	if (is_full())
		exit(1);
	
	Q[tail] = v;
	tail = ((tail + 1) % MAX);
}

elemType dequeue()
{
	elemType v;
	
	if (is_empty())
		exit(1);
		
	v = Q[head];
	head = ((head + 1) % MAX);
	
	return v;
}

int main(int argc, char *argv[])
{
	int n, q, i;
	int total_time = 0;
	elemType e;
	
	init_queue();
	
	scanf("%d %d", &n, &q);
	for (i = 0; i < n; i++) {
		scanf("%s %d", Q[i].wname, &Q[i].time);
		tail++;
	}
		
	while (!is_empty()) {
		e = dequeue();
		total_time += min(q, e.time); 
		e.time -= min(q, e.time);
		if (0 == e.time) {
			printf("%s %d\n", e.wname, total_time);
		} else {
			enqueue(e);
		}
		
	}

	return 0;
}
