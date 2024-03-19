#include <stdio.h>
#define LEN 100005
typedef struct pp {
	char name[10];
	int time;
}PP;

int head, tail;
PP Q[LEN];

PP dequeue() {
	PP x = Q[head];
	head = (head + 1) % LEN;
	return x;
}

void enqueue(PP x) {
	Q[tail] = x;
	tail = (tail + 1) % LEN;
}

int min(int a, int b) {
	return a < b ? a : b;
}

int main() {
	int i;
	int n, q;
	PP u;
	int c, expl = 0;

	scanf("%d %d", &n, &q);
	for (i = 1; i <= n; i++) {
		scanf("%s", Q[i].name);
		scanf("%d", &Q[i].time);
	}
	head = 1; tail = n + 1;

	while (head != tail) {
		u = dequeue();
		c = min(u.time, q);
		expl += c;
		u.time -= c;
		if (u.time <= 0) {
			printf("%s %d\n", u.name, expl);
		} else {
			enqueue(u);
		}
	}

	return 0;
}
