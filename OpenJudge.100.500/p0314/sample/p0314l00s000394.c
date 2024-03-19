#include <stdio.h>

#define MAX 10000
#define NIL -1

struct Node{
  int p, l, r;
};
struct Node T[MAX];

int n;

void preorder(int);
void inorder(int);
void postorder(int);

int main()
{
  int id, left, right;
  int i, tmp;
  
  scanf("%d", &n);

  for( i = 0 ; i < n ; i++ ) T[i].p = NIL;

  for( i = 0 ; i < n ; i++ ){
    scanf("%d%d%d", &id, &left, &right);
    T[id].l = left;
    T[id].r = right;
    if( left != NIL ) T[left].p =id;
    if( right != NIL ) T[right].p = id;
  }

  for( i = 0 ; i < n ; i++ ) if( T[i].p == NIL ) tmp = i;

  printf("Preorder\n");
  preorder(tmp);
  printf("\nInorder\n");
  inorder(tmp);
  printf("\nPostorder\n");
  postorder(tmp);
  printf("\n");
  
  return 0;
}

void preorder(int u)
{
  if( u == NIL ) return;
  printf(" %d", u);
  preorder(T[u].l);
  preorder(T[u].r);
}

void inorder(int u)
{
  if( u == NIL ) return;
  inorder(T[u].l);
  printf(" %d", u);
  inorder(T[u].r);
}

void postorder(int u)
{
  if( u == NIL ) return;
  postorder(T[u].l);
  postorder(T[u].r);
  printf(" %d", u);
}