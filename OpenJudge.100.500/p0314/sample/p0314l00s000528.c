#include <stdio.h>
#define NIL -1
#define M 10000
typedef struct{
  int l,r,p;
}Node;
Node Tree[M];
int n;
void Preorder(int u){
  if(u==NIL) return;
  printf(" %d",u);
  Preorder(Tree[u].l);
  Preorder(Tree[u].r);
}
void Inorder(int u){
  if(u==NIL)return;
  Inorder(Tree[u].l);
  printf(" %d",u);
  Inorder(Tree[u].r);
}
void Postorder(int u){
  if(u==NIL)return;
  Postorder(Tree[u].l);
  Postorder(Tree[u].r);
  printf(" %d",u);
}
int main(){
  int i,id,left,right,root;
  scanf("%d",&n);
  for(i=0;i<n;i++) Tree[i].p=NIL;
  for(i=0;i<n;i++){
    scanf("%d %d %d",&id,&left,&right);
    Tree[id].l=left;
    Tree[id].r=right;
    if(left!=NIL)Tree[left].p=id;
    if(right!=NIL)Tree[right].p=id;
  }
  for(i=0;i<n;i++)
    if(Tree[i].p==NIL) root=i;
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