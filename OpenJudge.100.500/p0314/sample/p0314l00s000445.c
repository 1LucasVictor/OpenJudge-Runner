#include<stdio.h>
#define NIL -1
#define N 25
void preorder(int);
void inorder(int);
void postorder(int);

typedef struct{
  int parent;
  int left;
  int right;
}Tree;
Tree T[N];

int main(){
  int i,n,id,l,r,root;

  for(i=0;i<N;i++){
    T[i].parent=NIL;
    T[i].left=NIL;
    T[i].right=NIL;
  }
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d %d %d",&id,&l,&r);
    T[id].left = l;
    T[id].right = r;
    if(T[id].left != -1)
      T[T[id].left].parent = id;
    if(T[id].right != -1)
      T[T[id].right].parent = id;
  } 

  for(i=0;i<n;i++){
    if(T[i].parent == NIL)
      root = i;
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
void preorder(int u){
  if(u==NIL)
    return;
  printf(" %d",u);
  if(T[u].left!=-1)
    preorder(T[u].left);
  if(T[u].right!=-1)
    preorder(T[u].right);
}
void inorder(int u){
  if(u==NIL)
    return;
  if(T[u].left!=-1)
    inorder(T[u].left);
  printf(" %d",u);
  if(T[u].right!=-1)
    inorder(T[u].right);
}
void postorder(int u){
  if(u==NIL)
    return;
  if(T[u].left!=-1)
    postorder(T[u].left);
  if(T[u].right!=-1)
    postorder(T[u].right);
  printf(" %d",u);  
}