#include<stdio.h>
#define MAX  500
#define inf 1e8
#define WHITE  0
#define GRAY  1
#define BLACK  2


int n;
int A[MAX][MAX];

void dijkstra(){
  int mincost,i,u,j;
  int d[MAX],color[MAX];

  for(i=0;i<n;i++){
    d[i] = inf;
    color[i] = WHITE;
  }

  d[0] = 0;
  color[0] = GRAY;
  while(1){
    mincost = inf;
    u = -1;
    for(i = 0;i < n;i++){
      if(mincost > d[i] && color[i] != BLACK){
        mincost = d[i];
		u = i;

      }
    }
    if(u == -1) break;
    color[u] = BLACK;
    for(j=0;j<n;j++){
      if(color[j] != BLACK && A[u][j] != inf){
        if(d[j] > d[u] + A[u][j]){
          d[j] = d[u] + A[u][j];
          color[j] = GRAY;
        }
      }
    }
  }
  for(i=0; i<n; i++){
    if(d[i] != inf) printf("%d %d\n", i, d[i]);
    else printf("%d -1\n", i);
  }
}

int main(){
  int i,j,u,k,v,c;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      A[i][j] = inf;
    }
  }
  for(i=0;i<n;i++){
    scanf("%d%d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d%d",&v,&c);
      A[u][v] = c;
    }
  }

  dijkstra();
  return 0;
}
