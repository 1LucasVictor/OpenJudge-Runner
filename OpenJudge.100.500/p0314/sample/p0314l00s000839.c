#include <stdio.h>
#include <stdlib.h>

void preorder(int);
void inorder(int);
void postorder(int);

typedef struct node{
  int pa;
  int le;
  int ri;
}TREE;

TREE tree[26];
int n;

int main(){
  int i,node,left,right,root;
  scanf("%d",&n);
  if(n>25) exit(2);
  for(i=0;i<n;i++) {
    tree[i].pa=tree[i].le=tree[i].ri=-1;
  }
  for(i=0;i<n;i++){
    scanf("%d %d %d",&node,&left,&right);
    if(left != -1){
      tree[left].pa=node;
      tree[node].le=left;
    }
    if(right != -1){
      tree[right].pa=node;
      tree[node].ri=right;
    }
  }
  for(i=0;i<n;i++){
    if(tree[i].pa==-1) root=i;
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
  if(u == -1)return;
  printf(" %d",u);
  preorder(tree[u].le);
  preorder(tree[u].ri);
}

void inorder(int u){
  if(u == -1)return;
  inorder(tree[u].le);
  printf(" %d",u);
  inorder(tree[u].ri);
}

void postorder(int u){
  if(u == -1)return;
  postorder(tree[u].le);
  postorder(tree[u].ri);
  printf(" %d",u);
}

