#include<stdio.h>

typedef struct tree{
  int N,L,R;
}tree;

tree T[10000];

void prewalk(int);
void inwalk(int);
void poswalk(int);

void prewalk(int x)
{
  if(x == -1)
    return;
  printf(" %d",x);
  prewalk(T[x].L);
  prewalk(T[x].R);
}

void inwalk(int y)
{
  if(y == -1)
    return;
  inwalk(T[y].L);
  printf(" %d",y);
  inwalk(T[y].R);
}

void poswalk(int z)
{
  if(z == -1)
    return;
  poswalk(T[z].L);
  poswalk(T[z].R);
  printf(" %d",z);
}
    
    
int main()
{
  int n,num,lef,rig,root;
  int i;

  scanf("%d",&n);

  for(i=0;i<n;i++)
    T[i].N = -1;

  for(i=0;i<n;i++) {
    scanf("%d%d%d",&num,&lef,&rig);
    T[num].L = lef;
    T[num].R = rig;
    if(lef != -1)
      T[lef].N = num;
    if(rig != -1)
      T[rig].N = num;
  }

  for(i=0;i<n;i++)
    if(T[i].N == -1)
      root = i;

  printf("Preorder\n");
  prewalk(root);
  printf("\nInorder\n");
  inwalk(root);
  printf("\nPostorder\n");
  poswalk(root);
  printf("\n");

  return 0;
}

