#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
  struct node *parent;
  struct node *left;
  struct node *right;
  int key;
};
typedef struct node * Node;

void insert(int);
void preorder(Node);
void inorder(Node);
void Tprint(Node);
void find(Node, int);
Node get(Node, int);
Node successor(Node);
void delete(Node);
Node min(Node);
Node root;

int main()
{
  int m, i, k;
  char str[8];

  scanf("%d", &m);
  for(i=0; i<m; i++)
    {
      scanf("%s", str);
      if(strcmp(str, "insert") == 0)
	{
	  scanf("%d", &k);
	  insert(k);
	}
      else if(strcmp(str, "print") == 0)
	{
	  Tprint(root);
	}
      else if(strcmp(str, "find") == 0)
	{
	  scanf("%d",&k);
	  find(root,k);
	}
      else if(strcmp(str, "delete") == 0)
	{
	  scanf("%d",&k);
	  delete(get(root,k));
	}
    }
  
  
  return 0;
}

void insert(int key)
{
  Node t, x, y;
  t = (Node)malloc(sizeof(struct node));
  t->key=key;
  t->right = NULL;
  t->left = NULL;
  y = NULL;
  x = root;

  while(x != NULL)
    {
      y = x;
      if(key<x->key)
	x = x->left;
      else
	x = x->right;
    }
  t->parent = y;

  if(y==NULL)
    root = t;
  else if(t->key<y->key)
    y->left = t;
  else
    y->right = t;
}

void preorder(Node T)
{
  if(T == NULL) return;

  printf(" %d", T->key);
  preorder(T->left);
  preorder(T->right);
}
void inorder(Node T)
{
  if(T == NULL) return;

  inorder(T->left);
  printf(" %d", T->key);
  inorder(T->right);
}
void Tprint(Node T)
{
  inorder(T);
  printf("\n");
  preorder(T);
  printf("\n");
}
void find(Node T, int key)
{
  if(T == NULL)
    {
      printf("no\n");
      return;
    }
  else if(key == T->key)
    {
      printf("yes\n");
      return;
    }

  if(key<T->key)
    find(T->left,key);
  else
    find(T->right,key);
}
Node get(Node T, int key)
{
  if(T == NULL)
    {
      return NULL;
    }
  else if(key == T->key)
    {
      return T;
    }

  if(key<T->key)
    return get(T->left,key);
  else
    return get(T->right,key);
}
Node min(Node x){
  while(x->left != NULL){
    x = x->left;
  }
  return x;
}
Node successor(Node T)
{
  Node y,m;
  if(T->right != NULL)
    {
      return min(T->right);
    }

  y=T->parent;
  while(y!=NULL && T==y->right)
    {
      T=y;
      y=y->parent;
    }
  return y;
  }
void delete(Node T)
{
  Node x, y;
  
  if(T->left == NULL || T->right==NULL)
    y=T;
  else
    y=successor(T);

  if(y->left!=NULL)
    x=y->left;
  else
    x=y->right;

  if(x!=NULL)
    {
      x->parent = y->parent;
    }
  
  if(y->parent==NULL)
    root=x;
  else if(y==y->parent->left)
    y->parent->left=x;
  else
    y->parent->right=x;

  if(y!=T)
    T->key=y->key;
}