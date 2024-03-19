#include <stdio.h>
struct Node {
  int parent;
  int left;
  int right;
};
int n;
void Preorder(int);
void Inorder(int);
void Postorder(int);
struct Node tree[30];
int dipth[30],height[30];
int main(){
  int i,id,left,right,root;
  scanf("%d",&n);
  for(i=0;i<n;i++)tree[i].parent=tree[i].left=tree[i].right=-1;
  for(i=0;i<n;i++){
    scanf("%d %d %d",&id,&left,&right);
    tree[id].left=left;
    tree[id].right=right;
    if(left!=-1)tree[left].parent=id;
    if(right!=-1)tree[right].parent=id;
  }
  for(i=0;i<n;i++){
    if(tree[i].parent==-1)root=i;
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
void Preorder(int u){
  if(u==-1)return;
  printf(" %d",u);
  Preorder(tree[u].left);
  Preorder(tree[u].right);
}
void Inorder(int u){
  if(u==-1)return;
  Inorder(tree[u].left);
  printf(" %d",u);
  Inorder(tree[u].right);
}
void Postorder(int u){
  if(u==-1)return;
  Postorder(tree[u].left);
  Postorder(tree[u].right);
  printf(" %d",u);
}


