#include<stdio.h>
#define MAX 10000
#define NIL -1

struct Node {int q,m,r;};
struct Node T[MAX];
int n;

void pre(int u){
  if( u == NIL) return;
  printf(" %d", u);
  pre(T[u].m);
  pre(T[u].r);
}

void in(int u){
  if(u == NIL) return;
  in(T[u].m);
  printf(" %d", u);
  in(T[u].r);
}

void post(int u){
  if(u == NIL) return;
  post(T[u].m);
  post(T[u].r);
  printf(" %d", u);
}

int main(){
  int i,v,m,r,root;

  scanf("%d",&n);
  for( i = 0; i < n; i++){
    T[i].q = NIL;
  }

  for( i = 0; i <n; i++){
    scanf("%d %d %d",&v, &m , &r);
    T[v].m = m;
    T[v].r = r;
    if(m != NIL) T[m].q = v;
    if(r != NIL) T[r].q = v;
  }

  for( i = 0; i < n ; i++) if( T[i].q == NIL) root = i;

  printf("Preorder\n");
  pre(root);
  printf("\n");
  printf("Inorder\n");
  in(root);
  printf("\n");
  printf("Postorder\n");
  post(root);
  printf("\n");

  return 0;
}

