#include<stdio.h>
#define N 101

void Print();

int n,A[N][N];

int main()
{
  int v,u,k,i,j;

  scanf("%d",&n);

  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n;j++)A[i][j] = 0;
    scanf("%d%d",&u,&k);
    for(j=1;j<=k;j++)
    {
      scanf("%d",&v);
      A[u][v] = 1;
    }
  }

  Print();

  return 0;
}

void Print()
{
  int i,j;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n;j++)
    {
      if(j == n)printf("%d\n",A[i][j]);
      else printf("%d ",A[i][j]);
    }
  }
}

