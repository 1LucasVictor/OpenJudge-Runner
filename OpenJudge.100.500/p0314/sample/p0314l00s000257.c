#include<stdio.h>
#define MAX 1000
#define NIL -1

struct Node{
  int parent;
  int left;
  int right;
};
struct Node Tree[MAX];
int n;

void pre(int u)
{
  if( u == NIL )return;
  printf(" %d",u);
  pre(Tree[u].left);
  pre(Tree[u].right);
}

void in(int u)
{
  if( u == NIL )return;
  in(Tree[u].left);
  printf(" %d",u);
  in(Tree[u].right);
}

void post(int u)
{
  if( u == NIL )return;
  post(Tree[u].left);
  post(Tree[u].right);
  printf(" %d",u);
}

int main()
{
  int i;
  int right;
  int left;
  int root;
  int k;

  scanf("%d",&n);
  for( i = 0 ; i < n ; i++ ){
    Tree[i].parent = NIL;
  }
  for( i = 0 ; i < n ; i++ ){
    scanf("%d%d%d",&k,&left,&right);
    Tree[k].left = left;
    Tree[k].right = right;
    if( left != NIL )Tree[left].parent = k;
    if( right != NIL )Tree[right].parent = k;
  }
  for( i = 0 ; i < n ; i++ ){
    if( Tree[i].parent == NIL ){
      root = i;
    }
  }
  printf("Preorder\n");
  pre(root);
  printf("\n");
  printf("Inorder\n");
  in(root);
  printf("\n");
  printf("Postorder\n");
  post(root);
  printf("\n");

  return 0;
  
}
  

  
  

