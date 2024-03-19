#include<stdio.h>

#define MAX 10000
#define NIL -1

struct node {
  int p,l,r;
};

struct node T[MAX];
int n;

void pre(int a){
  if(a == NIL) return;
  printf(" %d",a);
  pre(T[a].l);
  pre(T[a].r);
}

void in(int a){
  if(a == NIL) return;
  in(T[a].l);
  printf(" %d",a);
  in(T[a].r);
}

void post(int a){
  if(a == NIL) return;
  post(T[a].l);
  post(T[a].r);
  printf(" %d",a);
}

int main(){
  int i,v,l,r,root;

  scanf("%d",&n);
  for(i = 0; i < n; i++){
    T[i].p = NIL;
  }

  for(i = 0; i < n; i++){
    scanf("%d%d%d",&v,&l,&r);
    T[v].l = l;
    T[v].r = r;
    if(l != NIL) T[l].p = v;
    if(r != NIL) T[r].p = v;
  }

  for(i = 0; i < n; i++){
    if(T[i].p == NIL) root = i;
  }

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

