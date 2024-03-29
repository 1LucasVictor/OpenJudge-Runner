#include <stdio.h>
#include <stdlib.h>
#define NIL NULL

struct node {
  int key;
  struct node *right;
  struct node *left;
  struct node *parent;
};
typedef struct node * Node;
Node root;
void Insert(int );
void inorder(Node );
void preorder(Node );
Node search(Node, int);
Node treeSuccessor(Node );
void treeDelete(Node );
Node treeMinimum(Node);
int main()
{
  int i,j,k,yflag=0,nflag=0,x;
  char c[10];
  Node a;
  scanf("%d",&k);

  for(i=0;i<k;i++)
    {
      scanf("%s",&c[0]);
      if(c[0]=='f')
        {
          scanf("%d",&j);
          a=search(root,j);
          if(a!=NIL) printf("yes\n");
          else printf("no\n");
        }
      if(c[0]=='i')
        {
          scanf("%d",&j);
          Insert(j);
        }
else if(c[0]=='p')
        {
          inorder(root);
          printf("\n");
          preorder(root);
          printf("\n");
        }
else if(c[0]=='d')
        {
          scanf("%d",&x);
          treeDelete(search(root,x));
        }

    }
  return 0;
}

void Insert(int p)
{
  Node x=root;
  Node y=NIL;
  Node z;

  z=(Node )malloc(sizeof(struct node));
  z->key=p;
  z->left=NIL;
  z->right=NIL;

  while(x!=NIL)
    {
      y=x;
      if(z->key < x->key) x=x->left;
      else x=x->right;

z->parent=y;
    }
  if(y==NIL) root=z;
  else if(z->key < y->key) y->left=z;
  else  y->right=z;
}

void inorder(Node x)
{
  if(x==NIL) return;
  inorder(x->left);
  printf(" %d",x->key);
  inorder(x->right);
}

void preorder(Node x)
{
  if(x==NIL) return;
  printf(" %d",x->key);
  preorder(x->left);
  preorder(x->right);
}
Node search(Node u,int k)
{
  while(u!=NIL && k!=u->key)
    {
      if(k < u->key) u=u->left;
      else u=u->right;
    }
  return u;
}

Node treeSuccessor(Node x)
{
  Node y;
  if(x->right!=NIL) return treeMinimum(x->right);
  y=x->parent;
  while(y!=NIL&&x==y->right)
    {
      x=y;
      y=y->parent;
    }
  return y;
}
void treeDelete(Node z)
{
  Node y,x;

  if(z->left==NIL||z->right==NIL) y=z;
  else y=treeSuccessor(z);
  if(y->left!=NIL)  x=y->left;
  else  x=y->right;

  if(x!=NIL)  x->parent=y->parent;
  if(y->parent==NIL) root=x;
  else
    {
      if(y==y->parent->left)  y->parent->left=x;
      else y->parent->right=x;
    }
  if(y!=z)  z->key=y->key;

  free(y);
}

Node treeMinimum(Node x)
{
  while(x->left!=NIL) x=x->left;
  return x;
}