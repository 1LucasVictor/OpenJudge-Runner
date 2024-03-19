#include <stdio.h>

#define SIZE 10000

typedef struct {
	int time;
	int name[100];
} Process;

int head, tail;
Process Q[SIZE];

Process dequeue() {
	int x = head;
	if (head == SIZE-1) {
		head = 0;
	}
	else {
		head++;
	}
	return Q[x];
}

void enqueue(Process x) {
	Q[tail] = x;
	if (tail == SIZE-1) {
		tail = 0;
	}
	else {
		tail++;
	}
}


int main() {
	int i, n, q, time = 0;
	Process cell;

	scanf("%d %d", &n, &q);

	for (i = 0; i < n; i++) {
		scanf("%s", Q[i].name);
		scanf("%d", &Q[i].time);
	}

	head = 0;
	tail = n;

	while (head != tail) {
		cell = dequeue();
		if (cell.time <= q) {
			time += cell.time;
			printf("%s %d\n", cell.name, time);
		}
		else {
			cell.time -= q;
			time += q;
			enqueue(cell);
		}
	}

	return 0;
}