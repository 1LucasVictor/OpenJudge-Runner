#include <stdio.h>
#include <stdlib.h>

//#define DEBUG

typedef struct node{
  int left;
  int right;
  int parent;
}node;

void Preorder(int);
void Inorder(int);
void Postorder(int);

node* tree;
int n;

int main(){
  int i,n,id,left,right,root;

  scanf("%d",&n);

  tree = (node *)malloc(sizeof(node)*n);

  for(i=0;i<n;i++) tree[i].parent = -1;
  for(i=0;i<n;i++){
    scanf("%d %d %d",&id,&left,&right);
    tree[id].left=left;
    tree[id].right=right;
    if(left!=-1) tree[left].parent=id;
    if(right!=-1) tree[right].parent=id;
  }

  for(i=0;i<n;i++){
    if(tree[i].parent==-1) break;
  }
  root=i;

  #ifdef DEBUG
  printf("debug\n");
  printf("n=%d\n",n);
  for(i=0;i<n;i++){
    printf("%d %d %d parent=%d\n",i,tree[i].left,tree[i].right,tree[i].parent);
  }
  #endif

  printf("Preorder\n");
  Preorder(root);
  printf("\n");

  printf("Inorder\n");
  Inorder(root);
  printf("\n");

  printf("Postorder\n");
  Postorder(root);
  printf("\n");

  return 0;
}

void Preorder(int c){
  printf(" %d",c);
  if(tree[c].left != -1) Preorder(tree[c].left);
  if(tree[c].right != -1) Preorder(tree[c].right);
  return;
}

void Inorder(int c){
  if(tree[c].left != -1) Inorder(tree[c].left);
  printf(" %d",c);
  if(tree[c].right != -1) Inorder(tree[c].right);
  return;
}

void Postorder(int c){
  if(tree[c].left != -1) Postorder(tree[c].left);
  if(tree[c].right != -1) Postorder(tree[c].right);
  printf(" %d",c);
  return;
}