

#include<stdio.h>
#define MAX 10000
#define NIL -1

struct Node { int p, l, r; };
struct Node T[MAX];
int n;

void P(int u) {
  if ( u == NIL ) return;
  printf(" %d", u);
  P(T[u].l);
  P(T[u].r);
}

void iP(int u) {
  if ( u == NIL ) return;
  iP(T[u].l);
  printf(" %d", u);
  iP(T[u].r);
}

void pP(int u) {
  if ( u == NIL ) return;
  pP(T[u].l);
  pP(T[u].r);
  printf(" %d", u);
}

int main() {
  int i, v, l, r, root;

  scanf("%d", &n);
  for( i = 0; i < n; i++ )
    T[i].p = NIL;

  for ( i = 0; i < n; i++ ) {
    scanf("%d %d %d", &v, &l, &r);
    T[v].l = l;
    T[v].r = r;
    if ( l != NIL ) T[l].p = v;
    if ( r != NIL ) T[r].p = v;
  }

  for ( i = 0; i < n; i++ ) if ( T[i].p == NIL ) root = i;

  printf("Preorder\n");
  P(root);
  printf("\n");
  printf("Inorder\n");
  iP(root);
  printf("\n");
  printf("Postorder\n");
  pP(root);
  printf("\n");

  return 0;
}

