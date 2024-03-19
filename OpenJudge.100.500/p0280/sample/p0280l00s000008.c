#include<stdio.h>
#define INF 100000
#define MAX 101

int G[MAX][MAX];
int n;

void prim();

int main()
{
  int c;
  int i,j;

  scanf("%d",&n);

  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      scanf("%d",&c);
      if(c == -1)
      {
        G[i][j] = INF;
      }else
      {
        G[i][j] = c;
      }
    }
  }

  prim();
  return 0;
}

void prim()
{
  int i,j;
  int d[MAX],pi[MAX],color[MAX];
  int min,a,b,sum=0;

  for(i=0;i<n;i++)
  {
    d[i] = INF;
    pi[i] = -6;
    color[i] = 0;
  }

  d[0] = 0;

  while(1)
  {
    min = INF;
    a = -6;
    for(i=0;i<n;i++)
    {
      if(color[i] != 2 && d[i] < min)
      {
        min = d[i];
        a = i;
      }
    }

    if(a == -6)
    {
      break;
    }
    color[a] = 2;
    for(b=0;b<n;b++)
    {
      if(color[b] != 2 && G[a][b] != INF)
      {
        if(d[b] > G[a][b])
        {
          d[b] = G[a][b];
          pi[b] = a;
          color[b] = 1;
        }
      }
    }
  }
  for(i=0;i<n;i++)
  {
    if(pi[i] != -6)sum += G[i][pi[i]];
  }
  printf("%d\n",sum);
}

