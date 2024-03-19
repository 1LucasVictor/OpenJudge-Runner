#include<stdio.h>

#define MAX 100000
#define NIL -1

struct Node { int p, l, r; };

typedef struct Node node;

node T[MAX];

void preParse(int u) {

  if ( u == NIL) return;
  printf(" %d", u);
  preParse(T[u].l);
  preParse(T[u].r);

}

void inParse(int u) {

  if ( u == NIL ) return;
  inParse(T[u].l);
  printf(" %d", u);
  inParse(T[u].r);

}

void postParse(int u) {

  if ( u == NIL ) return;
  postParse(T[u].l);
  postParse(T[u].r);
  printf(" %d", u);

}

void print(int root){

    printf("Preorder\n");
  preParse(root);
  printf("\n");
  printf("Inorder\n");
  inParse(root);
  printf("\n");
  printf("Postorder\n");
  postParse(root);
  printf("\n");

}

void scan(){

  int i,n,v,l,r;
  node T[MAX];
  
  for (i = 0; i < n; i++) {

    scanf("%d %d %d", &v, &l, &r);

    
    T[v].l = l; T[v].r = r;

    if ( l != NIL ) T[l].p = v;

    if ( r != NIL ) T[r].p = v;

    return;
    
  }

  return;
}
  

int main() {

  int n;
  
  int i, v, l, r, root;

  scanf("%d", &n);
  
  for (i = 0; i<n; i++ ) {

    T[i].p = NIL;

  }
  
  for (i = 0; i < n; i++) {

    scanf("%d %d %d", &v, &l, &r);

    
    T[v].l = l; T[v].r = r;

    if ( l != NIL ) T[l].p = v;

    if ( r != NIL ) T[r].p = v;
    else continue;

  }

  for (i = 0; i<n; i++ ){
    if ( T[i].p == NIL ) root = i;
  }
  
  print(root);

  return 0;
}

