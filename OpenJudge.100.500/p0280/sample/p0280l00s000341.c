#include<stdio.h>
#define N 101
static const int INFTY = (1<<21);

typedef struct
{
  int d,p,color;
}SSS;

int n,M[N][N];
SSS A[N];

int prim();

int main()
{
  int i,j,cnt,v;
  scanf("%d",&n);

  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      scanf("%d",&v);
      if(v != -1)M[i][j] = v;
      else M[i][j] = INFTY;
    }
  }

  cnt = prim();

  printf("%d\n",cnt);

  return 0;
}

int prim()
{
  int min,u,sum,i;

  for(i=0;i<n;i++)
  {
    A[i].d = INFTY;
    A[i].p = -1;
    A[i].color = 0;
  }

  A[0].d = 0;
  while(1)
  {
    min = INFTY;
    u = -1;
    for(i=0;i<n;i++)
    {
      if(min > A[i].d && A[i].color != 2)
      {
        u = i;
        min = A[i].d;
      }
    }

    if(u == -1)break;
    A[u].color = 2;
    for(i=0;i<n;i++)
    {
      if(A[i].color != 2 && M[u][i] != INFTY)
      {
        if(A[i].d > M[u][i])
        {
          A[i].d = M[u][i];
          A[i].p = u;
          A[i].color = 1;
        }
      }
    }
  }
  for(i=0;i<n;i++)
  {
    if(A[i].p != -1)sum += M[i][A[i].p];
  }
  return sum;
}

