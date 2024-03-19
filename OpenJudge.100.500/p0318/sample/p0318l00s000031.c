#include<stdio.h>
#include<stdlib.h>
#define NIL NULL
#define N 500000

struct node{
  struct node *right;
  struct node *left;
  struct node *parent;
  int key;
};
typedef struct node * Node;

Node root;

Node TreeMinimum(Node x)
{
  while( x -> left != NIL )
    x = x -> left;
  return x;
}

Node TreeMaximum(Node x)
{
  while( x -> right != NIL )
    x = x -> right;
  return x;
}

Node TreeSuc(Node x)
{
  if ( x -> right != NIL )
    return TreeMinimum(x -> right);
  Node y = x -> parent;
  while( y != NIL && x == y -> right )
  {
    x = y;
    y = y -> parent;
  }
  return y;
}

Node TreeSearch(Node u, int k)
{
  while( u != NIL && k != u -> key )
  {
    if ( k < u -> key )
      u = u -> left;
    else
      u = u -> right;
  }
  return u;
}
void TreeDelete(Node z)
{
  Node y;
  Node x;

  if ( z -> left == NIL || z -> right == NIL )
    y = z;
  else
    y = TreeSuc(z);
  if ( y -> left != NIL )
    x = y -> left;
  else
    x = y -> right;

  if ( x != NIL )
    x -> parent = y -> parent;

  if ( y -> parent == NIL )
    root = x;
  else
  {
    if (y == y -> parent -> left)
      y -> parent -> left = x;
    else
      y -> parent -> right = x;
  }

  if ( y != z )
    z -> key = y -> key;
  free(y);
}

void Insert(int k)
{
  Node y = NIL;
  Node x = root;
  Node z;

  z = malloc(sizeof(struct node));
  z -> key = k;
  z -> left = NIL;
  z -> right = NIL;

  while( x != NIL )
  {
    y = x;
    if ( z -> key < x -> key )
      x = x -> left;
    else
      x = x -> right;
  }

  z -> parent = y;
  if ( y == NIL )
    root = z;
  else
  {
    if (z -> key < y -> key)
      y -> left = z;
    else
      y -> right = z;
  }
}

void Inorder(Node u)
{
  if ( u == NIL )
    return;
  Inorder(u -> left);
  printf(" %d", u -> key);
  Inorder(u -> right);
}
void Preorder(Node u)
{
  if ( u == NIL )
    return;
  printf(" %d", u -> key);
  Preorder(u -> left);
  Preorder(u -> right);
}


int main()
{
  int n, i, x;
  char S[20];
  scanf("%d", &n);
  if(n > N)exit(1);
  
  for ( i = 0; i < n; i++ )
  {
    scanf("%s", S);
    if ( strcmp(S, "find") == 0 )
    {
      scanf("%d", &x);
      Node t = TreeSearch(root, x);
      if ( strcmp(S, "findMin") == 0 )
      {
	      Node minn = TreeMinimum(t);
	      printf("%d\n", minn -> key);
      }
      else if ( strcmp(S, "findMax") == 0 )
      {
	      Node maxn = TreeMaximum(t);
	      printf("%d\n", maxn -> key);
      }
      else
      {
	      if ( t != NIL )
          printf("yes\n");
	      else
          printf("no\n");
      }
    }
    else if ( S[0] == 'i' )
    {
      scanf("%d", &x);
      Insert(x);
    }
    else if ( strcmp(S, "print") == 0 )
    {
      Inorder(root);
      printf("\n");
      Preorder(root);
      printf("\n");
    }
    else if ( strcmp(S, "delete") == 0 )
    {
      scanf("%d", &x);
      TreeDelete(TreeSearch(root, x));
    }
  }

  return 0;
}

