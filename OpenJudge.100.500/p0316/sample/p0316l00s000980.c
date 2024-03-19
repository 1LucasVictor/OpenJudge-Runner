#include<stdio.h>
#include<stdlib.h>

 struct node{
   struct node *right;
   struct node *left;
   struct node *parent;
   int key;
};

typedef struct node * Node;

Node root = NULL;

void insert(int k)
{
  Node x = root;
  Node y = NULL;
  Node z;

  z = malloc(sizeof(struct node));
  z->key = k;
  z->left = NULL;
  z->right = NULL;

  while(x != NULL)
    {
      y = x;
      
      if(z->key < x->key)
	{
	  x = x->left;
	}
      else x = x->right;
    }

  z->parent = y;

  if(y == NULL)root = z;
  else if(z->key < y->key)y->left = z;
  else y->right = z;

  return;
}

void inorder(Node x)
{
  if(x != NULL)
    {
      inorder(x->left);
      printf(" %d", x->key);
      inorder(x->right);
    }
  return;
}

void preorder(Node x)
{
  if(x == NULL)return;

  printf(" %d", x->key);
  preorder(x->left);
  preorder(x->right);

  return;
}

int main()
{
  int i;
  int m, k;
  char com[10];

  scanf("%d", &m);

  for(i = 0; i < m; i++)
    {
      scanf("%s", com);
      
      if(com[0] == 'i')
	{
	  scanf("%d", &k);
	  insert(k);
	}
      if(com[0] == 'p')
	{
	  inorder(root);
	  printf("\n");
	  preorder(root);
	  printf("\n");
	}     
    }
  
  return 0;
}

