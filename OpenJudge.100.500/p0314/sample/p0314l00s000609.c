#include <stdio.h>
#define MAX 25

typedef struct{
  int parent;
  int left;
  int right;
  int order;
}Node;

Node T[MAX];
int n;
void Preorder(int);
void Inorder(int);
void Postorder(int);

int main(){
  int i, id, l, r, root = 0;
  scanf("%d",&n);
  for(i = 0; i < n; i++){
    T[i].parent = -1;
    T[i].left = -1;
    T[i].right = -1;
    T[i].order = i;
  }
  for(i = 0; i < n; i++){
    scanf("%d%d%d",&id, &l, &r);
    T[id].left = l;
    T[id].right = r;
    if(l != -1) T[l].parent = id;
    if(r != -1) T[r].parent = id;
  }
  for(i = 0; i < n; i++){
    if(T[i].parent == -1) root = i;
  }

  printf("Preorder\n");
  Preorder(root);
  printf("\nInorder\n");
  Inorder(root);
  printf("\nPostorder\n");
  Postorder(root);
  printf("\n");
  
  return 0;
}

void Preorder(int r){
  if(r != -1){
    printf(" %d",T[r].order);
    if(T[r].left != -1) Preorder(T[r].left);
    if(T[r].right != -1) Preorder(T[r].right);
  }
}

void Inorder(int r){
  if(r != -1){
    if(T[r].left != -1) Inorder(T[r].left);
    printf(" %d",T[r].order);
    if(T[r].right != -1) Inorder(T[r].right);
  }
}

void Postorder(int r){
  if(r != -1){
    if(T[r].left != -1) Postorder(T[r].left);
    if(T[r].right != -1) Postorder(T[r].right);
    printf(" %d",T[r].order);
  }
}