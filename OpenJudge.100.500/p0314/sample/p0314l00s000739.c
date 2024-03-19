#include <stdio.h>
#define MAX 25
#define NIL -1

typedef struct node{
  int p;
  int l;
  int r;
}Node;

void preorder(int);
void inorder(int);
void postorder(int);

Node T[MAX];
int n = 0;

int main(){
  int i = 0;
  int v = 0, l = 0, r = 0, root = 0;
  
  scanf("%d",&n);
  
  for(i = 0; i < n; i++){
    T[i].p = NIL;
  }

  for(i = 0; i < n; i++){
    scanf("%d%d%d",&v,&l,&r);
    T[v].l = l;
    T[v].r = r;
    if(l != NIL)T[l].p = v;
    if(r != NIL)T[r].p = v;
  }

  for(i = 0; i < n; i++){
    if(T[i].p == NIL){
      root = i;
    }
  }

  printf("Preorder\n");
  preorder(root);
  printf("\n");
  printf("Inorder\n");
  inorder(root);
  printf("\n");
  printf("Postorder\n");
  postorder(root);
  printf("\n");
  
  return 0;
}

void preorder(int u){
  if(u != NIL){
    printf(" %d",u);
    preorder(T[u].l);
    preorder(T[u].r);
  }
}

void inorder(int u){
  if(u != NIL){
    inorder(T[u].l);
    printf(" %d",u);
    inorder(T[u].r);
  }
}

void postorder(int u){
  if(u != NIL){
    postorder(T[u].l);
    postorder(T[u].r);
    printf(" %d",u);
  }
}

