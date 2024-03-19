#include <stdio.h>

#define NIL -1

typedef struct{
  int p, l, r;
} node;

node t[10000];
int n;

void preparse(int u)
{
  if (u == NIL)
    return;
  printf(" %d",u);
  preparse(t[u].l);
  preparse(t[u].r);
}

void inparse(int u)
{
  if (u == NIL)
    return;
  inparse(t[u].l);
  printf(" %d",u);
  inparse(t[u].r);
}

void postparse(int u)
{
  if (u == NIL)
    return;
  postparse(t[u].l);
  postparse(t[u].r);
  printf(" %d",u);
}

int main()
{
  int i, x, l, r, root;

  scanf("%d",&n);
  for (i = 0; i < n; i++)
    t[i].p = NIL;
  for (i = 0; i < n; i++){
    scanf("%d%d%d",&x,&l,&r);
    t[x].l = l;
    t[x].r = r;
    if (l != NIL)
      t[l].p = x;
    if (r != NIL)
      t[r].p = x;
  }
  for (i = 0; i < n; i++)
    if (t[i].p == NIL)
      root = i;
  printf("Preorder\n");
  preparse(root);
  printf("\n");
  printf("Inorder\n");
  inparse(root);
  printf("\n");
  printf("Postorder\n");
  postparse(root);
  printf("\n");

  return 0;
}

