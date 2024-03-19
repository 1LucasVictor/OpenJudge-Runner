#include <stdio.h>
#include <stdlib.h>
#define MAX 100000

int *q;
int head, tail;

void initialize(int n) {
	q = malloc(sizeof(int) * n);
	head = tail = 0;
}

int isEmpty() {
	return head == tail;
}

int isFull() {
	return head == (tail + 1) % MAX;
}

void enqueue(int x) {
	if (!isFull()) {
		q[tail] = x;
		tail = (tail + 1) % MAX;
	}
}

int dequeue() {
	int x;
	if (!isEmpty()) {
		x = q[head];
		head = (head + 1) % MAX;
		return x;
	}
}

int main(int argc, char const *argv[]) {
	char name[100000][11];
	int ptime[100000];
	int time = 0;
	int i, t, n, q, rest;
	scanf("%d%d", &n, &q);
	initialize(MAX);
	for (i = 0; i < n; i++) {
		scanf("%s %d", name[i], &ptime[i]);
		enqueue(i);
	}
	while (!isEmpty()) {
		t = dequeue();
		if (ptime[t] <= q) {
			time += ptime[t];
			ptime[t] = 0;
			printf("%s %d\n", name[t], time);
		} else {
			time += q;
			ptime[t] -= q;
			enqueue(t);
		}
	}
	return 0;
}