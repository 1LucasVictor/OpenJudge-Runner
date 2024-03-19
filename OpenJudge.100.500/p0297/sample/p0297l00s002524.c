#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char name[12];
	int time, shift;
} process;

int q;

int cmp(const void *a, const void *b) {
	process *pa = (process *)a, *pb = (process *)b;
	return pa->time / q - pb->time / q;
}

int main(void) {
	int now = 0, N, i, rem;
	process *ps;
	scanf("%d %d", &N, &q);
	ps = malloc(sizeof(process) * N);
	for (i = 0; i < N; i++) {
		scanf("%s %d", ps[i].name, &ps[i].time);
		ps[i].shift = i;
	}
	qsort(ps, N, sizeof(process), cmp);
	for (i = 0; i < N; i++) {
		now += ps[i].time;
		if (ps[i].time < q) {
			rem = (ps[i].shift - i) * q + now;
		} else {
			rem = now + (ps[i].time - 1) / q * (N - i - 1) * q;
		}
		printf("%s %d\n", ps[i].name, rem);
	}
}