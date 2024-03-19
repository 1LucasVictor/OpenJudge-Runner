#include<stdio.h>
#define MAX 100000
struct queue {
	char name[11];
	int time;
};

int head;
int tail;

struct queue dequeue(struct queue p[])
{	
	int i;
	struct queue tmp = p[head];
	head = (head + 1) % (MAX + 1);
	return tmp;
}

void enqueue(struct queue p[], struct queue tmp, int tail)
{	
	p[tail] = tmp;
}

int main()
{	
	int i, idx;
	int n, q;
	int rem, timer;
	struct queue p[MAX];

	scanf("%d %d", &n, &q);

	struct queue ret[n];

	for(i = 0; i < n; i++)
		scanf("%s %d", p[i].name, &p[i].time);
	head = 0;
	tail = n - 1;
	rem = n;
	timer = 0;
	idx = 0;
	
	while(timer <= 1000000 && rem > 0) {
		struct queue tmp;
		if(p[head].time <= q) {
			timer += p[head].time;
			tmp = dequeue(p);
			tmp.time = timer;
			enqueue(ret, tmp, idx);
			idx++;
			rem--;
		}
		else {
			timer += q;
			p[head].time -= q;
			tail = (tail + 1) % (MAX + 1);
			tmp = dequeue(p);
			enqueue(p, tmp, tail);
		}
	}

	for(i = 0; i < n; i++)
		printf("%s %d\n", ret[i].name, ret[i].time);

    return 0;
}