#include<stdio.h>
#define MAX 10000
#define NIL -1

struct Node{
  int s, t, u;
};

struct Node T[MAX];
int n;

void preParse(int u){
  if ( u == NIL ) return;
  printf(" %d", u);
  preParse(T[u].t);
  preParse(T[u].u);
}
void inParse(int u){
  if ( u == NIL ) return;
  inParse(T[u].t);
  printf(" %d", u);
  inParse(T[u].u);
}
void postParse(int u){
  if ( u == NIL ) return;
  postParse(T[u].t);
  postParse(T[u].u);
  printf(" %d", u);
}

main(){
  int i, s, t, u, root;
  scanf("%d", &n);
  for ( i = 0; i < n; i++ ) {
    T[i].s = NIL;
  }

  for ( i = 0; i < n; i++ ){
    scanf("%d %d %d", &s, &t, &u);
    T[s].t = t;
    T[s].u = u;
    if ( t != NIL ) T[t].s = s;
    if ( u != NIL ) T[u].s = s;
  }

  for ( i = 0; i < n; i++ ) if ( T[i].s == NIL ) root = i;
  printf("Preorder\n");
  preParse(root);
  printf("\n");
  printf("Inorder\n");
  inParse(root);
  printf("\n");
  printf("Postorder\n");
  postParse(root);
  printf("\n");

  return 0;
}

