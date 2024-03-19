#include <stdio.h>
#include <stdlib.h>
typedef struct data *node;
struct data
{
  int key;
  node par;
  node left;
  node right;
};

node root,NIL;
void insert(int k)
{
  node y=NIL;
  node x=root;
  node z;

  z=(node)malloc(sizeof(struct data));
  z->key=k;
  z->left=NIL;
  z->right=NIL;


  while(x!=NIL)
  {
    y=x;
    if(z->key<x->key)x=x->left;
    else x=x->right;
  }
  z->par=y;
  if(y==NIL)root=z;
  else
  {
    if(z->key<y->key)y->left=z;
    else y->right=z;
  }
}
void InOrder(node u)
{
  if(u==NIL) return;//,
  InOrder(u->left);
  printf(" %d",u->key);
  InOrder(u->right);
}
void Preorder(node u)
{
  if(u==NIL)return;
  printf(" %d",u->key);
  Preorder(u->left);
  Preorder(u->right);
}
node find(node x,int k)
{
  while(x!=NIL&&k!=x->key)
  {
    if(k<x->key)x=x->left;
    else x=x->right;
  }
  return x;
}
int main()
{
  int n,i,x;
  char str[10];
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%s",str);
    if(str[0]=='f')
    {
      scanf("%d",&x);
      node t=find(root,x);
      if(t!=NIL)printf("yes\n");
      else printf("no\n");
    }
    if(str[0]=='i')
    {
      scanf("%d",&x);
      insert(x);
    }
    else if(str[0]=='p')
    {

      InOrder(root);
      printf("\n");
      Preorder(root);
      printf("\n");

    }
  }
  return 0;
}

