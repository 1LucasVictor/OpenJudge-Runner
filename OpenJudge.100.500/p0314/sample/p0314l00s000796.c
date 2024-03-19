#include<stdio.h>
#include<stdlib.h>
#define M 10000
#define NIL -1

typedef struct
{
  int p;
  int l;
  int r;
}Tree;

Tree T[M];
int n;

void preOrder(int m)
{
  if(m == NIL)
    {
      return;
    }
  printf(" %d", m);
  preOrder(T[m].l);
  preOrder(T[m].r);
}
void inOrder(int m)
{
  if(m == NIL)
    {
      return;
    }
  inOrder(T[m].l);
  printf(" %d", m);
  inOrder(T[m].r);
}
void postOrder(int m)
{
  if(m == NIL)
    {
      return;
    }
  postOrder(T[m].l);
  postOrder(T[m].r);
  printf(" %d", m);
}

int main()
{
  int i, a, b, l, r;
  scanf("%d", &n);
  for(i = 0; i < n; i++)
    {
      T[i].p = NIL;
    }
  for(i = 0; i < n; i++)
    {
      scanf("%d", &b);
      scanf("%d", &l);
      scanf("%d", &r);
      T[b].l = l;
      T[b].r = r;
      if(l != NIL)
	{
	  T[l].p = b;
	}
      if(r != NIL)
	{
	  T[r].p = b;
	}
    }
  for(i = 0; i < n; i++)
    {
      if(T[i].p == NIL)
	{
	  a = i;
	}
    }
  printf("Preorder\n");
  preOrder(a);
  printf("\n");
  printf("Inorder\n");
  inOrder(a);
  printf("\n");
  printf("Postorder\n");
  postOrder(a);
  printf("\n");
  return 0;
}



