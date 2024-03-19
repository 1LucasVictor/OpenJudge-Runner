#include <stdio.h>
#include <stdlib.h>
#define MAX 100005

struct process {
	char name[10];
	int time;
} P[1000000];

int head, end;

void enqueue(struct process x) {
	P[end] = x;
	end = (end + 1) % MAX;
}

struct process dequeue() {
	struct process x = P[head];
	head = (head + 1) % MAX;
	return x;
}

int min( a, b) {
	return a < b ? a : b;
}

int main() {
	int n, q;
	int i;
	int plus = 0;
	struct process p;
	scanf("%d%d", &n, &q);
	head = 1;
	end = n + 1;
	for (i = 1; i <= n; i++) {
		scanf("%s%d", P[i].name, &P[i].time);
	}
	while (head != end) {
		p = dequeue();
		int m = min(q, p.time);
		p.time -= m;
		plus += m;
		if (p.time > 0)
			enqueue(p);
		else
			printf("%s %d\n", p.name, plus);
	}
	return 0;
}

