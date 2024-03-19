#include <stdio.h>
#define NIL -1

struct Node{
  int parent;
  int left;
  int right;
};
struct Node T[25], V[25], W[25];

void Preorder(int);
void Inorder(int);
void Postorder(int);

int main()
{
  int n, i, j, id, left, right, root;


  scanf("%d",&n);
  for( i=0 ; i<n ; i++ ){
    T[i].parent = NIL;
  }

  for( i=0 ; i<n ; i++ ){
    scanf("%d %d %d",&id,&left,&right);
    T[id].left = left;
    T[id].right = right;
    if(left!=NIL)
      T[left].parent = id;
    if(right!=NIL)
      T[right].parent = id;
  }

  for( i=0 ; i<n ; i++ ){
    V[i] = T[i];
    W[i] = T[i];
    if(T[i].parent==NIL) 
      root = i;
  }

  

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

void Preorder(int u)
{
  if(u==NIL) return;
  printf(" %d",u);
  Preorder(T[u].left);
  Preorder(T[u].right);
}

void Inorder(int u)
{
  if(u==NIL) return;
  Inorder(V[u].left);
  printf(" %d",u);
  Inorder(V[u].right);
}

void Postorder(int u)
{
  if(u==NIL) return;
  Postorder(W[u].left);
  Postorder(W[u].right);
  printf(" %d",u);
}