#include<stdio.h>
#include<stdlib.h>
#define N 10000
#define NIL -1
#define O 0


struct Node{
  int p,l,r;
};

struct Node T[N];
int n;

void preOrder(int u){
  if(u==NIL){
    return;
  }
  printf(" %d",u);
  preOrder(T[u].l);
  preOrder(T[u].r);
}

void inOrder(int u){
  if(u==NIL){
    return;
  }
  inOrder(T[u].l);
  printf(" %d",u);
  inOrder(T[u].r);
}

void postOrder(int u){
  if(u==NIL){
    return;
  }
  postOrder(T[u].l);
  postOrder(T[u].r);
  printf(" %d",u);
}

int main(){
  int i,d,v,l,r;
  scanf("%d",&n);
  for(i=O;i<n;i++){
    T[i].p=NIL;
  }
  for(i=O;i<n;i++){
    scanf("%d",&v);
    scanf("%d",&l);
    scanf("%d",&r);
    T[v].l=l;
    T[v].r=r;
    if(l!=NIL){
      T[l].p=v;
    }
    if(r!=NIL){
      T[r].p=v;
    }
  }
  for(i=O;i<n;i++){
    if(T[i].p==NIL){
      d=i;
    }
  }

  printf("Preorder\n");
  preOrder(d);
  printf("\n");
  printf("Inorder\n");
  inOrder(d);
  printf("\n");
  printf("Postorder\n");
  postOrder(d);
  printf("\n");
  return O;
}

