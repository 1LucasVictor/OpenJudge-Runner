#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include<stdio.h>

struct Queue {
	char name[128];
	int time;
};

int head = 0, tail = 0, n;
struct Queue Q[100000];

void enqueue(struct Queue);
struct Queue dequeue();

int main() {
	struct Queue a;
	int q, i, t = 0, cnt = 0;
	scanf("%d%d", &n, &q);
	for (i = 0; i < n; i++) scanf("%s %d", Q[i].name, &Q[i].time);
	while (cnt != n) {
		a = dequeue();
		if (a.time <= q) {
			t += a.time;
			printf("%s %d\n", a.name, t);
			++cnt;
		}
		else {
			t += q;
			a.time -= q;
			enqueue(a);
		}
	}
	return 0;
}

void enqueue(struct Queue a) {
	Q[tail] = a;
	if (tail + 1 == n) tail = 0;
	else ++tail;
}

struct Queue dequeue() {
	struct Queue a;
	a = Q[head];
	if (head + 1 == n) head = 0;
	else ++head;
	return a;
}