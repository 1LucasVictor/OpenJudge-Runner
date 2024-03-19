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