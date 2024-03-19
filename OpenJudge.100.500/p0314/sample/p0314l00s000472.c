#include<stdio.h>
#define MAX 100005
#define NIL -1

typedef struct{
  int p,l,r;
}Node;

Node T[MAX];

void preorder(int u){
  if(u == NIL){
    return;
  }
  printf(" %d",u);
  preorder(T[u].l);
  preorder(T[u].r);
}

void inorder(int u){
  if(u == NIL){
    return;
  }
  inorder(T[u].l);
  printf(" %d",u);
  inorder(T[u].r);
}

void postorder(int u){
  if(u == NIL){
    return;
  }
  postorder(T[u].l);
  postorder(T[u].r);
  printf(" %d",u);
}

int main(){
  int n,l,r,id,root,i;
  scanf("%d",&n);

  for(i=0;i<n;i++){
    T[i].p = T[i].r = T[i].l = NIL;
  }

  for(i=0;i<n;i++){
    scanf("%d %d %d",&id,&l,&r);
    T[id].l = l;
    T[id].r = r;
    if(l != NIL)T[l].p = id;
    if(r != NIL)T[r].p = id;
  }

  for(i=0;i<n;i++){
    if(T[i].p == NIL){
      root = i;
    }
  }

  printf("Preorder\n");
  preorder(root);
  printf("\nInorder\n");
  inorder(root);
  printf("\nPostorder\n");
  postorder(root);
  printf("\n");

  return 0;
}

