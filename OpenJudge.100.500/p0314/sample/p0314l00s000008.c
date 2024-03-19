#include<stdio.h>
#define MAX 26
#define NIL -1

struct Node { int p, l, r; };
struct Node T[MAX];


void preParse(int u) {
    if (u == NIL) return;
    printf(" %d", u);
    preParse(T[u].l);
    preParse(T[u].r);
}

void inParse(int u) {
    if (u == NIL) return;
    inParse(T[u].l);
    printf(" %d", u);
    inParse(T[u].r);
}

void postParse(int u) {
    if (u == NIL) return;
    postParse(T[u].l);
    postParse(T[u].r);
    printf(" %d", u);
}

int main() {
    int n,v, a, b, i, r;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
	T[i].p = NIL;
	T[i].l = NIL;
	T[i].r = NIL;
    }
    for (i = 0; i < n; i++) {
	scanf("%d %d %d", &v, &a, &b);
	T[v].l = a;
	T[v].r = b;
	if (a != NIL) T[a].p = v;
	if (b != NIL) T[b].p = v;
    }

    for (i = 0; i < n; i++) if (T[i].p == NIL) r = i;
    
    printf("Preorder\n");
    preParse(r);
    printf("\nInorder\n");
    inParse(r);
    printf("\nPostorder\n");
    postParse(r);
    printf("\n");

    return 0;
}