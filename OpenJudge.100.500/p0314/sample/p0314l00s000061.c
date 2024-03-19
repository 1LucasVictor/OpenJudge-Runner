#include<stdio.h>
#define MAX 10000
#define NIL -1

typedef struct{
  int p;
  int l;
  int r;
}node;
node T[MAX];

int n;

int pre(int);
int in(int);
int post(int);

int main(){
  int i,v,l,r,root;

  scanf("%d",&n);
  for(i = 0; i < n; i++)
    T[i].p = NIL;
  
  for(i = 0; i < n; i++){
    scanf("%d%d%d",&v,&l,&r);
    T[v].l = l;
    T[v].r = r;
    if( l != NIL) T[l].p = v;
    if( r != NIL) T[r].p = v;
  }

  for(i = 0; i < n; i++){
    if(T[i].p == NIL) root = i;
  }

  printf("Preorder\n");
  pre(root);
  printf("\nInorder\n");
  in(root);
  printf("\nPostorder\n");
  post(root);
  printf("\n");

  return 0;
}

int pre(int u){
  if(u == NIL) return 0;
  printf(" %d",u);
  pre(T[u].l);
  pre(T[u].r);
}

int in(int u){
  if(u == NIL) return 0;
  in(T[u].l);
  printf(" %d",u);
  in(T[u].r);
}

int post(int u){
  if(u == NIL) return 0;
  post(T[u].l);
  post(T[u].r);
  printf(" %d" ,u);
}


    