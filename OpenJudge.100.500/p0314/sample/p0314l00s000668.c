#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
  int id;
  int parent;
  int left;
  int right;
}tree;

tree *T;

void preorder(int r){
  printf(" %d",r);
  if(T[r].left != -1) preorder(T[r].left);
  if(T[r].right != -1) preorder(T[r].right);
}

void inorder(int r){
  if(T[r].left != -1) inorder(T[r].left);
  printf(" %d",r);
  if(T[r].right != -1) inorder(T[r].right);
}

void postorder(int r){
  if(T[r].left != -1) postorder(T[r].left);
  if(T[r].right != -1) postorder(T[r].right);
  printf(" %d",r);
}

int main(){
  int i, n, id, root;
  scanf("%d",&n);
  T = malloc(sizeof(tree)*n);
  for(i = 0; i < n; i++) T[i].parent = -1;
  for(i = 0; i < n; i++){
    scanf("%d",&id);
    scanf("%d%d",&T[id].left, &T[id].right);
    T[T[id].left].parent = id;
    T[T[id].right].parent = id;
  }
  for(i = 0; i < n; i++){
    if(T[i].parent == -1){
      root=i;
      break;
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