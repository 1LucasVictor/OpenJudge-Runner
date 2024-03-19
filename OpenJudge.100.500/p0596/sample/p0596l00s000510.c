#include <stdio.h>
#include <stdlib.h>

typedef struct List {
	struct List *prev, *next;
	char color;
} list;

int main()
{
	char S[100001];
	scanf("%s", S);
	
	int i, ans = 0;
	list L[100001], *p;
	L[0].prev = NULL;
	L[0].next = NULL;
	L[0].color = S[0];
	for (i = 1; S[i] != 0; i++) {
		L[i-1].next = &(L[i]);
		L[i].prev = &(L[i-1]);
		L[i].next = NULL;
		L[i].color = S[i];
	}
	for (p = L[0].next; p != NULL; p = p->next) {
		if (p->prev != NULL && p->color != p->prev->color) {
			ans += 2;
			if (p->prev->prev != NULL) p->prev->prev->next = p->next;
			if (p->next != NULL) p->next->prev = p->prev->prev;
		}
	}
	
	printf("%d\n", ans);
	fflush(stdout);
	return 0;
}