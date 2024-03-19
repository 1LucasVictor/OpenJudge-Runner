#include<stdio.h>
#include<stdlib.h>

struct node{
  struct node *R;
  struct node *L;
  struct node *parent;
  int key;
};

typedef struct node * Node;

Node root;

Node tMin(Node);
Node tMax(Node);
Node tSea(Node,int);
Node tSor(Node);
void tDel(Node);
void insert(int);
void inorder(Node);
void preorder(Node);

int main()
{
  int n, i, x;
  char meirei[20];
  
  scanf("%d",&n);/*命令数入力*/
  
  for (i=0;i<n;i++)
    {
      scanf("%s",meirei);/*何の命令か入力*/
      
      if (meirei[0]=='f')/*findが入力された場合*/
	{
	  scanf("%d",&x);/*探す数入力*/
	  
	  Node t = tSea(root,x);/*xがあるかどうか探す*/
	  if ( t != NULL ) printf("yes\n");
	  else printf("no\n");
	}
      else if (meirei[0]=='i')/*insertが入力された場合*/
	{
	  scanf("%d", &x);
	  insert(x);/*二分木にroot追加*/
	}
      else if ( meirei[0] == 'p' )/*printが入力された場合*/
	{
	  inorder(root);/*中間順巡回*/
	  printf("\n");
	  preorder(root);/*先行順巡回*/
	  printf("\n");
	}
      else if ( meirei[0] == 'd' )/*dereteが入力された場合*/
	{
	  scanf("%d", &x);
	  tDel(tSea(root, x));/*削除*/
	}
    }

  return 0;
}

Node tMin(Node x)
{
  while(x->L!=NULL)
    {
      x=x->L;
    }
  return x;
}

Node tMax(Node x)
{
    while(x->R!=NULL)
    {
      x=x->R;
    }
  return x;
}

Node tSea(Node x, int k)
{
  if(x==NULL||k==x->key)return x;
  if(k<x->key)return tSea(x->L,k);
  else return tSea(x->R,k);
}

Node tSor(Node x)
{
  Node y;
  
  if(x->R!=NULL)return tMin(x->R);

  y=x->parent;
  while(y!=NULL&&x==y->R)
    {
      x=y;
      y=y->parent;
    }
  return y;
}

void tDel(Node z)
{
  Node y; // node to be deleted
  Node x; // child of y

  if(z->L==NULL||z->R==NULL)y=z;
  else y=tSor(z);

  if(y->L!=NULL)x=y->L;
  else x=y->R;

  if(x!=NULL)x->parent=y->parent;
  if(y->parent==NULL)root=x;
  else if(y==y->parent->L)y->parent->L=x;
  else  y->parent->R=x;

  if(y!=z)z->key=y->key;
}

void insert(int k)
{
  Node y = NULL;
  Node x = root;
  Node z;

  z = malloc(sizeof(struct node));
  
  z->key = k;
  z->L = NULL;
  z->R = NULL;

  while(x!=NULL)
    {
      y=x;
      if(z->key<x->key)x=x->L;
      else x=x->R;
    }
  z->parent=y;

  if(y==NULL)root=z;
  else if(z->key<y->key)y->L=z;
  else y->R=z;
}

void inorder(Node u)
{
  if(u==NULL)return;
  
  inorder(u->L);
  printf(" %d",u->key);
  inorder(u->R);
}
void preorder(Node u)
{
  if(u==NULL)return;
  printf(" %d",u->key);
  preorder(u->L);
  preorder(u->R);
}

