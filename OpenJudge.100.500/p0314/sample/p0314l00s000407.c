#include <stdio.h>
#define MAX 10000
#define NIL -1

struct NODE{
  int p,left,right;
};
struct NODE Tree[MAX];
int n;

void inorder(int);
void preorder(int);
void postorder(int);
  int main(){
  int i,j,v,l,r,root=0;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    Tree[i].p=NIL;
  }
  for(i=0;i<n;i++){
    scanf("%d%d%d",&v,&l,&r);
       Tree[v].left=l;
    Tree[v].right=r;
    if(l!=NIL)Tree[l].p=v;
    if(r!=NIL)Tree[r].p=v;
  }
  for(i=0;i<n;i++){
    if(Tree[i].p==NIL)root=i;
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
void preorder(int x){
  if(x==NIL)return;
  printf(" %d",x);
  preorder(Tree[x].left);
  preorder(Tree[x].right);
}
void inorder(int x){
  if(x==NIL)return;
  inorder(Tree[x].left);
  printf(" %d",x);
  inorder(Tree[x].right);
}
void postorder(int x){
      if(x==NIL)return;
  postorder(Tree[x].left);
  postorder(Tree[x].right);
  printf(" %d",x);
}

