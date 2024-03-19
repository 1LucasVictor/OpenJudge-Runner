#include <stdio.h>
#include <stdlib.h>

typedef struct{
  int p;
  int l;
  int r;
}NODE;

void Preorder(int);
void Inorder(int);
void Postorder(int);

NODE A[300];

int main()
{
  int n,i,id,l,r,root;

  scanf("%d",&n);
  if(n<1 || n>25) exit(1);

  for(i=0;i<n;i++)
    A[i].p = -1; //rootの判定をするため
  
  for(i=0;i<n;i++){
    scanf("%d %d %d",&id,&l,&r);
    A[id].l = l; 
    A[id].r = r;
    if(l != -1) A[l].p = id; //子がいたらその子の親を設定
    if(r != -1) A[r].p = id; //同上
  }

  for(i=0;i<n;i++){
    if(A[i].p == -1) root = i;
  }

  printf("Preorder\n");
  Preorder(root); //上→左→右
  printf("\nInorder\n");
  Inorder(root); //左→上→右
  printf("\nPostorder\n");
  Postorder(root); //左→右→上
  printf("\n");
  
  return 0;
}
void Preorder(int root)
{
  if(root == -1) return; 
  printf(" %d",root); //上
  Preorder(A[root].l); //左
  Preorder(A[root].r); //右
}

void Inorder(int root)
{
  if(root == -1) return;
  Inorder(A[root].l); //左
  printf(" %d",root); //上
  Inorder(A[root].r); //右
}

 void Postorder(int root)
 {
   if(root == -1) return ;
   Postorder(A[root].l); //左
   Postorder(A[root].r); //右
   printf(" %d",root); //上
 }

