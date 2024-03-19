#include<stdio.h>
#include<string.h>

typedef struct pp {
	int time;
	char name[100];
} P;

P Q[100001];
int head, tail;


void enqueue(P x) {
	Q[tail] = x;
	tail = (tail + 1) % 100001;
}

P dequeue() {
	P x;
	x = Q[head];
	head = (head + 1) % 100001;
	return x;
}

int min(int a, int b) {
	if (a <= b) {
		return a;
	}
	else {
		return b;
	}
}

int main(void) {
	
	int i, n, q;
	int runtime = 0;
	P u;
	int mintime;
	
	scanf("%d%d", &n, &q);

	for (i = 1; i <= n; i++) {
		scanf("%s", Q[i].name);
		scanf("%d", &Q[i].time);
	}

	head = 1; tail = n + 1;

	while (head != tail) {
		u = dequeue();
		mintime = min(u.time, q);
		u.time -= mintime;
		runtime += mintime;
		
		if (u.time > 0) {
			enqueue(u);
		}
		else {
			printf("%s %d\n", u.name, runtime);
		}


	}
	return 0;
}
