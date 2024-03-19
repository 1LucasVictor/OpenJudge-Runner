#include<stdio.h>
#define N 10000
#define NIL -1

struct Node{
  int p,l,r;
};

struct Node data[N];
int n;

void preP(int a)
{
  if(a == NIL)
    return;

  printf(" %d",a);

  preP(data[a].l);
  preP(data[a].r);
}

void inP(int a)
{
  if(a == NIL)
    return;

  inP(data[a].l);
  printf(" %d",a);
  inP(data[a].r);
}

void postP(int a)
{
  if(a == NIL)
    return;

  postP(data[a].l);
  postP(data[a].r);
  printf(" %d",a);
}

int main()
{
  int l,r,i,v,way;

  scanf("%d",&n);
  for(i=0; i<n; i++)
    data[i].p = NIL;

  for(i=0; i<n; i++){
    scanf("%d %d %d",&v,&l,&r);
    data[v].l = l;
    data[v].r = r;
    if(l != NIL)
      data[l].p = v;
    if(r != NIL)
      data[r].p = v;
  }

  for(i=0; i<n; i++){
    if(data[i].p == NIL)
      way = i;
  }

  printf("Preorder");
  printf("\n");
  preP(way);
  printf("\n");
  printf("Inorder");
  printf("\n");
  inP(way);
  printf("\n");
  printf("Postorder");
  printf("\n");
  postP(way);
  printf("\n");

  return 0;
}
