#include <stdio.h>
#define MAX 10000
#define NIL -1

struct Node {
  int p;
  int l;
  int r;
};

struct Node T[MAX];
int n;

void pre(int u){
  if(u == NIL) return;
  printf(" %d", u);
  pre(T[u].l);
  pre(T[u].r);
}

void in(int u){
  if(u == NIL)return;
  in(T[u].l);
  printf(" %d", u);
  in(T[u].r);
}

void pos(int u){
  if(u == NIL) return;
  pos(T[u].l);
  pos(T[u].r);
  printf(" %d", u);
}
int main(){
  int i;
  int v,l,r, root;

  scanf("%d", &n);

  for(i=0; i<n; i++){
    T[i].p = NIL;
  }

  for(i=0; i<n; i++){
    scanf("%d %d %d", &v, &l, &r);
    T[v].l = l;
    T[v].r = r;
    if(l != NIL) T[l].p = v;
    if(r != NIL) T[r].p = v;
  }

  for(i=0; i<n; i++){
    if(T[i].p == NIL) root = i;
  }
  printf("Preorder\n");
  pre(root);
  printf("\n");
  printf("Inorder\n");
  in(root);
  printf("\n");
  printf("Postorder\n");
  pos(root);
  printf("\n");
  
  return 0;
}

