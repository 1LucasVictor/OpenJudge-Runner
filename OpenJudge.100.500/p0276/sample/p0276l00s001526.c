#include<stdio.h>
#define MAX 100

typedef struct{
  int u;
  int k;
  int v[MAX];
}G;

void AdjacencyMatrices(int,int);
int a[MAX][MAX],n;
G graph[MAX];

int main()
{
  int i,j;

  scanf("%d",&n);
  for(i = 1;i <= n;i++){
    scanf("%d%d",&graph[i].u,&graph[i].k);
    for(j = 1;j <= graph[i].k;j++){
      if(graph[i].k == 0) break;
      scanf("%d",&graph[i].v[j]);
    }
  }

  for(i = 1;i <= n;i++){
    for(j = 1;j <= graph[i].k;j++){
      AdjacencyMatrices(i,j);
    }   
  }

  for(i = 1;i <= n;i++){
    for(j = 1;j <= n;j++){
      if(i == n && j == n) printf("%d",a[n][n]);
      else printf("%d ",a[i][j]);
    }
    printf("\n");
  }
  return 0;
}

void AdjacencyMatrices(int x,int y)
{
  int i;

    for(i = 1;i <= n;i++){
      if(graph[x].v[y] == i) a[x][i] += 1;
      else a[x][i] += 0;
    }
    i++;
}