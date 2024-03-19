#include<stdio.h>
#include<stdlib.h>
typedef struct{
  int this;
  int parent;
  int l,r;    // child
}node;
void Preorder(int);
void Inorder(int);
void Postorder(int);
node *T;
int main(){
  int n, i, root;
  scanf("%d",&n);
  T = (node *)malloc(sizeof(node) * n);
  for(i=0; i<n; i++) T[i].parent = -1;
  for(i=0; i<n; i++){
    scanf("%d",&T[i].this);
    if(i == 0) root = i;
    scanf("%d%d",&T[T[i].this].l,&T[T[i].this].r);
    T[T[T[i].this].l].parent = T[i].this;
    T[T[T[i].this].r].parent = T[i].this;
  }
  printf("Preorder\n");
  Preorder(root);
  printf("\nInorder\n");
  Inorder(root);
  printf("\nPostorder\n");
  Postorder(root);
  printf("\n");
  free(T);
  return 0;
}

void Preorder(int x){
  if(x != -1){
    printf(" %d",T[x].this);
    Preorder(T[x].l);
    Preorder(T[x].r);
  }
}

void Inorder(int x){
  if(x != -1){
    Inorder(T[x].l);
    printf(" %d",T[x].this);
    Inorder(T[x].r);
  }
}

void Postorder(int x){
  if(x != -1){
    Postorder(T[x].l);
    Postorder(T[x].r);
    printf(" %d",T[x].this);
  }
}