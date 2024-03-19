#include <stdio.h>

#define HASH 100003

typedef struct List {
	struct List *next;
	int v;
} list;

int main()
{
	int h, i, j, N, A;
	list *hash[HASH] = {}, d[200001], *p;
	scanf("%d", &N);
	for (i = 0, j = 0; i < N; i++) {
		scanf("%d", &A);
		h = A % HASH;
		for (p = hash[h]; p != NULL; p = p->next) if (p->v == A) break;
		if (p != NULL) break;
		else {
			d[j].v = A;
			d[j].next = hash[h];
			hash[h] = &(d[j++]);
		}
	}
	if (i == N) printf("YES\n");
	else printf("NO\n");
	fflush(stdout);
	return 0;
}