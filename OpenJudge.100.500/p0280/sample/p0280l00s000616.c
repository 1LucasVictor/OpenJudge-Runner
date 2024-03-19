#include<stdio.h>
#define MAX 100
#define INF 10000000
#define WHITE 0
#define GRAY 1
#define BLACK 2

int prim();

int n,M[MAX][MAX];
int i,j;

int main()
{
  int e;
  
  scanf("%d",&n);

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&e);
      if(e==-1) M[i][j] = INF;
      else M[i][j] = e;
    }
  }

  printf("%d\n",prim());

  return 0;
}

int prim()
{
  int u,minv,v;
  int d[MAX],p[MAX],color[MAX];
  int sum=0;

  for(i=0;i<n;i++){
    d[i] = INF;
    p[i] = -1;
    color[i] = WHITE;
  }

  d[0]=0;

  while(1){
    minv = INF;
    u = -1;
    for(i=0;i<n;i++){
      if(minv > d[i] && color[i] != BLACK){
	u = i;
	minv = d[i];
      }
    }
    if(u == -1) break;
    color[u] = BLACK;
    for(v=0;v<n;v++){
      if(color[v]!=BLACK && M[u][v]!=INF){
	if(d[v] > M[u][v]){
	  d[v] = M[u][v];
	  p[v] = u;
	  color[v] = GRAY;
	}
      }
    }
  }
  for(i=0;i<n;i++){
    if(p[i]!=-1) sum += M[i][p[i]];
  }

  return sum;
}

