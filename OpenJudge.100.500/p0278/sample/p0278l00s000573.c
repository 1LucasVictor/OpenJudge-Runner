#include<stdio.h>
#define MAX 100

typedef struct{
  int u;
  int k;
  int v[MAX];
  int path;
}Graph;

void AdjacencyMatrices(int,int);
void BreadthFirstSearch();

Graph g[MAX];
int n,a[MAX][MAX];

int main()
{
  int i,j;

  scanf("%d",&n);
  for(i = 1;i <= n;i++){
    scanf("%d%d",&g[i].u,&g[i].k);
    for(j = 1;j <= g[i].k;j++){
      if(g[i].k == 0) break;
      scanf("%d",&g[i].v[j]);
    }
  }
  for(i = 1;i <= n;i++){
    for(j = 1;j <= g[i].k;j++){
      AdjacencyMatrices(i,j);
    }
  }

  for(i = 1; i <= n;i++){
    g[i].path = 0;
  }

  BreadthFirstSearch();

  for(i = 1;i <= n;i++){
    printf("%d %d\n",g[i].u,g[i].path);
  }
  return 0;
}

void AdjacencyMatrices(int x,int y)
{
  int i;

  for(i = 1;i <= n;i++){
    if(g[x].v[y] == i) a[x][i] += 1;
    else a[x][i] += 0;
  }
}

void BreadthFirstSearch()
{
  int i,j;

  for(i = 1;i <= n;i++){
    if(a[1][i] == 1) g[i].path = 1;
  }

  for(i = 2;i <= n;i++){
    for(j = 1;j <= n;j++){
      if(a[i][j] == 1 && a[1][j] == 0) g[j].path = g[i].path + 1;
    }
  }
}