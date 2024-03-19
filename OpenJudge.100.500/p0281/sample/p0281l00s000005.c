/*
  Topic12 ProblemB 単一始点最短経路
  与えられた重み付き有向グラフG=(V,E)について、単一始点最短経路のコストを求める
  プログラムを作成してください。
  Gの頂点0を始点とし,0から各頂点vについて、
  最短経路上の辺の重みの総和 d[v] を出力してください。
*/
#include<stdio.h>

#define MAX 100
#define INFTY 100008
#define WHITE 0
#define GRAY 1
#define BLACK 2

void dijkstra(void);

int n, M[MAX][MAX];

int main()
{
  int i, j, k, c, u, v;

  scanf("%d", &n);
  //Initialize
  for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
        {
          M[i][j] = INFTY;
        }
    }

  for(i=0;i<n;i++)
    {
      scanf("%d%d", &u, &k);
      for(j=0;j<k;j++)
        {
          scanf("%d%d", &v, &c);
          M[u][v] = c;
        }
    }

    dijkstra();

  return 0;
}

void dijkstra(void)
{
  int i, j, minv, u, v;
  int d[MAX], color[MAX];

  for(i=0;i<n;i++)
    {
      color[i] = WHITE;
      d[i] = INFTY;
    }

  color[0] = GRAY;
  d[0] = 0;
  while(1)
    {
      minv = INFTY;
      u = -1;
      for(i=0;i<n;i++)
        {
          if(minv > d[i] && color[i] != BLACK)
            {
              u = i; minv = d[i];
            }
        }
      if(u == -1)break;
      color[u] = BLACK;
      for(v=0;v<n;v++)
        {
          if(color[v] != BLACK && M[u][v] != INFTY)
            {
              if(d[v] > d[u] + M[u][v])
                {
                  d[v] = d[u] + M[u][v];
                  color[v] = GRAY;
                }
            }
        }
    }
    for(i=0;i<n;i++)
      {
        printf("%d %d\n", i, d[i]);
      }
}

