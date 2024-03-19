//Binary tree search

#include<stdio.h>
#include<stdlib.h>
#define N NULL

typedef struct node
{

  struct node *p, *l, *r;
  int w;

}*tree;

void prepare(tree *root, int w)
{
  (*root) = (tree)malloc(sizeof(struct node));
  (*root)->p = N;
  (*root)->l = N;
  (*root)->r = N;
  (*root)->w = w;
  
}

void ins(tree *root, tree imp)
{
  tree y = N;
  tree x = *root;

  while(x != N)
    {
      y = x;
      if(imp->w < x->w)
	{
	  x = x->l;
	} else {
	x = x->r;
      }
    }

  imp->p = y;


  if(y == N)
    {
      *root = imp;
    }
  else if(imp->w > y->w)
    {
      y->r = imp;
    }
  else y->l = imp;
}

void inorder(tree imp)
{
  if(imp != N)
    {
      inorder(imp->l);
      printf(" %d",imp->w);
      inorder(imp->r);
    }
}

void preorder(tree imp)
{
  if(imp != N)
    {
      printf(" %d",imp->w);
      preorder(imp->l);
      preorder(imp->r);
    }
}

void print(tree root)
{
  inorder(root);
  printf("\n");
  preorder(root);
  printf("\n");
}

int main()
{
  tree root, imp;

  root = N;

  int n,w,i;
  char arr[10];

  //input data
  scanf("%d",&n);
  for(i = 0; i < n; i++)
    {
      scanf("%s",arr);

      if(arr[0] == 'i')
	{
	  scanf("%d",&w);

	  prepare(&imp,w);

	  ins(&root,imp);
	}

      if(arr[0] == 'p')
	{
	  print(root);
	}
    }

  return 0;
}


