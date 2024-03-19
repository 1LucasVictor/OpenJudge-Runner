#include <stdio.h>

#define NMAX 10001
#define NIL -1

struct Node{
  int p;
  int l;
  int r;
};

struct Node T[NMAX];

int n;

void preParse(int u){
  if(u == NIL){
    return;
  }
  printf(" %d",u);
  preParse(T[u].l);
  preParse(T[u].r);
}

void inParse(int u){
  if(u == NIL){
    return;
  }
  inParse(T[u].l);
  printf(" %d",u);
  inParse(T[u].r);
}

void postParse(int u){
  if(u == NIL){
    return;
  }
  postParse(T[u].l);
  postParse(T[u].r);
  printf(" %d",u);
}

int main(void){
  int i,v,l,r,root;

  scanf("%d",&n);
  for(i = 0;i < n;i++){
    T[i].p = NIL;
  }

  for(i = 0;i < n;i++){
    scanf("%d %d %d",&v,&l,&r);
    T[v].l = l;
    T[v].r = r;
    if(l != NIL){
      T[l].p = v;
    }
    if(r != NIL){
      T[r].p = v;
    }
  }
  for(i = 0;i < n;i++){
    if(T[i].p == NIL){
      root = i;
    }
  }

  printf("Preorder\n");
  preParse(root);
  printf("\nInorder\n");
  inParse(root);
  printf("\nPostorder\n");
  postParse(root);
  printf("\n");

  return 0;
}


