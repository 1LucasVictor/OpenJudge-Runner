#include<stdio.h>

#define MAX 30
#define NIL -1

typedef struct node{
  int parent;
  int left;
  int right;
}Node;

Node T[MAX];

void preorder(int);
void inorder(int);
void postorder(int);

int main(){
  int i, j, n;
  int id, left, right;
  int root = NIL;
  
  scanf("%d",&n);
  for(i=0; i<n; i++){
    T[i].parent = NIL;
    T[i].left = NIL;
    T[i].right = NIL;
  }

  for(i=0; i<n; i++){
    scanf("%d%d%d",&id,&left,&right);
    T[id].left = left;
    T[id].right = right;
    if(left != NIL) T[left].parent = id;
    if(right != NIL) T[right].parent = id;
  }
  for(i=0; i<n; i++){
    if(T[i].parent == -1) root = i;
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
    preorder(T[u].left);
    preorder(T[u].right);
  }
}

void inorder(int u){
  if(u != NIL){
    inorder(T[u].left);
    printf(" %d",u);
    inorder(T[u].right);
  }
}

void postorder(int u){
  if(u != NIL){
    postorder(T[u].left);
    postorder(T[u].right);  
    printf(" %d",u);
  }
}

