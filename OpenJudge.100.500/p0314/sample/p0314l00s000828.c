#include<stdio.h>
#define MAX 25
#define NIL -1
struct Node{int p,l,r;};
struct Node T[MAX];
void Preorder(int);
void Inorder(int);
void Postorder(int);

void Preorder(int u){
  printf(" %d",u);
  if(T[u].l!=NIL){
    Preorder(T[u].l);
  }
  if(T[u].r!=NIL){
    Preorder(T[u].r);
  }
}

void Inorder(int u){
  if(T[u].l!=NIL){
    Inorder(T[u].l);
  }
  printf(" %d",u);
  if(T[u].r!=NIL){
    Inorder(T[u].r);
  }
}

void Postorder(int u){
  if(T[u].l!=NIL){
    Postorder(T[u].l);
  }
  if(T[u].r!=NIL){
    Postorder(T[u].r);
  }
  printf(" %d",u);
}


main(){
  int n,i,v,l,r;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    T[i].p=T[i].l=T[i].r=NIL;
  }
  for(i=0;i<n;i++){
    scanf("%d%d%d",&v,&l,&r);
    if(l!=NIL){
      T[l].p=v;
    }
    if(r!=NIL){
      T[r].p=v;
    }
    T[v].l = l;
    T[v].r = r;
  } 
  printf("Preorder\n");
  for ( i = 0; i < n; i++ ){
    if(T[i].p==NIL){
      Preorder(i);
      printf("\n");
      printf("Inorder\n");
      Inorder(i);
      printf("\n");
      printf("Postorder\n");
      Postorder(i);
      printf("\n");
    }
  }
  return 0;
}