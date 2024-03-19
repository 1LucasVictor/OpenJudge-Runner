#include<stdio.h>
#define NIL -1
#define N 25
void preorder(int);
void inorder(int);
void postorder(int);

typedef struct{
  int id;
  int left;
  int right;
}Tree;
Tree T[N];

int main(){
  int i,n;

  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d %d %d",&T[i].id,&T[i].left,&T[i].right);
  }

  printf("Preorder\n");
  preorder(T[0].id);
  printf("\nInorder\n");
  inorder(T[0].id);
  printf("\nPostorder\n");
  postorder(T[0].id);
  printf("\n");
  return 0;
}
void preorder(int u){
  if(u==NIL)
    return;
  printf(" %d",u);
  preorder(T[u].left);
  preorder(T[u].right);
}
void inorder(int u){
  if(u==NIL)
    return;
  inorder(T[u].left);
  printf(" %d",u);
  inorder(T[u].right);
}
void postorder(int u){
  if(u==NIL)
    return;
  postorder(T[u].left);
  postorder(T[u].right);
  printf(" %d",u);
}