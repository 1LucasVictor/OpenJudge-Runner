// AOJ ALDS1_12_A Minimum Spanning Tree
// 2018.5.2 bal4u

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_V 105

/* UNION-FIND library */
int id[MAX_V], size[MAX_V];
void init(int n) { int i; for (i = 0; i < n; i++) id[i] = i, size[i] = 1; }
int root(int i) { while (i != id[i]) id[i] = id[id[i]], i = id[i]; return i; }
int connected(int p, int q) { return root(p) == root(q); }
void unite(int p, int q)
{
    int i = root(p), j = root(q); if (i == j) return;
    if (size[i] < size[j]) id[i] = j, size[j] += size[i]; else id[j] = i, size[i] += size[j];
}

typedef struct { int s, t, w; } EDGE;
EDGE edge[5100];

int cmp(EDGE *a, EDGE *b) { return a->w - b->w; }

int kruskal(int V, int E)
{
	int ans;
	EDGE *ep;

	qsort(edge, E, sizeof(EDGE), cmp);
	init(V); 
	ans = 0;
	ep = edge; while (E--) {
		if (!connected(ep->s, ep->t)) { 
			unite(ep->s, ep->t);
			ans += ep->w;
		}
		ep++;
	}
	return ans;
}

#if 1
#define gc() getchar_unlocked()
#else
#define gc() getchar()
#endif

int in()
{
	int n = 0, c = gc();
	while (c <= ' ') c = gc();
	if (c == '-') {	c = gc();
		do n = 10*n + (c & 0xf), c = gc(); while (c >= '0');
		return -n;
	}
	do n = 10*n + (c & 0xf), c = gc(); while (c >= '0');
	return n;
}

int main()
{
	int n, a, i, j;
	EDGE *ep;

	n = in();
	ep = edge;
	for (i = 0; i < n; i++) for (j = 0; j < n; j++) {
		a = in();
		if (j > i && a >= 0) {
			ep->s = i, ep->t = j, ep->w = a;
			ep++;
		}
	}
	printf("%d\n", kruskal(n, ep-edge));
	return 0;
}

