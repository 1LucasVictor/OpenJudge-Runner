#include<stdio.h>

typedef struct{
  int r;
  int left;
  int right;
}Tree;

Tree tree[100];
int n;

void preorder(int r){
  if(r==-1) return;
  printf(" %d",r);
  preorder(tree[r].left);
  preorder(tree[r].right);
}

void inorder(int r){
  if(r==-1) return;
  inorder(tree[r].left);
  printf(" %d",r);
  inorder(tree[r].right);
}

void postorder(int r){
  if(r==-1) return;
  postorder(tree[r].left);
  postorder(tree[r].right);
  printf(" %d",r);
}

int main(){
  int i,root,r,left,right;

  scanf("%d",&n);

  for(i=0;i<n;i++){
    tree[i].r=-1;
  }
  for(i=0;i<n;i++){
    scanf("%d%d%d",&r,&left,&right);
    tree[r].left=left;
    tree[r].right=right;
    if(left != -1) tree[left].r=r;
    if(right!=-1) tree[right].r=r;
  }
  for(i=0;i<n;i++){
    if(tree[i].r == -1)root = i;
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