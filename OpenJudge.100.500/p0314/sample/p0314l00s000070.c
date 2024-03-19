#include<stdio.h>

#define N 100000
#define nil -1

struct Node
{
  int le;
  int ri;
  int pa;
};
int deep(int, int);

struct Node tree[N];


void post(int);
void pre(int);
void ino(int);

int D[N];

int main()
{
  int n,i,v,l,r,root;

  scanf("%d",&n);

  for(i=0; i<n; i++) tree[i].pa = nil;

  for(i=0; i<n; i++)
    {
      scanf("%d%d%d",&v,&l,&r);

      tree[v].le=l;
      tree[v].ri=r;
      if(l != nil) tree[l].pa=v;
      if(r != nil) tree[r].pa=v;
    }

  for(i=0; i<n; i++) if(tree[i].pa==nil) root=i;

  for(i=0; i<n; i++)
    {
      if(tree[i].pa==nil) r=i;
    }
  
  printf("Preorder\n");
  pre(root);
  printf("\n");

  printf("Inorder\n");
  ino(root);
  printf("\n");

  printf("Postorder\n");
  post(root);
  printf("\n");

  for(i=0; i<n; i++)
    {
      if(tree[i].pa==nil) r=i;
    }
  

  return 0;
}


void post(int u)
{
  if(u==nil) return;

  post(tree[u].le);
  post(tree[u].ri);
  printf(" %d",u);
}

void pre(int u)
{
  if(u==nil) return;
  printf(" %d",u);
  pre(tree[u].le);
  pre(tree[u].ri);
}

void ino(int u)
{
  if(u==nil) return;
  ino(tree[u].le);
  printf(" %d",u);
  ino(tree[u].ri);
}
    
int deep(int u,int p)
{
  D[u]=p;
  if(tree[u].ri != nil) deep(tree[u].ri,p);
  if(tree[u].le != nil) deep(tree[u].le,p+1);
}

