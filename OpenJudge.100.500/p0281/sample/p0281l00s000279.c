// AOJ ALDS1_12_B Single Source Shortest Path I
// 2018.5.1 bal4u
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
#define QMAX 15000
typedef struct { int t, s; } QUE;
QUE que[QMAX]; int qsize;

#define PARENT(i) ((i)>>1)
#define LEFT(i)   ((i)<<1)
#define RIGHT(i)  (((i)<<1)+1)

void min_heapify(int i)
{
	int l, r, min;
	QUE qt;

	l = LEFT(i), r = RIGHT(i);
	if (l < qsize && que[l].t < que[i].t) min = l; else min = i;
	if (r < qsize && que[r].t < que[min].t) min = r;
	if (min != i) {
		qt = que[i], que[i] = que[min], que[min] = qt;
		min_heapify(min);
	}
}

void deq()
{
	que[0] = que[--qsize];
	min_heapify(0);
}

void enq(int s, int t)
{
	int i, min;
	QUE qt;

	i = qsize++;
	que[i].s = s, que[i].t = t;
	while (i > 0 && que[min = PARENT(i)].t > que[i].t) {
		qt = que[i], que[i] = que[min], que[min] = qt;
		i = min;
	}
}

#define INF   0x30303030
#define MAX_V 102
int hi[MAX_V], *to[MAX_V], *dd[MAX_V];
int dist[MAX_V];

void dijkstra(int n, int start)
{
	int i, s, e, t, nt;

	memset(dist, INF, n << 2);
	qsize = 0;
	dist[start] = 0, enq(start, 0);
	while (qsize) {
		s = que[0].s, t = que[0].t, deq();
		if (dist[s] < t) continue;
		for (i = 0; i < hi[s]; i++) {
			e = to[s][i], nt = t + dd[s][i];
			if (dist[e] > nt) dist[e] = nt, enq(e, nt);
		}
	}
}

#if 1
#define gc() getchar_unlocked()
#else
#define gc() getchar()
#endif
 
int in()
{
	int n = 0, c = gc();
	do n = 10*n + (c & 0xf), c = gc(); while (c >= '0');
	return n;
}
 
int main()
{
	int n, i, j, k, u;
 
	n = in();
	for (i = 0; i < n; i++) {
		u = in(), hi[u] = k = in();
		to[u] = malloc(k<<2);
		dd[u] = malloc(k<<2);
		for (j = 0; j < k; j++) {
			to[u][j] = in(), dd[u][j] = in();
		}
	}
	dijkstra(n, 0);
	for (i = 0; i < n; i++) printf("%d %d\n", i, dist[i]);
	return 0;
}
